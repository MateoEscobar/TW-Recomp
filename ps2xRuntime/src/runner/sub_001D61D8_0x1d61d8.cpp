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

// Function: sub_001D61D8
// Address: 0x1d61d8 - 0x1d62d8
void sub_001D61D8_0x1d61d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D61D8_0x1d61d8");
#endif

    switch (ctx->pc) {
        case 0x1d61d8u: goto label_1d61d8;
        case 0x1d61dcu: goto label_1d61dc;
        case 0x1d61e0u: goto label_1d61e0;
        case 0x1d61e4u: goto label_1d61e4;
        case 0x1d61e8u: goto label_1d61e8;
        case 0x1d61ecu: goto label_1d61ec;
        case 0x1d61f0u: goto label_1d61f0;
        case 0x1d61f4u: goto label_1d61f4;
        case 0x1d61f8u: goto label_1d61f8;
        case 0x1d61fcu: goto label_1d61fc;
        case 0x1d6200u: goto label_1d6200;
        case 0x1d6204u: goto label_1d6204;
        case 0x1d6208u: goto label_1d6208;
        case 0x1d620cu: goto label_1d620c;
        case 0x1d6210u: goto label_1d6210;
        case 0x1d6214u: goto label_1d6214;
        case 0x1d6218u: goto label_1d6218;
        case 0x1d621cu: goto label_1d621c;
        case 0x1d6220u: goto label_1d6220;
        case 0x1d6224u: goto label_1d6224;
        case 0x1d6228u: goto label_1d6228;
        case 0x1d622cu: goto label_1d622c;
        case 0x1d6230u: goto label_1d6230;
        case 0x1d6234u: goto label_1d6234;
        case 0x1d6238u: goto label_1d6238;
        case 0x1d623cu: goto label_1d623c;
        case 0x1d6240u: goto label_1d6240;
        case 0x1d6244u: goto label_1d6244;
        case 0x1d6248u: goto label_1d6248;
        case 0x1d624cu: goto label_1d624c;
        case 0x1d6250u: goto label_1d6250;
        case 0x1d6254u: goto label_1d6254;
        case 0x1d6258u: goto label_1d6258;
        case 0x1d625cu: goto label_1d625c;
        case 0x1d6260u: goto label_1d6260;
        case 0x1d6264u: goto label_1d6264;
        case 0x1d6268u: goto label_1d6268;
        case 0x1d626cu: goto label_1d626c;
        case 0x1d6270u: goto label_1d6270;
        case 0x1d6274u: goto label_1d6274;
        case 0x1d6278u: goto label_1d6278;
        case 0x1d627cu: goto label_1d627c;
        case 0x1d6280u: goto label_1d6280;
        case 0x1d6284u: goto label_1d6284;
        case 0x1d6288u: goto label_1d6288;
        case 0x1d628cu: goto label_1d628c;
        case 0x1d6290u: goto label_1d6290;
        case 0x1d6294u: goto label_1d6294;
        case 0x1d6298u: goto label_1d6298;
        case 0x1d629cu: goto label_1d629c;
        case 0x1d62a0u: goto label_1d62a0;
        case 0x1d62a4u: goto label_1d62a4;
        case 0x1d62a8u: goto label_1d62a8;
        case 0x1d62acu: goto label_1d62ac;
        case 0x1d62b0u: goto label_1d62b0;
        case 0x1d62b4u: goto label_1d62b4;
        case 0x1d62b8u: goto label_1d62b8;
        case 0x1d62bcu: goto label_1d62bc;
        case 0x1d62c0u: goto label_1d62c0;
        case 0x1d62c4u: goto label_1d62c4;
        case 0x1d62c8u: goto label_1d62c8;
        case 0x1d62ccu: goto label_1d62cc;
        case 0x1d62d0u: goto label_1d62d0;
        case 0x1d62d4u: goto label_1d62d4;
        default: break;
    }

    ctx->pc = 0x1d61d8u;

label_1d61d8:
    // 0x1d61d8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1d61d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1d61dc:
    // 0x1d61dc: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1d61dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1d61e0:
    // 0x1d61e0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1d61e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_1d61e4:
    // 0x1d61e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1d61e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d61e8:
    // 0x1d61e8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1d61e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_1d61ec:
    // 0x1d61ec: 0x2650000c  addiu       $s0, $s2, 0xC
    ctx->pc = 0x1d61ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_1d61f0:
    // 0x1d61f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d61f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1d61f4:
    // 0x1d61f4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d61f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d61f8:
    // 0x1d61f8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1d61f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1d61fc:
    // 0x1d61fc: 0x50a00007  beql        $a1, $zero, . + 4 + (0x7 << 2)
label_1d6200:
    if (ctx->pc == 0x1D6200u) {
        ctx->pc = 0x1D6200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D61FCu;
        // 0x1d6200: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6204u;
        goto label_1d6204;
    }
    ctx->pc = 0x1D61FCu;
    {
        const bool branch_taken_0x1d61fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d61fc) {
            ctx->pc = 0x1D6200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D61FCu;
            // 0x1d6200: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D621Cu;
            goto label_1d621c;
        }
    }
    ctx->pc = 0x1D6204u;
label_1d6204:
    // 0x1d6204: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d6204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1d6208:
    // 0x1d6208: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x1d6208u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_1d620c:
    // 0x1d620c: 0x8c430034  lw          $v1, 0x34($v0)
    ctx->pc = 0x1d620cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1d6210:
    // 0x1d6210: 0x60f809  jalr        $v1
label_1d6214:
    if (ctx->pc == 0x1D6214u) {
        ctx->pc = 0x1D6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6210u;
        // 0x1d6214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6218u;
        goto label_1d6218;
    }
    ctx->pc = 0x1D6210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1D6218u);
        ctx->pc = 0x1D6214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6210u;
        // 0x1d6214: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D6210u, 0x1D6218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D6218u;
label_1d6218:
    // 0x1d6218: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d6218u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d621c:
    // 0x1d621c: 0x2e220005  sltiu       $v0, $s1, 0x5
    ctx->pc = 0x1d621cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_1d6220:
    // 0x1d6220: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1d6224:
    if (ctx->pc == 0x1D6224u) {
        ctx->pc = 0x1D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6220u;
        // 0x1d6224: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6228u;
        goto label_1d6228;
    }
    ctx->pc = 0x1D6220u;
    {
        const bool branch_taken_0x1d6220 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6220u;
        // 0x1d6224: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6220) {
            ctx->pc = 0x1D61F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d61f8;
        }
    }
    ctx->pc = 0x1D6228u;
label_1d6228:
    // 0x1d6228: 0xc06e552  jal         func_1B9548
label_1d622c:
    if (ctx->pc == 0x1D622Cu) {
        ctx->pc = 0x1D622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6228u;
        // 0x1d622c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6230u;
        goto label_1d6230;
    }
    ctx->pc = 0x1D6228u;
    SET_GPR_U32(ctx, 31, 0x1D6230u);
    ctx->pc = 0x1D622Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D6228u;
    // 0x1d622c: 0x26440020  addiu       $a0, $s2, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1B9548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B9548u, 0x1D6228u, 0x1D6230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D6230u;
label_1d6230:
    // 0x1d6230: 0x8e420210  lw          $v0, 0x210($s2)
    ctx->pc = 0x1d6230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 528)));
label_1d6234:
    // 0x1d6234: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_1d6238:
    if (ctx->pc == 0x1D6238u) {
        ctx->pc = 0x1D6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6234u;
        // 0x1d6238: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D623Cu;
        goto label_1d623c;
    }
    ctx->pc = 0x1D6234u;
    {
        const bool branch_taken_0x1d6234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6234u;
        // 0x1d6238: 0x3c030051  lui         $v1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6234) {
            ctx->pc = 0x1D62C0u;
            goto label_1d62c0;
        }
    }
    ctx->pc = 0x1D623Cu;
label_1d623c:
    // 0x1d623c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d623cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d6240:
    // 0x1d6240: 0xc440ed18  lwc1        $f0, -0x12E8($v0)
    ctx->pc = 0x1d6240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6244:
    // 0x1d6244: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1d6244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1d6248:
    // 0x1d6248: 0xc461ed1c  lwc1        $f1, -0x12E4($v1)
    ctx->pc = 0x1d6248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294962460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d624c:
    // 0x1d624c: 0x3c070051  lui         $a3, 0x51
    ctx->pc = 0x1d624cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)81 << 16));
label_1d6250:
    // 0x1d6250: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x1d6250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_1d6254:
    // 0x1d6254: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x1d6254u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1d6258:
    // 0x1d6258: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1d6258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1d625c:
    // 0x1d625c: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x1d625cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1d6260:
    // 0x1d6260: 0x26500220  addiu       $s0, $s2, 0x220
    ctx->pc = 0x1d6260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 544));
label_1d6264:
    // 0x1d6264: 0xe7a10018  swc1        $f1, 0x18($sp)
    ctx->pc = 0x1d6264u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_1d6268:
    // 0x1d6268: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1d6268u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d626c:
    // 0x1d626c: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x1d626cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_1d6270:
    // 0x1d6270: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d6270u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d6274:
    // 0x1d6274: 0xe4c4000c  swc1        $f4, 0xC($a2)
    ctx->pc = 0x1d6274u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
label_1d6278:
    // 0x1d6278: 0xc4e2ed20  lwc1        $f2, -0x12E0($a3)
    ctx->pc = 0x1d6278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294962464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1d627c:
    // 0x1d627c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d627cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d6280:
    // 0x1d6280: 0xc443ed24  lwc1        $f3, -0x12DC($v0)
    ctx->pc = 0x1d6280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294962468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1d6284:
    // 0x1d6284: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x1d6284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d6288:
    // 0x1d6288: 0xc7a10018  lwc1        $f1, 0x18($sp)
    ctx->pc = 0x1d6288u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1d628c:
    // 0x1d628c: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x1d628cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
label_1d6290:
    // 0x1d6290: 0xe7a4000c  swc1        $f4, 0xC($sp)
    ctx->pc = 0x1d6290u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_1d6294:
    // 0x1d6294: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x1d6294u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
label_1d6298:
    // 0x1d6298: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x1d6298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_1d629c:
    // 0x1d629c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x1d629cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1d62a0:
    // 0x1d62a0: 0xc075a58  jal         func_1D6960
label_1d62a4:
    if (ctx->pc == 0x1D62A4u) {
        ctx->pc = 0x1D62A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62A0u;
        // 0x1d62a4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62A8u;
        goto label_1d62a8;
    }
    ctx->pc = 0x1D62A0u;
    SET_GPR_U32(ctx, 31, 0x1D62A8u);
    ctx->pc = 0x1D62A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62A0u;
    // 0x1d62a4: 0xe7a10008  swc1        $f1, 0x8($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6960u, 0x1D62A0u, 0x1D62A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62A8u;
label_1d62a8:
    // 0x1d62a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1d62a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1d62ac:
    // 0x1d62ac: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d62acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d62b0:
    // 0x1d62b0: 0xc075a60  jal         func_1D6980
label_1d62b4:
    if (ctx->pc == 0x1D62B4u) {
        ctx->pc = 0x1D62B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B0u;
        // 0x1d62b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62B8u;
        goto label_1d62b8;
    }
    ctx->pc = 0x1D62B0u;
    SET_GPR_U32(ctx, 31, 0x1D62B8u);
    ctx->pc = 0x1D62B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62B0u;
    // 0x1d62b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6980u, 0x1D62B0u, 0x1D62B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62B8u;
label_1d62b8:
    // 0x1d62b8: 0xc075aa4  jal         func_1D6A90
label_1d62bc:
    if (ctx->pc == 0x1D62BCu) {
        ctx->pc = 0x1D62BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62B8u;
        // 0x1d62bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62C0u;
        goto label_1d62c0;
    }
    ctx->pc = 0x1D62B8u;
    SET_GPR_U32(ctx, 31, 0x1D62C0u);
    ctx->pc = 0x1D62BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D62B8u;
    // 0x1d62bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D6A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D6A90u, 0x1D62B8u, 0x1D62C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D62C0u;
label_1d62c0:
    // 0x1d62c0: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1d62c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d62c4:
    // 0x1d62c4: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1d62c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d62c8:
    // 0x1d62c8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1d62c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d62cc:
    // 0x1d62cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d62ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1d62d0:
    // 0x1d62d0: 0x3e00008  jr          $ra
label_1d62d4:
    if (ctx->pc == 0x1D62D4u) {
        ctx->pc = 0x1D62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62D0u;
        // 0x1d62d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D62D8u;
        goto label_fallthrough_0x1d62d0;
    }
    ctx->pc = 0x1D62D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D62D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D62D0u;
        // 0x1d62d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D62D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1d62d0:
    ctx->pc = 0x1D62D8u;
}
