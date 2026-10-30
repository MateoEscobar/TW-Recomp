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

// Function: sub_003DD190
// Address: 0x3dd190 - 0x3dd2c0
void sub_003DD190_0x3dd190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003DD190_0x3dd190");
#endif

    switch (ctx->pc) {
        case 0x3dd190u: goto label_3dd190;
        case 0x3dd194u: goto label_3dd194;
        case 0x3dd198u: goto label_3dd198;
        case 0x3dd19cu: goto label_3dd19c;
        case 0x3dd1a0u: goto label_3dd1a0;
        case 0x3dd1a4u: goto label_3dd1a4;
        case 0x3dd1a8u: goto label_3dd1a8;
        case 0x3dd1acu: goto label_3dd1ac;
        case 0x3dd1b0u: goto label_3dd1b0;
        case 0x3dd1b4u: goto label_3dd1b4;
        case 0x3dd1b8u: goto label_3dd1b8;
        case 0x3dd1bcu: goto label_3dd1bc;
        case 0x3dd1c0u: goto label_3dd1c0;
        case 0x3dd1c4u: goto label_3dd1c4;
        case 0x3dd1c8u: goto label_3dd1c8;
        case 0x3dd1ccu: goto label_3dd1cc;
        case 0x3dd1d0u: goto label_3dd1d0;
        case 0x3dd1d4u: goto label_3dd1d4;
        case 0x3dd1d8u: goto label_3dd1d8;
        case 0x3dd1dcu: goto label_3dd1dc;
        case 0x3dd1e0u: goto label_3dd1e0;
        case 0x3dd1e4u: goto label_3dd1e4;
        case 0x3dd1e8u: goto label_3dd1e8;
        case 0x3dd1ecu: goto label_3dd1ec;
        case 0x3dd1f0u: goto label_3dd1f0;
        case 0x3dd1f4u: goto label_3dd1f4;
        case 0x3dd1f8u: goto label_3dd1f8;
        case 0x3dd1fcu: goto label_3dd1fc;
        case 0x3dd200u: goto label_3dd200;
        case 0x3dd204u: goto label_3dd204;
        case 0x3dd208u: goto label_3dd208;
        case 0x3dd20cu: goto label_3dd20c;
        case 0x3dd210u: goto label_3dd210;
        case 0x3dd214u: goto label_3dd214;
        case 0x3dd218u: goto label_3dd218;
        case 0x3dd21cu: goto label_3dd21c;
        case 0x3dd220u: goto label_3dd220;
        case 0x3dd224u: goto label_3dd224;
        case 0x3dd228u: goto label_3dd228;
        case 0x3dd22cu: goto label_3dd22c;
        case 0x3dd230u: goto label_3dd230;
        case 0x3dd234u: goto label_3dd234;
        case 0x3dd238u: goto label_3dd238;
        case 0x3dd23cu: goto label_3dd23c;
        case 0x3dd240u: goto label_3dd240;
        case 0x3dd244u: goto label_3dd244;
        case 0x3dd248u: goto label_3dd248;
        case 0x3dd24cu: goto label_3dd24c;
        case 0x3dd250u: goto label_3dd250;
        case 0x3dd254u: goto label_3dd254;
        case 0x3dd258u: goto label_3dd258;
        case 0x3dd25cu: goto label_3dd25c;
        case 0x3dd260u: goto label_3dd260;
        case 0x3dd264u: goto label_3dd264;
        case 0x3dd268u: goto label_3dd268;
        case 0x3dd26cu: goto label_3dd26c;
        case 0x3dd270u: goto label_3dd270;
        case 0x3dd274u: goto label_3dd274;
        case 0x3dd278u: goto label_3dd278;
        case 0x3dd27cu: goto label_3dd27c;
        case 0x3dd280u: goto label_3dd280;
        case 0x3dd284u: goto label_3dd284;
        case 0x3dd288u: goto label_3dd288;
        case 0x3dd28cu: goto label_3dd28c;
        case 0x3dd290u: goto label_3dd290;
        case 0x3dd294u: goto label_3dd294;
        case 0x3dd298u: goto label_3dd298;
        case 0x3dd29cu: goto label_3dd29c;
        case 0x3dd2a0u: goto label_3dd2a0;
        case 0x3dd2a4u: goto label_3dd2a4;
        case 0x3dd2a8u: goto label_3dd2a8;
        case 0x3dd2acu: goto label_3dd2ac;
        case 0x3dd2b0u: goto label_3dd2b0;
        case 0x3dd2b4u: goto label_3dd2b4;
        case 0x3dd2b8u: goto label_3dd2b8;
        case 0x3dd2bcu: goto label_3dd2bc;
        default: break;
    }

    ctx->pc = 0x3dd190u;

label_3dd190:
    // 0x3dd190: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3dd190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3dd194:
    // 0x3dd194: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x3dd194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_3dd198:
    // 0x3dd198: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x3dd198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_3dd19c:
    // 0x3dd19c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x3dd19cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_3dd1a0:
    // 0x3dd1a0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3dd1a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3dd1a4:
    // 0x3dd1a4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x3dd1a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_3dd1a8:
    // 0x3dd1a8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x3dd1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_3dd1ac:
    // 0x3dd1ac: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x3dd1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_3dd1b0:
    // 0x3dd1b0: 0xe7b40090  swc1        $f20, 0x90($sp)
    ctx->pc = 0x3dd1b0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
label_3dd1b4:
    // 0x3dd1b4: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3dd1b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3dd1b8:
    // 0x3dd1b8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3dd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3dd1bc:
    // 0x3dd1bc: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x3dd1bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_3dd1c0:
    // 0x3dd1c0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3dd1c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3dd1c4:
    // 0x3dd1c4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3dd1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3dd1c8:
    // 0x3dd1c8: 0x40f809  jalr        $v0
label_3dd1cc:
    if (ctx->pc == 0x3DD1CCu) {
        ctx->pc = 0x3DD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1C8u;
        // 0x3dd1cc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1D0u;
        goto label_3dd1d0;
    }
    ctx->pc = 0x3DD1C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3DD1D0u);
        ctx->pc = 0x3DD1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1C8u;
        // 0x3dd1cc: 0x2a42021  addu        $a0, $s5, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD1C8u, 0x3DD1D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3DD1D0u;
label_3dd1d0:
    // 0x3dd1d0: 0x24040480  addiu       $a0, $zero, 0x480
    ctx->pc = 0x3dd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1152));
label_3dd1d4:
    // 0x3dd1d4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x3dd1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_3dd1d8:
    // 0x3dd1d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x3dd1d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_3dd1dc:
    // 0x3dd1dc: 0xaea40054  sw          $a0, 0x54($s5)
    ctx->pc = 0x3dd1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 4));
label_3dd1e0:
    // 0x3dd1e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3dd1e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd1e4:
    // 0x3dd1e4: 0xaea30080  sw          $v1, 0x80($s5)
    ctx->pc = 0x3dd1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 3));
label_3dd1e8:
    // 0x3dd1e8: 0xc0ea146  jal         func_3A8518
label_3dd1ec:
    if (ctx->pc == 0x3DD1ECu) {
        ctx->pc = 0x3DD1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1E8u;
        // 0x3dd1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1F0u;
        goto label_3dd1f0;
    }
    ctx->pc = 0x3DD1E8u;
    SET_GPR_U32(ctx, 31, 0x3DD1F0u);
    ctx->pc = 0x3DD1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD1E8u;
    // 0x3dd1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DD1E8u, 0x3DD1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD1F0u;
label_3dd1f0:
    // 0x3dd1f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3dd1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd1f4:
    // 0x3dd1f4: 0xc0ea146  jal         func_3A8518
label_3dd1f8:
    if (ctx->pc == 0x3DD1F8u) {
        ctx->pc = 0x3DD1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD1F4u;
        // 0x3dd1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD1FCu;
        goto label_3dd1fc;
    }
    ctx->pc = 0x3DD1F4u;
    SET_GPR_U32(ctx, 31, 0x3DD1FCu);
    ctx->pc = 0x3DD1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD1F4u;
    // 0x3dd1f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DD1F4u, 0x3DD1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD1FCu;
label_3dd1fc:
    // 0x3dd1fc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3dd1fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd200:
    // 0x3dd200: 0xc0ea13a  jal         func_3A84E8
label_3dd204:
    if (ctx->pc == 0x3DD204u) {
        ctx->pc = 0x3DD204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD200u;
        // 0x3dd204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD208u;
        goto label_3dd208;
    }
    ctx->pc = 0x3DD200u;
    SET_GPR_U32(ctx, 31, 0x3DD208u);
    ctx->pc = 0x3DD204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD200u;
    // 0x3dd204: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84E8u, 0x3DD200u, 0x3DD208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD208u;
label_3dd208:
    // 0x3dd208: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3dd208u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_3dd20c:
    // 0x3dd20c: 0xc0ea146  jal         func_3A8518
label_3dd210:
    if (ctx->pc == 0x3DD210u) {
        ctx->pc = 0x3DD210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD20Cu;
        // 0x3dd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD214u;
        goto label_3dd214;
    }
    ctx->pc = 0x3DD20Cu;
    SET_GPR_U32(ctx, 31, 0x3DD214u);
    ctx->pc = 0x3DD210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD20Cu;
    // 0x3dd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3DD20Cu, 0x3DD214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD214u;
label_3dd214:
    // 0x3dd214: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3dd214u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3dd218:
    // 0x3dd218: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3dd218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3dd21c:
    // 0x3dd21c: 0xc0ea12a  jal         func_3A84A8
label_3dd220:
    if (ctx->pc == 0x3DD220u) {
        ctx->pc = 0x3DD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD21Cu;
        // 0x3dd220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD224u;
        goto label_3dd224;
    }
    ctx->pc = 0x3DD21Cu;
    SET_GPR_U32(ctx, 31, 0x3DD224u);
    ctx->pc = 0x3DD220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD21Cu;
    // 0x3dd220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3DD21Cu, 0x3DD224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD224u;
label_3dd224:
    // 0x3dd224: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3dd224u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3dd228:
    // 0x3dd228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3dd228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3dd22c:
    // 0x3dd22c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3dd22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3dd230:
    // 0x3dd230: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3dd230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3dd234:
    // 0x3dd234: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x3dd234u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_3dd238:
    // 0x3dd238: 0xae130008  sw          $s3, 0x8($s0)
    ctx->pc = 0x3dd238u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 19));
label_3dd23c:
    // 0x3dd23c: 0xe614000c  swc1        $f20, 0xC($s0)
    ctx->pc = 0x3dd23cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 12), bits); }
label_3dd240:
    // 0x3dd240: 0x8ea20054  lw          $v0, 0x54($s5)
    ctx->pc = 0x3dd240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_3dd244:
    // 0x3dd244: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3dd244u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3dd248:
    // 0x3dd248: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3dd248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3dd24c:
    // 0x3dd24c: 0xaea20054  sw          $v0, 0x54($s5)
    ctx->pc = 0x3dd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 84), GPR_U32(ctx, 2));
label_3dd250:
    // 0x3dd250: 0xc0e858c  jal         func_3A1630
label_3dd254:
    if (ctx->pc == 0x3DD254u) {
        ctx->pc = 0x3DD254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD250u;
        // 0x3dd254: 0x7ea30010  sq          $v1, 0x10($s5) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD258u;
        goto label_3dd258;
    }
    ctx->pc = 0x3DD250u;
    SET_GPR_U32(ctx, 31, 0x3DD258u);
    ctx->pc = 0x3DD254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3DD250u;
    // 0x3dd254: 0x7ea30010  sq          $v1, 0x10($s5) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 21), 16), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3DD250u, 0x3DD258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3DD258u;
label_3dd258:
    // 0x3dd258: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3dd258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3dd25c:
    // 0x3dd25c: 0x3c014170  lui         $at, 0x4170
    ctx->pc = 0x3dd25cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16752 << 16));
label_3dd260:
    // 0x3dd260: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x3dd260u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_3dd264:
    // 0x3dd264: 0xaea20080  sw          $v0, 0x80($s5)
    ctx->pc = 0x3dd264u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 128), GPR_U32(ctx, 2));
label_3dd268:
    // 0x3dd268: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x3dd268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_3dd26c:
    // 0x3dd26c: 0xaea30084  sw          $v1, 0x84($s5)
    ctx->pc = 0x3dd26cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 132), GPR_U32(ctx, 3));
label_3dd270:
    // 0x3dd270: 0xae140000  sw          $s4, 0x0($s0)
    ctx->pc = 0x3dd270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 20));
label_3dd274:
    // 0x3dd274: 0xc601000c  lwc1        $f1, 0xC($s0)
    ctx->pc = 0x3dd274u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3dd278:
    // 0x3dd278: 0xe6a1008c  swc1        $f1, 0x8C($s5)
    ctx->pc = 0x3dd278u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
label_3dd27c:
    // 0x3dd27c: 0x46011034  c.lt.s      $f2, $f1
    ctx->pc = 0x3dd27cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_3dd280:
    // 0x3dd280: 0xc600000c  lwc1        $f0, 0xC($s0)
    ctx->pc = 0x3dd280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_3dd284:
    // 0x3dd284: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_3dd288:
    if (ctx->pc == 0x3DD288u) {
        ctx->pc = 0x3DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD284u;
        // 0x3dd288: 0xe6a00090  swc1        $f0, 0x90($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD28Cu;
        goto label_3dd28c;
    }
    ctx->pc = 0x3DD284u;
    {
        const bool branch_taken_0x3dd284 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3DD288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD284u;
        // 0x3dd288: 0xe6a00090  swc1        $f0, 0x90($s5) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3dd284) {
            ctx->pc = 0x3DD294u;
            goto label_3dd294;
        }
    }
    ctx->pc = 0x3DD28Cu;
label_3dd28c:
    // 0x3dd28c: 0xe6a20090  swc1        $f2, 0x90($s5)
    ctx->pc = 0x3dd28cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 144), bits); }
label_3dd290:
    // 0x3dd290: 0xe6a2008c  swc1        $f2, 0x8C($s5)
    ctx->pc = 0x3dd290u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 140), bits); }
label_3dd294:
    // 0x3dd294: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3dd294u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3dd298:
    // 0x3dd298: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3dd298u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3dd29c:
    // 0x3dd29c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3dd29cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3dd2a0:
    // 0x3dd2a0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3dd2a0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3dd2a4:
    // 0x3dd2a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3dd2a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3dd2a8:
    // 0x3dd2a8: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3dd2a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3dd2ac:
    // 0x3dd2ac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3dd2acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3dd2b0:
    // 0x3dd2b0: 0xc7b40090  lwc1        $f20, 0x90($sp)
    ctx->pc = 0x3dd2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3dd2b4:
    // 0x3dd2b4: 0x3e00008  jr          $ra
label_3dd2b8:
    if (ctx->pc == 0x3DD2B8u) {
        ctx->pc = 0x3DD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2B4u;
        // 0x3dd2b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3DD2BCu;
        goto label_3dd2bc;
    }
    ctx->pc = 0x3DD2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3DD2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3DD2B4u;
        // 0x3dd2b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3DD2B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3DD2BCu;
label_3dd2bc:
    // 0x3dd2bc: 0x0  nop
    ctx->pc = 0x3dd2bcu;
    // NOP
    ctx->pc = 0x3dd2c0u;
}
