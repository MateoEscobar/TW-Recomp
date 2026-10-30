#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019C1D0
// Address: 0x19c1d0 - 0x19c328
void sub_0019C1D0_0x19c1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019C1D0_0x19c1d0");
#endif

    switch (ctx->pc) {
        case 0x19c1d0u: goto label_19c1d0;
        case 0x19c1d4u: goto label_19c1d4;
        case 0x19c1d8u: goto label_19c1d8;
        case 0x19c1dcu: goto label_19c1dc;
        case 0x19c1e0u: goto label_19c1e0;
        case 0x19c1e4u: goto label_19c1e4;
        case 0x19c1e8u: goto label_19c1e8;
        case 0x19c1ecu: goto label_19c1ec;
        case 0x19c1f0u: goto label_19c1f0;
        case 0x19c1f4u: goto label_19c1f4;
        case 0x19c1f8u: goto label_19c1f8;
        case 0x19c1fcu: goto label_19c1fc;
        case 0x19c200u: goto label_19c200;
        case 0x19c204u: goto label_19c204;
        case 0x19c208u: goto label_19c208;
        case 0x19c20cu: goto label_19c20c;
        case 0x19c210u: goto label_19c210;
        case 0x19c214u: goto label_19c214;
        case 0x19c218u: goto label_19c218;
        case 0x19c21cu: goto label_19c21c;
        case 0x19c220u: goto label_19c220;
        case 0x19c224u: goto label_19c224;
        case 0x19c228u: goto label_19c228;
        case 0x19c22cu: goto label_19c22c;
        case 0x19c230u: goto label_19c230;
        case 0x19c234u: goto label_19c234;
        case 0x19c238u: goto label_19c238;
        case 0x19c23cu: goto label_19c23c;
        case 0x19c240u: goto label_19c240;
        case 0x19c244u: goto label_19c244;
        case 0x19c248u: goto label_19c248;
        case 0x19c24cu: goto label_19c24c;
        case 0x19c250u: goto label_19c250;
        case 0x19c254u: goto label_19c254;
        case 0x19c258u: goto label_19c258;
        case 0x19c25cu: goto label_19c25c;
        case 0x19c260u: goto label_19c260;
        case 0x19c264u: goto label_19c264;
        case 0x19c268u: goto label_19c268;
        case 0x19c26cu: goto label_19c26c;
        case 0x19c270u: goto label_19c270;
        case 0x19c274u: goto label_19c274;
        case 0x19c278u: goto label_19c278;
        case 0x19c27cu: goto label_19c27c;
        case 0x19c280u: goto label_19c280;
        case 0x19c284u: goto label_19c284;
        case 0x19c288u: goto label_19c288;
        case 0x19c28cu: goto label_19c28c;
        case 0x19c290u: goto label_19c290;
        case 0x19c294u: goto label_19c294;
        case 0x19c298u: goto label_19c298;
        case 0x19c29cu: goto label_19c29c;
        case 0x19c2a0u: goto label_19c2a0;
        case 0x19c2a4u: goto label_19c2a4;
        case 0x19c2a8u: goto label_19c2a8;
        case 0x19c2acu: goto label_19c2ac;
        case 0x19c2b0u: goto label_19c2b0;
        case 0x19c2b4u: goto label_19c2b4;
        case 0x19c2b8u: goto label_19c2b8;
        case 0x19c2bcu: goto label_19c2bc;
        case 0x19c2c0u: goto label_19c2c0;
        case 0x19c2c4u: goto label_19c2c4;
        case 0x19c2c8u: goto label_19c2c8;
        case 0x19c2ccu: goto label_19c2cc;
        case 0x19c2d0u: goto label_19c2d0;
        case 0x19c2d4u: goto label_19c2d4;
        case 0x19c2d8u: goto label_19c2d8;
        case 0x19c2dcu: goto label_19c2dc;
        case 0x19c2e0u: goto label_19c2e0;
        case 0x19c2e4u: goto label_19c2e4;
        case 0x19c2e8u: goto label_19c2e8;
        case 0x19c2ecu: goto label_19c2ec;
        case 0x19c2f0u: goto label_19c2f0;
        case 0x19c2f4u: goto label_19c2f4;
        case 0x19c2f8u: goto label_19c2f8;
        case 0x19c2fcu: goto label_19c2fc;
        case 0x19c300u: goto label_19c300;
        case 0x19c304u: goto label_19c304;
        case 0x19c308u: goto label_19c308;
        case 0x19c30cu: goto label_19c30c;
        case 0x19c310u: goto label_19c310;
        case 0x19c314u: goto label_19c314;
        case 0x19c318u: goto label_19c318;
        case 0x19c31cu: goto label_19c31c;
        case 0x19c320u: goto label_19c320;
        case 0x19c324u: goto label_19c324;
        default: break;
    }

    ctx->pc = 0x19c1d0u;

label_19c1d0:
    // 0x19c1d0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x19c1d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_19c1d4:
    // 0x19c1d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c1d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c1d8:
    // 0x19c1d8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x19c1d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_19c1dc:
    // 0x19c1dc: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x19c1dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_19c1e0:
    // 0x19c1e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x19c1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_19c1e4:
    // 0x19c1e4: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x19c1e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_19c1e8:
    // 0x19c1e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x19c1e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_19c1ec:
    // 0x19c1ec: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x19c1ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_19c1f0:
    // 0x19c1f0: 0x3c120055  lui         $s2, 0x55
    ctx->pc = 0x19c1f0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)85 << 16));
label_19c1f4:
    // 0x19c1f4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x19c1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_19c1f8:
    // 0x19c1f8: 0x3c130055  lui         $s3, 0x55
    ctx->pc = 0x19c1f8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)85 << 16));
label_19c1fc:
    // 0x19c1fc: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x19c1fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_19c200:
    // 0x19c200: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x19c200u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_19c204:
    // 0x19c204: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x19c204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_19c208:
    // 0x19c208: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x19c208u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_19c20c:
    // 0x19c20c: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x19c20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_19c210:
    // 0x19c210: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x19c210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_19c214:
    // 0x19c214: 0xe7b600a0  swc1        $f22, 0xA0($sp)
    ctx->pc = 0x19c214u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_19c218:
    // 0x19c218: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x19c218u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_19c21c:
    // 0x19c21c: 0xe7b50098  swc1        $f21, 0x98($sp)
    ctx->pc = 0x19c21cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
label_19c220:
    // 0x19c220: 0x46007586  mov.s       $f22, $f14
    ctx->pc = 0x19c220u;
    ctx->f[22] = FPU_MOV_S(ctx->f[14]);
label_19c224:
    // 0x19c224: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x19c224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_19c228:
    // 0x19c228: 0x46006d46  mov.s       $f21, $f13
    ctx->pc = 0x19c228u;
    ctx->f[21] = FPU_MOV_S(ctx->f[13]);
label_19c22c:
    // 0x19c22c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19c22cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_19c230:
    // 0x19c230: 0x10000022  b           . + 4 + (0x22 << 2)
label_19c234:
    if (ctx->pc == 0x19C234u) {
        ctx->pc = 0x19C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C230u;
        // 0x19c234: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C238u;
        goto label_19c238;
    }
    ctx->pc = 0x19C230u;
    {
        const bool branch_taken_0x19c230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C230u;
        // 0x19c234: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c230) {
            ctx->pc = 0x19C2BCu;
            goto label_19c2bc;
        }
    }
    ctx->pc = 0x19C238u;
label_19c238:
    // 0x19c238: 0x26453a20  addiu       $a1, $s2, 0x3A20
    ctx->pc = 0x19c238u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 14880));
label_19c23c:
    // 0x19c23c: 0x266839d0  addiu       $t0, $s3, 0x39D0
    ctx->pc = 0x19c23cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 14800));
label_19c240:
    // 0x19c240: 0x24063320  addiu       $a2, $zero, 0x3320
    ctx->pc = 0x19c240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13088));
label_19c244:
    // 0x19c244: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x19c244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_19c248:
    // 0x19c248: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x19c248u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_19c24c:
    // 0x19c24c: 0x24090070  addiu       $t1, $zero, 0x70
    ctx->pc = 0x19c24cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_19c250:
    // 0x19c250: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x19c250u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c254:
    // 0x19c254: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x19c254u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_19c258:
    // 0x19c258: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x19c258u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c25c:
    // 0x19c25c: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x19c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_19c260:
    // 0x19c260: 0x40f809  jalr        $v0
label_19c264:
    if (ctx->pc == 0x19C264u) {
        ctx->pc = 0x19C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C260u;
        // 0x19c264: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C268u;
        goto label_19c268;
    }
    ctx->pc = 0x19C260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x19C268u);
        ctx->pc = 0x19C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C260u;
        // 0x19c264: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C260u, 0x19C268u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C268u;
label_19c268:
    // 0x19c268: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c268u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c26c:
    // 0x19c26c: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
label_19c270:
    if (ctx->pc == 0x19C270u) {
        ctx->pc = 0x19C270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C26Cu;
        // 0x19c270: 0x8e02330c  lw          $v0, 0x330C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C274u;
        goto label_19c274;
    }
    ctx->pc = 0x19C26Cu;
    {
        const bool branch_taken_0x19c26c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x19c26c) {
            ctx->pc = 0x19C270u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x19C26Cu;
            // 0x19c270: 0x8e02330c  lw          $v0, 0x330C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19C284u;
            goto label_19c284;
        }
    }
    ctx->pc = 0x19C274u;
label_19c274:
    // 0x19c274: 0xc0675ba  jal         func_19D6E8
label_19c278:
    if (ctx->pc == 0x19C278u) {
        ctx->pc = 0x19C278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C274u;
        // 0x19c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C27Cu;
        goto label_19c27c;
    }
    ctx->pc = 0x19C274u;
    SET_GPR_U32(ctx, 31, 0x19C27Cu);
    ctx->pc = 0x19C278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C274u;
    // 0x19c278: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19D6E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6E8u, 0x19C274u, 0x19C27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C27Cu;
label_19c27c:
    // 0x19c27c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19c27cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_19c280:
    // 0x19c280: 0x8e02330c  lw          $v0, 0x330C($s0)
    ctx->pc = 0x19c280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 13068)));
label_19c284:
    // 0x19c284: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x19c284u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_19c288:
    // 0x19c288: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x19c288u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_19c28c:
    // 0x19c28c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x19c28cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_19c290:
    // 0x19c290: 0x84440010  lh          $a0, 0x10($v0)
    ctx->pc = 0x19c290u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 16)));
label_19c294:
    // 0x19c294: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x19c294u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_19c298:
    // 0x19c298: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x19c298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_19c29c:
    // 0x19c29c: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x19c29cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_19c2a0:
    // 0x19c2a0: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x19c2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_19c2a4:
    // 0x19c2a4: 0x60f809  jalr        $v1
label_19c2a8:
    if (ctx->pc == 0x19C2A8u) {
        ctx->pc = 0x19C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2A4u;
        // 0x19c2a8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2ACu;
        goto label_19c2ac;
    }
    ctx->pc = 0x19C2A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x19C2ACu);
        ctx->pc = 0x19C2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2A4u;
        // 0x19c2a8: 0x4600b386  mov.s       $f14, $f22 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C2A4u, 0x19C2ACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x19C2ACu;
label_19c2ac:
    // 0x19c2ac: 0xae37001c  sw          $s7, 0x1C($s1)
    ctx->pc = 0x19c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 23));
label_19c2b0:
    // 0x19c2b0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x19c2b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_19c2b4:
    // 0x19c2b4: 0x1000000d  b           . + 4 + (0xD << 2)
label_19c2b8:
    if (ctx->pc == 0x19C2B8u) {
        ctx->pc = 0x19C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2B4u;
        // 0x19c2b8: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2BCu;
        goto label_19c2bc;
    }
    ctx->pc = 0x19C2B4u;
    {
        const bool branch_taken_0x19c2b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19C2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2B4u;
        // 0x19c2b8: 0xae300018  sw          $s0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2b4) {
            ctx->pc = 0x19C2ECu;
            goto label_19c2ec;
        }
    }
    ctx->pc = 0x19C2BCu;
label_19c2bc:
    // 0x19c2bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_19c2c0:
    if (ctx->pc == 0x19C2C0u) {
        ctx->pc = 0x19C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2BCu;
        // 0x19c2c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2C4u;
        goto label_19c2c4;
    }
    ctx->pc = 0x19C2BCu;
    {
        const bool branch_taken_0x19c2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2BCu;
        // 0x19c2c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2bc) {
            ctx->pc = 0x19C2ECu;
            goto label_19c2ec;
        }
    }
    ctx->pc = 0x19C2C4u;
label_19c2c4:
    // 0x19c2c4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x19c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_19c2c8:
    // 0x19c2c8: 0x0  nop
    ctx->pc = 0x19c2c8u;
    // NOP
label_19c2cc:
    // 0x19c2cc: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_19c2d0:
    if (ctx->pc == 0x19C2D0u) {
        ctx->pc = 0x19C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2CCu;
        // 0x19c2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2D4u;
        goto label_19c2d4;
    }
    ctx->pc = 0x19C2CCu;
    {
        const bool branch_taken_0x19c2cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2CCu;
        // 0x19c2d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2cc) {
            ctx->pc = 0x19C2BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c2bc;
        }
    }
    ctx->pc = 0x19C2D4u;
label_19c2d4:
    // 0x19c2d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19c2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_19c2d8:
    // 0x19c2d8: 0xc06700c  jal         func_19C030
label_19c2dc:
    if (ctx->pc == 0x19C2DCu) {
        ctx->pc = 0x19C2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2D8u;
        // 0x19c2dc: 0x24053320  addiu       $a1, $zero, 0x3320 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2E0u;
        goto label_19c2e0;
    }
    ctx->pc = 0x19C2D8u;
    SET_GPR_U32(ctx, 31, 0x19C2E0u);
    ctx->pc = 0x19C2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19C2D8u;
    // 0x19c2dc: 0x24053320  addiu       $a1, $zero, 0x3320 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19C030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C030u, 0x19C2D8u, 0x19C2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19C2E0u;
label_19c2e0:
    // 0x19c2e0: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
label_19c2e4:
    if (ctx->pc == 0x19C2E4u) {
        ctx->pc = 0x19C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2E0u;
        // 0x19c2e4: 0x8e0c27e4  lw          $t4, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C2E8u;
        goto label_19c2e8;
    }
    ctx->pc = 0x19C2E0u;
    {
        const bool branch_taken_0x19c2e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x19C2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C2E0u;
        // 0x19c2e4: 0x8e0c27e4  lw          $t4, 0x27E4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 10212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19c2e0) {
            ctx->pc = 0x19C238u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_19c238;
        }
    }
    ctx->pc = 0x19C2E8u;
label_19c2e8:
    // 0x19c2e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x19c2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_19c2ec:
    // 0x19c2ec: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x19c2ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_19c2f0:
    // 0x19c2f0: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x19c2f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_19c2f4:
    // 0x19c2f4: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x19c2f4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_19c2f8:
    // 0x19c2f8: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x19c2f8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_19c2fc:
    // 0x19c2fc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x19c2fcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19c300:
    // 0x19c300: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x19c300u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_19c304:
    // 0x19c304: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x19c304u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_19c308:
    // 0x19c308: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x19c308u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_19c30c:
    // 0x19c30c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19c30cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_19c310:
    // 0x19c310: 0xc7b600a0  lwc1        $f22, 0xA0($sp)
    ctx->pc = 0x19c310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_19c314:
    // 0x19c314: 0xc7b50098  lwc1        $f21, 0x98($sp)
    ctx->pc = 0x19c314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_19c318:
    // 0x19c318: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x19c318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_19c31c:
    // 0x19c31c: 0x3e00008  jr          $ra
label_19c320:
    if (ctx->pc == 0x19C320u) {
        ctx->pc = 0x19C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C31Cu;
        // 0x19c320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x19C324u;
        goto label_19c324;
    }
    ctx->pc = 0x19C31Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19C31Cu;
        // 0x19c320: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19C31Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19C324u;
label_19c324:
    // 0x19c324: 0x0  nop
    ctx->pc = 0x19c324u;
    // NOP
    ctx->pc = 0x19c328u;
}
