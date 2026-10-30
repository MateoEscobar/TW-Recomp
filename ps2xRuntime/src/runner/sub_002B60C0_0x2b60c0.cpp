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

// Function: sub_002B60C0
// Address: 0x2b60c0 - 0x2b65f8
void sub_002B60C0_0x2b60c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B60C0_0x2b60c0");
#endif

    switch (ctx->pc) {
        case 0x2b6104u: goto label_2b6104;
        case 0x2b6114u: goto label_2b6114;
        case 0x2b6124u: goto label_2b6124;
        case 0x2b6134u: goto label_2b6134;
        case 0x2b6140u: goto label_2b6140;
        case 0x2b6150u: goto label_2b6150;
        case 0x2b6160u: goto label_2b6160;
        case 0x2b617cu: goto label_2b617c;
        case 0x2b6188u: goto label_2b6188;
        case 0x2b61acu: goto label_2b61ac;
        case 0x2b61e8u: goto label_2b61e8;
        case 0x2b61fcu: goto label_2b61fc;
        case 0x2b6208u: goto label_2b6208;
        case 0x2b621cu: goto label_2b621c;
        case 0x2b6244u: goto label_2b6244;
        case 0x2b6254u: goto label_2b6254;
        case 0x2b62a8u: goto label_2b62a8;
        case 0x2b62b0u: goto label_2b62b0;
        case 0x2b62c4u: goto label_2b62c4;
        case 0x2b62dcu: goto label_2b62dc;
        case 0x2b62f0u: goto label_2b62f0;
        case 0x2b630cu: goto label_2b630c;
        case 0x2b6314u: goto label_2b6314;
        case 0x2b633cu: goto label_2b633c;
        case 0x2b6374u: goto label_2b6374;
        case 0x2b6390u: goto label_2b6390;
        case 0x2b63a8u: goto label_2b63a8;
        case 0x2b63bcu: goto label_2b63bc;
        case 0x2b63c8u: goto label_2b63c8;
        case 0x2b63ecu: goto label_2b63ec;
        case 0x2b63f4u: goto label_2b63f4;
        case 0x2b6418u: goto label_2b6418;
        case 0x2b642cu: goto label_2b642c;
        case 0x2b6444u: goto label_2b6444;
        case 0x2b6478u: goto label_2b6478;
        case 0x2b6498u: goto label_2b6498;
        case 0x2b64a0u: goto label_2b64a0;
        case 0x2b64a8u: goto label_2b64a8;
        case 0x2b64e0u: goto label_2b64e0;
        case 0x2b6520u: goto label_2b6520;
        case 0x2b6550u: goto label_2b6550;
        case 0x2b6584u: goto label_2b6584;
        case 0x2b65a8u: goto label_2b65a8;
        case 0x2b65c0u: goto label_2b65c0;
        default: break;
    }

    ctx->pc = 0x2b60c0u;

    // 0x2b60c0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2b60c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x2b60c4: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2b60c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x2b60c8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2b60c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x2b60cc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2b60ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b60d0: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2b60d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x2b60d4: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2b60d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x2b60d8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2b60d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x2b60dc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b60dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x2b60e0: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x2b60e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x2b60e4: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x2b60e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x2b60e8: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x2b60e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x2b60ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2b60ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2b60f0: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b60f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2b60f4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b60f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b60f8: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x2b60f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b60fc: 0xc088e60  jal         func_223980
    ctx->pc = 0x2B60FCu;
    SET_GPR_U32(ctx, 31, 0x2B6104u);
    ctx->pc = 0x2B6100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B60FCu;
    // 0x2b6100: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2B60FCu, 0x2B6104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6104u;
label_2b6104:
    // 0x2b6104: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6104u;
    {
        const bool branch_taken_0x2b6104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6104) {
            ctx->pc = 0x2B6108u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6104u;
            // 0x2b6108: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B611Cu;
            goto label_2b611c;
        }
    }
    ctx->pc = 0x2B610Cu;
    // 0x2b610c: 0xc0a36c8  jal         func_28DB20
    ctx->pc = 0x2B610Cu;
    SET_GPR_U32(ctx, 31, 0x2B6114u);
    ctx->pc = 0x2B6110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B610Cu;
    // 0x2b6110: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2B610Cu, 0x2B6114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6114u;
label_2b6114:
    // 0x2b6114: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x2B6114u;
    {
        const bool branch_taken_0x2b6114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6114u;
        // 0x2b6118: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6114) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B611Cu;
label_2b611c:
    // 0x2b611c: 0xc0a2acc  jal         func_28AB30
    ctx->pc = 0x2B611Cu;
    SET_GPR_U32(ctx, 31, 0x2B6124u);
    ctx->pc = 0x2B6120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B611Cu;
    // 0x2b6120: 0x24140001  addiu       $s4, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AB30u, 0x2B611Cu, 0x2B6124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6124u;
label_2b6124:
    // 0x2b6124: 0x14540008  bne         $v0, $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B6124u;
    {
        const bool branch_taken_0x2b6124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b6124) {
            ctx->pc = 0x2B6148u;
            goto label_2b6148;
        }
    }
    ctx->pc = 0x2B612Cu;
    // 0x2b612c: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x2B612Cu;
    SET_GPR_U32(ctx, 31, 0x2B6134u);
    ctx->pc = 0x2B6130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B612Cu;
    // 0x2b6130: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x2B612Cu, 0x2B6134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6134u;
label_2b6134:
    // 0x2b6134: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2b6134u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6138: 0xc051fbc  jal         func_147EF0
    ctx->pc = 0x2B6138u;
    SET_GPR_U32(ctx, 31, 0x2B6140u);
    ctx->pc = 0x2B613Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6138u;
    // 0x2b613c: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x147EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x147EF0u, 0x2B6138u, 0x2B6140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6140u;
label_2b6140:
    // 0x2b6140: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x2B6140u;
    {
        const bool branch_taken_0x2b6140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6140u;
        // 0x2b6144: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6140) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B6148u;
label_2b6148:
    // 0x2b6148: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6148u;
    SET_GPR_U32(ctx, 31, 0x2B6150u);
    ctx->pc = 0x2B614Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6148u;
    // 0x2b614c: 0x26a400c4  addiu       $a0, $s5, 0xC4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 196));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6148u, 0x2B6150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6150u;
label_2b6150:
    // 0x2b6150: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b6150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6154: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b6154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6158: 0xc0a33f8  jal         func_28CFE0
    ctx->pc = 0x2B6158u;
    SET_GPR_U32(ctx, 31, 0x2B6160u);
    ctx->pc = 0x2B615Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6158u;
    // 0x2b615c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x2B6158u, 0x2B6160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6160u;
label_2b6160:
    // 0x2b6160: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2b6160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6164: 0x8202002e  lb          $v0, 0x2E($s0)
    ctx->pc = 0x2b6164u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 46)));
    // 0x2b6168: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x2b6168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2b616c: 0x50540115  beql        $v0, $s4, . + 4 + (0x115 << 2)
    ctx->pc = 0x2B616Cu;
    {
        const bool branch_taken_0x2b616c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        if (branch_taken_0x2b616c) {
            ctx->pc = 0x2B6170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B616Cu;
            // 0x2b6170: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B6174u;
    // 0x2b6174: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6174u;
    SET_GPR_U32(ctx, 31, 0x2B617Cu);
    ctx->pc = 0x2B6178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6174u;
    // 0x2b6178: 0x26040124  addiu       $a0, $s0, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6174u, 0x2B617Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B617Cu;
label_2b617c:
    // 0x2b617c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b617cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6180: 0xc0a34d6  jal         func_28D358
    ctx->pc = 0x2B6180u;
    SET_GPR_U32(ctx, 31, 0x2B6188u);
    ctx->pc = 0x2B6184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6180u;
    // 0x2b6184: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2B6180u, 0x2B6188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6188u;
label_2b6188:
    // 0x2b6188: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b6188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b618c: 0x1220010d  beqz        $s1, . + 4 + (0x10D << 2)
    ctx->pc = 0x2B618Cu;
    {
        const bool branch_taken_0x2b618c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B618Cu;
        // 0x2b6190: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b618c) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B6194u;
    // 0x2b6194: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2b6194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2b6198: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b6198u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b619c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2b619cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x2b61a0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b61a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61a4: 0xc088e70  jal         func_2239C0
    ctx->pc = 0x2B61A4u;
    SET_GPR_U32(ctx, 31, 0x2B61ACu);
    ctx->pc = 0x2B61A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61A4u;
    // 0x2b61a8: 0x8c770048  lw          $s7, 0x48($v1) (Delay Slot)
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239C0u, 0x2B61A4u, 0x2B61ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61ACu;
label_2b61ac:
    // 0x2b61ac: 0x5454003a  bnel        $v0, $s4, . + 4 + (0x3A << 2)
    ctx->pc = 0x2B61ACu;
    {
        const bool branch_taken_0x2b61ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b61ac) {
            ctx->pc = 0x2B61B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B61ACu;
            // 0x2b61b0: 0x92420014  lbu         $v0, 0x14($s2) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6298u;
            goto label_2b6298;
        }
    }
    ctx->pc = 0x2B61B4u;
    // 0x2b61b4: 0x86a50092  lh          $a1, 0x92($s5)
    ctx->pc = 0x2b61b4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 146)));
    // 0x2b61b8: 0x3c130051  lui         $s3, 0x51
    ctx->pc = 0x2b61b8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    // 0x2b61bc: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b61bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2b61c0: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b61c0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2b61c4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2b61c4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2b61c8: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b61c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2b61cc: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b61ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b61d0: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b61d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b61d4: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2b61d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2b61d8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x2b61d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x2b61dc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2b61dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2b61e0: 0xc1067b8  jal         func_419EE0
    ctx->pc = 0x2B61E0u;
    SET_GPR_U32(ctx, 31, 0x2B61E8u);
    ctx->pc = 0x2B61E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61E0u;
    // 0x2b61e4: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419EE0u, 0x2B61E0u, 0x2B61E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61E8u;
label_2b61e8:
    // 0x2b61e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b61e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b61ec: 0x1200003e  beqz        $s0, . + 4 + (0x3E << 2)
    ctx->pc = 0x2B61ECu;
    {
        const bool branch_taken_0x2b61ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B61F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B61ECu;
        // 0x2b61f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b61ec) {
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B61F4u;
    // 0x2b61f4: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B61F4u;
    SET_GPR_U32(ctx, 31, 0x2B61FCu);
    ctx->pc = 0x2B61F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B61F4u;
    // 0x2b61f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B61F4u, 0x2B61FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B61FCu;
label_2b61fc:
    // 0x2b61fc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b61fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6200: 0xc0a408c  jal         func_290230
    ctx->pc = 0x2B6200u;
    SET_GPR_U32(ctx, 31, 0x2B6208u);
    ctx->pc = 0x2B6204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6200u;
    // 0x2b6204: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x290230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x290230u, 0x2B6200u, 0x2B6208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6208u;
label_2b6208:
    // 0x2b6208: 0x54540037  bnel        $v0, $s4, . + 4 + (0x37 << 2)
    ctx->pc = 0x2B6208u;
    {
        const bool branch_taken_0x2b6208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x2b6208) {
            ctx->pc = 0x2B620Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6208u;
            // 0x2b620c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B6210u;
    // 0x2b6210: 0x8e64489c  lw          $a0, 0x489C($s3)
    ctx->pc = 0x2b6210u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
    // 0x2b6214: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B6214u;
    SET_GPR_U32(ctx, 31, 0x2B621Cu);
    ctx->pc = 0x2B6218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6214u;
    // 0x2b6218: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B6214u, 0x2B621Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B621Cu;
label_2b621c:
    // 0x2b621c: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2B621Cu;
    {
        const bool branch_taken_0x2b621c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B621Cu;
        // 0x2b6220: 0x8e63489c  lw          $v1, 0x489C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 18588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b621c) {
            ctx->pc = 0x2B62E4u;
            goto label_2b62e4;
        }
    }
    ctx->pc = 0x2B6224u;
    // 0x2b6224: 0x804201b0  lb          $v0, 0x1B0($v0)
    ctx->pc = 0x2b6224u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 432)));
    // 0x2b6228: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2b6228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b622c: 0x9064041a  lbu         $a0, 0x41A($v1)
    ctx->pc = 0x2b622cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1050)));
    // 0x2b6230: 0x38840002  xori        $a0, $a0, 0x2
    ctx->pc = 0x2b6230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
    // 0x2b6234: 0x1080002c  beqz        $a0, . + 4 + (0x2C << 2)
    ctx->pc = 0x2B6234u;
    {
        const bool branch_taken_0x2b6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6234u;
        // 0x2b6238: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6234) {
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B623Cu;
    // 0x2b623c: 0xc08a096  jal         func_228258
    ctx->pc = 0x2B623Cu;
    SET_GPR_U32(ctx, 31, 0x2B6244u);
    ctx->pc = 0x2B6240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B623Cu;
    // 0x2b6240: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228258u, 0x2B623Cu, 0x2B6244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6244u;
label_2b6244:
    // 0x2b6244: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B6244u;
    {
        const bool branch_taken_0x2b6244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6244u;
        // 0x2b6248: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6244) {
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B624Cu;
    // 0x2b624c: 0xc08a08a  jal         func_228228
    ctx->pc = 0x2B624Cu;
    SET_GPR_U32(ctx, 31, 0x2B6254u);
    ctx->pc = 0x2B6250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B624Cu;
    // 0x2b6250: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228228u, 0x2B624Cu, 0x2B6254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6254u;
label_2b6254:
    // 0x2b6254: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2B6254u;
    {
        const bool branch_taken_0x2b6254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b6254) {
            ctx->pc = 0x2B6258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6254u;
            // 0x2b6258: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B625Cu;
    // 0x2b625c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b625cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6260: 0xc7a10000  lwc1        $f1, 0x0($sp)
    ctx->pc = 0x2b6260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2b6264: 0xc440013c  lwc1        $f0, 0x13C($v0)
    ctx->pc = 0x2b6264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2b6268: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x2b6268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2b626c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2b626cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6270: 0x0  nop
    ctx->pc = 0x2b6270u;
    // NOP
    // 0x2b6274: 0x4502001c  bc1fl       . + 4 + (0x1C << 2)
    ctx->pc = 0x2B6274u;
    {
        const bool branch_taken_0x2b6274 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2b6274) {
            ctx->pc = 0x2B6278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6274u;
            // 0x2b6278: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B627Cu;
    // 0x2b627c: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2b627cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b6280: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6280u;
    {
        const bool branch_taken_0x2b6280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6280u;
        // 0x2b6284: 0x2e2102b  sltu        $v0, $s7, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6280) {
            ctx->pc = 0x2B6290u;
            goto label_2b6290;
        }
    }
    ctx->pc = 0x2B6288u;
    // 0x2b6288: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2B6288u;
    {
        const bool branch_taken_0x2b6288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B628Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6288u;
        // 0x2b628c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6288) {
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B6290u;
label_2b6290:
    // 0x2b6290: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x2B6290u;
    {
        const bool branch_taken_0x2b6290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6290u;
        // 0x2b6294: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6290) {
            ctx->pc = 0x2B62E4u;
            goto label_2b62e4;
        }
    }
    ctx->pc = 0x2B6298u;
label_2b6298:
    // 0x2b6298: 0x14540013  bne         $v0, $s4, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6298u;
    {
        const bool branch_taken_0x2b6298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x2B629Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6298u;
        // 0x2b629c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6298) {
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B62A0u;
    // 0x2b62a0: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B62A0u;
    SET_GPR_U32(ctx, 31, 0x2B62A8u);
    ctx->pc = 0x2B62A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62A0u;
    // 0x2b62a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B62A0u, 0x2B62A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62A8u;
label_2b62a8:
    // 0x2b62a8: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2B62A8u;
    SET_GPR_U32(ctx, 31, 0x2B62B0u);
    ctx->pc = 0x2B62ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62A8u;
    // 0x2b62ac: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B62A8u, 0x2B62B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62B0u;
label_2b62b0:
    // 0x2b62b0: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x2b62b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x2b62b4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2B62B4u;
    {
        const bool branch_taken_0x2b62b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B62B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62B4u;
        // 0x2b62b8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62b4) {
            ctx->pc = 0x2B62E8u;
            goto label_2b62e8;
        }
    }
    ctx->pc = 0x2B62BCu;
    // 0x2b62bc: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B62BCu;
    SET_GPR_U32(ctx, 31, 0x2B62C4u);
    ctx->pc = 0x2B62C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62BCu;
    // 0x2b62c0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B62BCu, 0x2B62C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62C4u;
label_2b62c4:
    // 0x2b62c4: 0x104000be  beqz        $v0, . + 4 + (0xBE << 2)
    ctx->pc = 0x2B62C4u;
    {
        const bool branch_taken_0x2b62c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B62C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62C4u;
        // 0x2b62c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62c4) {
            ctx->pc = 0x2B65C0u;
            goto label_2b65c0;
        }
    }
    ctx->pc = 0x2B62CCu;
    // 0x2b62cc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b62ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b62d0: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2b62d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x2b62d4: 0xc0bebac  jal         func_2FAEB0
    ctx->pc = 0x2B62D4u;
    SET_GPR_U32(ctx, 31, 0x2B62DCu);
    ctx->pc = 0x2B62D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62D4u;
    // 0x2b62d8: 0x24070021  addiu       $a3, $zero, 0x21 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAEB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAEB0u, 0x2B62D4u, 0x2B62DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62DCu;
label_2b62dc:
    // 0x2b62dc: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x2B62DCu;
    {
        const bool branch_taken_0x2b62dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B62E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62DCu;
        // 0x2b62e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62dc) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B62E4u;
label_2b62e4:
    // 0x2b62e4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b62e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b62e8:
    // 0x2b62e8: 0xc088e68  jal         func_2239A0
    ctx->pc = 0x2B62E8u;
    SET_GPR_U32(ctx, 31, 0x2B62F0u);
    ctx->pc = 0x2B62ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B62E8u;
    // 0x2b62ec: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2239A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2239A0u, 0x2B62E8u, 0x2B62F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B62F0u;
label_2b62f0:
    // 0x2b62f0: 0x1050000d  beq         $v0, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x2B62F0u;
    {
        const bool branch_taken_0x2b62f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 16));
        ctx->pc = 0x2B62F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62F0u;
        // 0x2b62f4: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62f0) {
            ctx->pc = 0x2B6328u;
            goto label_2b6328;
        }
    }
    ctx->pc = 0x2B62F8u;
    // 0x2b62f8: 0x92420014  lbu         $v0, 0x14($s2)
    ctx->pc = 0x2b62f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 20)));
    // 0x2b62fc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2B62FCu;
    {
        const bool branch_taken_0x2b62fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B62FCu;
        // 0x2b6300: 0x3c020056  lui         $v0, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b62fc) {
            ctx->pc = 0x2B6328u;
            goto label_2b6328;
        }
    }
    ctx->pc = 0x2B6304u;
    // 0x2b6304: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B6304u;
    SET_GPR_U32(ctx, 31, 0x2B630Cu);
    ctx->pc = 0x2B6308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6304u;
    // 0x2b6308: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B6304u, 0x2B630Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B630Cu;
label_2b630c:
    // 0x2b630c: 0xc136b80  jal         func_4DAE00
    ctx->pc = 0x2B630Cu;
    SET_GPR_U32(ctx, 31, 0x2B6314u);
    ctx->pc = 0x2B6310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B630Cu;
    // 0x2b6310: 0x244401a4  addiu       $a0, $v0, 0x1A4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 420));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DAE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DAE00u, 0x2B630Cu, 0x2B6314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6314u;
label_2b6314:
    // 0x2b6314: 0x1450004d  bne         $v0, $s0, . + 4 + (0x4D << 2)
    ctx->pc = 0x2B6314u;
    {
        const bool branch_taken_0x2b6314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x2B6318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6314u;
        // 0x2b6318: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6314) {
            ctx->pc = 0x2B644Cu;
            goto label_2b644c;
        }
    }
    ctx->pc = 0x2B631Cu;
    // 0x2b631c: 0x16c0004b  bnez        $s6, . + 4 + (0x4B << 2)
    ctx->pc = 0x2B631Cu;
    {
        const bool branch_taken_0x2b631c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b631c) {
            ctx->pc = 0x2B644Cu;
            goto label_2b644c;
        }
    }
    ctx->pc = 0x2B6324u;
    // 0x2b6324: 0x3c020056  lui         $v0, 0x56
    ctx->pc = 0x2b6324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)86 << 16));
label_2b6328:
    // 0x2b6328: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b6328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b632c: 0x68463fff  ldl         $a2, 0x3FFF($v0)
    ctx->pc = 0x2b632cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x2b6330: 0x6c463ff8  ldr         $a2, 0x3FF8($v0)
    ctx->pc = 0x2b6330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x2b6334: 0xc0a39c2  jal         func_28E708
    ctx->pc = 0x2B6334u;
    SET_GPR_U32(ctx, 31, 0x2B633Cu);
    ctx->pc = 0x2B6338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6334u;
    // 0x2b6338: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E708u, 0x2B6334u, 0x2B633Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B633Cu;
label_2b633c:
    // 0x2b633c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b633cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6340: 0x3a02002d  xori        $v0, $s0, 0x2D
    ctx->pc = 0x2b6340u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)45);
    // 0x2b6344: 0x1040009e  beqz        $v0, . + 4 + (0x9E << 2)
    ctx->pc = 0x2B6344u;
    {
        const bool branch_taken_0x2b6344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6344u;
        // 0x2b6348: 0x3a020018  xori        $v0, $s0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ (uint64_t)(uint16_t)24);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6344) {
            ctx->pc = 0x2B65C0u;
            goto label_2b65c0;
        }
    }
    ctx->pc = 0x2B634Cu;
    // 0x2b634c: 0x3c01bf80  lui         $at, 0xBF80
    ctx->pc = 0x2b634cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49024 << 16));
    // 0x2b6350: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b6350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b6354: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6354u;
    {
        const bool branch_taken_0x2b6354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6354u;
        // 0x2b6358: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6354) {
            ctx->pc = 0x2B6398u;
            goto label_2b6398;
        }
    }
    ctx->pc = 0x2B635Cu;
    // 0x2b635c: 0x12020003  beq         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B635Cu;
    {
        const bool branch_taken_0x2b635c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B6360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B635Cu;
        // 0x2b6360: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b635c) {
            ctx->pc = 0x2B636Cu;
            goto label_2b636c;
        }
    }
    ctx->pc = 0x2B6364u;
    // 0x2b6364: 0x16020005  bne         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B6364u;
    {
        const bool branch_taken_0x2b6364 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B6368u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6364u;
        // 0x2b6368: 0x2602ffe6  addiu       $v0, $s0, -0x1A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967270));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6364) {
            ctx->pc = 0x2B637Cu;
            goto label_2b637c;
        }
    }
    ctx->pc = 0x2B636Cu;
label_2b636c:
    // 0x2b636c: 0xc0ad6e6  jal         func_2B5B98
    ctx->pc = 0x2B636Cu;
    SET_GPR_U32(ctx, 31, 0x2B6374u);
    ctx->pc = 0x2B6370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B636Cu;
    // 0x2b6370: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B5B98u, 0x2B636Cu, 0x2B6374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6374u;
label_2b6374:
    // 0x2b6374: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x2B6374u;
    {
        const bool branch_taken_0x2b6374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6374u;
        // 0x2b6378: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6374) {
            ctx->pc = 0x2B6420u;
            goto label_2b6420;
        }
    }
    ctx->pc = 0x2B637Cu;
label_2b637c:
    // 0x2b637c: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x2b637cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2b6380: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2B6380u;
    {
        const bool branch_taken_0x2b6380 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6380u;
        // 0x2b6384: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6380) {
            ctx->pc = 0x2B6424u;
            goto label_2b6424;
        }
    }
    ctx->pc = 0x2B6388u;
    // 0x2b6388: 0xc0ad82c  jal         func_2B60B0
    ctx->pc = 0x2B6388u;
    SET_GPR_U32(ctx, 31, 0x2B6390u);
    ctx->pc = 0x2B638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6388u;
    // 0x2b638c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B60B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B60B0u, 0x2B6388u, 0x2B6390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6390u;
label_2b6390:
    // 0x2b6390: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x2B6390u;
    {
        const bool branch_taken_0x2b6390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6390u;
        // 0x2b6394: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6390) {
            ctx->pc = 0x2B6420u;
            goto label_2b6420;
        }
    }
    ctx->pc = 0x2B6398u;
label_2b6398:
    // 0x2b6398: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2b6398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2b639c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2b639cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x2b63a0: 0xc0cd4ee  jal         func_3353B8
    ctx->pc = 0x2B63A0u;
    SET_GPR_U32(ctx, 31, 0x2B63A8u);
    ctx->pc = 0x2B63A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63A0u;
    // 0x2b63a4: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2B63A0u, 0x2B63A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63A8u;
label_2b63a8:
    // 0x2b63a8: 0x2c420028  sltiu       $v0, $v0, 0x28
    ctx->pc = 0x2b63a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
    // 0x2b63ac: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x2B63ACu;
    {
        const bool branch_taken_0x2b63ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B63B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63ACu;
        // 0x2b63b0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63ac) {
            ctx->pc = 0x2B6420u;
            goto label_2b6420;
        }
    }
    ctx->pc = 0x2B63B4u;
    // 0x2b63b4: 0xc08c466  jal         func_231198
    ctx->pc = 0x2B63B4u;
    SET_GPR_U32(ctx, 31, 0x2B63BCu);
    ctx->pc = 0x2B63B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63B4u;
    // 0x2b63b8: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x2B63B4u, 0x2B63BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63BCu;
label_2b63bc:
    // 0x2b63bc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b63bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b63c0: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B63C0u;
    SET_GPR_U32(ctx, 31, 0x2B63C8u);
    ctx->pc = 0x2B63C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63C0u;
    // 0x2b63c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B63C0u, 0x2B63C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63C8u;
label_2b63c8:
    // 0x2b63c8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B63C8u;
    {
        const bool branch_taken_0x2b63c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B63CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63C8u;
        // 0x2b63cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63c8) {
            ctx->pc = 0x2B63ECu;
            goto label_2b63ec;
        }
    }
    ctx->pc = 0x2B63D0u;
    // 0x2b63d0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b63d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b63d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b63d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63d8: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2b63d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b63dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2b63dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2b63e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2b63e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b63e4: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x2B63E4u;
    SET_GPR_U32(ctx, 31, 0x2B63ECu);
    ctx->pc = 0x2B63E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63E4u;
    // 0x2b63e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x2B63E4u, 0x2B63ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63ECu;
label_2b63ec:
    // 0x2b63ec: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B63ECu;
    SET_GPR_U32(ctx, 31, 0x2B63F4u);
    ctx->pc = 0x2B63F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B63ECu;
    // 0x2b63f0: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B63ECu, 0x2B63F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B63F4u;
label_2b63f4:
    // 0x2b63f4: 0x10400072  beqz        $v0, . + 4 + (0x72 << 2)
    ctx->pc = 0x2B63F4u;
    {
        const bool branch_taken_0x2b63f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B63F4u;
        // 0x2b63f8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b63f4) {
            ctx->pc = 0x2B65C0u;
            goto label_2b65c0;
        }
    }
    ctx->pc = 0x2B63FCu;
    // 0x2b63fc: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b63fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6400: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b6400u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6404: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2b6404u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6408: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2b6408u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2b640c: 0x24070018  addiu       $a3, $zero, 0x18
    ctx->pc = 0x2b640cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2b6410: 0xc0bea46  jal         func_2FA918
    ctx->pc = 0x2B6410u;
    SET_GPR_U32(ctx, 31, 0x2B6418u);
    ctx->pc = 0x2B6414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6410u;
    // 0x2b6414: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA918u, 0x2B6410u, 0x2B6418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6418u;
label_2b6418:
    // 0x2b6418: 0x1000006a  b           . + 4 + (0x6A << 2)
    ctx->pc = 0x2B6418u;
    {
        const bool branch_taken_0x2b6418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B641Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6418u;
        // 0x2b641c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6418) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B6420u;
label_2b6420:
    // 0x2b6420: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b6420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2b6424:
    // 0x2b6424: 0xc08c466  jal         func_231198
    ctx->pc = 0x2B6424u;
    SET_GPR_U32(ctx, 31, 0x2B642Cu);
    ctx->pc = 0x2B6428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6424u;
    // 0x2b6428: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231198u, 0x2B6424u, 0x2B642Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B642Cu;
label_2b642c:
    // 0x2b642c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b642cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b6430: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b6430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6434: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b6434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6438: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2b6438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b643c: 0xc0a3892  jal         func_28E248
    ctx->pc = 0x2B643Cu;
    SET_GPR_U32(ctx, 31, 0x2B6444u);
    ctx->pc = 0x2B6440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B643Cu;
    // 0x2b6440: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2B643Cu, 0x2B6444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6444u;
label_2b6444:
    // 0x2b6444: 0x1000005f  b           . + 4 + (0x5F << 2)
    ctx->pc = 0x2B6444u;
    {
        const bool branch_taken_0x2b6444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6444u;
        // 0x2b6448: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6444) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B644Cu;
label_2b644c:
    // 0x2b644c: 0x16c20005  bne         $s6, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B644Cu;
    {
        const bool branch_taken_0x2b644c = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b644c) {
            ctx->pc = 0x2B6464u;
            goto label_2b6464;
        }
    }
    ctx->pc = 0x2B6454u;
    // 0x2b6454: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2b6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x2b6458: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B6458u;
    {
        const bool branch_taken_0x2b6458 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B645Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6458u;
        // 0x2b645c: 0x26e20bb8  addiu       $v0, $s7, 0xBB8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), 3000));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6458) {
            ctx->pc = 0x2B6464u;
            goto label_2b6464;
        }
    }
    ctx->pc = 0x2B6460u;
    // 0x2b6460: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x2b6460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_2b6464:
    // 0x2b6464: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2b6464u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
    // 0x2b6468: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2b6468u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
    // 0x2b646c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2b646cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x2b6470: 0xc087502  jal         func_21D408
    ctx->pc = 0x2B6470u;
    SET_GPR_U32(ctx, 31, 0x2B6478u);
    ctx->pc = 0x2B6474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6470u;
    // 0x2b6474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2B6470u, 0x2B6478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6478u;
label_2b6478:
    // 0x2b6478: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2b6478u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b647c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2b647cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6480: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b6480u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6484: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x2b6484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x2b6488: 0x27d701a4  addiu       $s7, $fp, 0x1A4
    ctx->pc = 0x2b6488u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 30), 420));
    // 0x2b648c: 0x24534b00  addiu       $s3, $v0, 0x4B00
    ctx->pc = 0x2b648cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b6490: 0x26b40090  addiu       $s4, $s5, 0x90
    ctx->pc = 0x2b6490u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2b6494: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2b6494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b6498:
    // 0x2b6498: 0xc137866  jal         func_4DE198
    ctx->pc = 0x2B6498u;
    SET_GPR_U32(ctx, 31, 0x2B64A0u);
    ctx->pc = 0x2B649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6498u;
    // 0x2b649c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DE198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DE198u, 0x2B6498u, 0x2B64A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B64A0u;
label_2b64a0:
    // 0x2b64a0: 0xc0e409a  jal         func_390268
    ctx->pc = 0x2B64A0u;
    SET_GPR_U32(ctx, 31, 0x2B64A8u);
    ctx->pc = 0x2B64A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B64A0u;
    // 0x2b64a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2B64A0u, 0x2B64A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B64A8u;
label_2b64a8:
    // 0x2b64a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b64a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b64ac: 0x52000012  beql        $s0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B64ACu;
    {
        const bool branch_taken_0x2b64ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64ac) {
            ctx->pc = 0x2B64B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B64ACu;
            // 0x2b64b0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B64F8u;
            goto label_2b64f8;
        }
    }
    ctx->pc = 0x2B64B4u;
    // 0x2b64b4: 0x820201b0  lb          $v0, 0x1B0($s0)
    ctx->pc = 0x2b64b4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x2b64b8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x2b64b8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x2b64bc: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x2B64BCu;
    {
        const bool branch_taken_0x2b64bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b64bc) {
            ctx->pc = 0x2B64C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B64BCu;
            // 0x2b64c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B64F8u;
            goto label_2b64f8;
        }
    }
    ctx->pc = 0x2B64C4u;
    // 0x2b64c4: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2b64c4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2b64c8: 0x86850002  lh          $a1, 0x2($s4)
    ctx->pc = 0x2b64c8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x2b64cc: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b64ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b64d0: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b64d0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b64d4: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x2b64d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
    // 0x2b64d8: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B64D8u;
    SET_GPR_U32(ctx, 31, 0x2B64E0u);
    ctx->pc = 0x2B64DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B64D8u;
    // 0x2b64dc: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B64D8u, 0x2B64E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B64E0u;
label_2b64e0:
    // 0x2b64e0: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b64e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b64e4: 0x0  nop
    ctx->pc = 0x2b64e4u;
    // NOP
    // 0x2b64e8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B64E8u;
    {
        const bool branch_taken_0x2b64e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B64ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64E8u;
        // 0x2b64ec: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64e8) {
            ctx->pc = 0x2B64F8u;
            goto label_2b64f8;
        }
    }
    ctx->pc = 0x2B64F0u;
    // 0x2b64f0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b64f0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b64f4: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2b64f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b64f8:
    // 0x2b64f8: 0x2e220010  sltiu       $v0, $s1, 0x10
    ctx->pc = 0x2b64f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x2b64fc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x2B64FCu;
    {
        const bool branch_taken_0x2b64fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B64FCu;
        // 0x2b6500: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b64fc) {
            ctx->pc = 0x2B6498u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6498;
        }
    }
    ctx->pc = 0x2B6504u;
    // 0x2b6504: 0x16c0001d  bnez        $s6, . + 4 + (0x1D << 2)
    ctx->pc = 0x2B6504u;
    {
        const bool branch_taken_0x2b6504 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6504u;
        // 0x2b6508: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6504) {
            ctx->pc = 0x2B657Cu;
            goto label_2b657c;
        }
    }
    ctx->pc = 0x2B650Cu;
    // 0x2b650c: 0x27d101f0  addiu       $s1, $fp, 0x1F0
    ctx->pc = 0x2b650cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 496));
    // 0x2b6510: 0x24544b00  addiu       $s4, $v0, 0x4B00
    ctx->pc = 0x2b6510u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b6514: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b6514u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6518: 0x26b70090  addiu       $s7, $s5, 0x90
    ctx->pc = 0x2b6518u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 21), 144));
    // 0x2b651c: 0x0  nop
    ctx->pc = 0x2b651cu;
    // NOP
label_2b6520:
    // 0x2b6520: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x2b6520u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2b6524: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2B6524u;
    {
        const bool branch_taken_0x2b6524 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b6524) {
            ctx->pc = 0x2B6528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B6524u;
            // 0x2b6528: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6568u;
            goto label_2b6568;
        }
    }
    ctx->pc = 0x2B652Cu;
    // 0x2b652c: 0x5215000e  beql        $s0, $s5, . + 4 + (0xE << 2)
    ctx->pc = 0x2B652Cu;
    {
        const bool branch_taken_0x2b652c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 21));
        if (branch_taken_0x2b652c) {
            ctx->pc = 0x2B6530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B652Cu;
            // 0x2b6530: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B6568u;
            goto label_2b6568;
        }
    }
    ctx->pc = 0x2B6534u;
    // 0x2b6534: 0x86040092  lh          $a0, 0x92($s0)
    ctx->pc = 0x2b6534u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 146)));
    // 0x2b6538: 0x86e50002  lh          $a1, 0x2($s7)
    ctx->pc = 0x2b6538u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
    // 0x2b653c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x2b653cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x2b6540: 0x52940  sll         $a1, $a1, 5
    ctx->pc = 0x2b6540u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 5));
    // 0x2b6544: 0x942021  addu        $a0, $a0, $s4
    ctx->pc = 0x2b6544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 20)));
    // 0x2b6548: 0xc0cdb38  jal         func_336CE0
    ctx->pc = 0x2B6548u;
    SET_GPR_U32(ctx, 31, 0x2B6550u);
    ctx->pc = 0x2B654Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B6548u;
    // 0x2b654c: 0xb42821  addu        $a1, $a1, $s4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336CE0u, 0x2B6548u, 0x2B6550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6550u;
label_2b6550:
    // 0x2b6550: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x2b6550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2b6554: 0x0  nop
    ctx->pc = 0x2b6554u;
    // NOP
    // 0x2b6558: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2B6558u;
    {
        const bool branch_taken_0x2b6558 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2B655Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6558u;
        // 0x2b655c: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6558) {
            ctx->pc = 0x2B6568u;
            goto label_2b6568;
        }
    }
    ctx->pc = 0x2B6560u;
    // 0x2b6560: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2b6560u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x2b6564: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2b6564u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2b6568:
    // 0x2b6568: 0x2e620004  sltiu       $v0, $s3, 0x4
    ctx->pc = 0x2b6568u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2b656c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x2B656Cu;
    {
        const bool branch_taken_0x2b656c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B6570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B656Cu;
        // 0x2b6570: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b656c) {
            ctx->pc = 0x2B6520u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2b6520;
        }
    }
    ctx->pc = 0x2B6574u;
    // 0x2b6574: 0x12c00013  beqz        $s6, . + 4 + (0x13 << 2)
    ctx->pc = 0x2B6574u;
    {
        const bool branch_taken_0x2b6574 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B6578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6574u;
        // 0x2b6578: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6574) {
            ctx->pc = 0x2B65C4u;
            goto label_2b65c4;
        }
    }
    ctx->pc = 0x2B657Cu;
label_2b657c:
    // 0x2b657c: 0xc0a367c  jal         func_28D9F0
    ctx->pc = 0x2B657Cu;
    SET_GPR_U32(ctx, 31, 0x2B6584u);
    ctx->pc = 0x2B6580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B657Cu;
    // 0x2b6580: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D9F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D9F0u, 0x2B657Cu, 0x2B6584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6584u;
label_2b6584:
    // 0x2b6584: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b6584u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b6588: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
    ctx->pc = 0x2B6588u;
    {
        const bool branch_taken_0x2b6588 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B6588u;
        // 0x2b658c: 0x3c020071  lui         $v0, 0x71 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b6588) {
            ctx->pc = 0x2B65C0u;
            goto label_2b65c0;
        }
    }
    ctx->pc = 0x2B6590u;
    // 0x2b6590: 0x86d00092  lh          $s0, 0x92($s6)
    ctx->pc = 0x2b6590u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 22), 146)));
    // 0x2b6594: 0x24424b00  addiu       $v0, $v0, 0x4B00
    ctx->pc = 0x2b6594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19200));
    // 0x2b6598: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2b6598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b659c: 0x108140  sll         $s0, $s0, 5
    ctx->pc = 0x2b659cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
    // 0x2b65a0: 0xc0884f6  jal         func_2213D8
    ctx->pc = 0x2B65A0u;
    SET_GPR_U32(ctx, 31, 0x2B65A8u);
    ctx->pc = 0x2B65A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B65A0u;
    // 0x2b65a4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2213D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2213D8u, 0x2B65A0u, 0x2B65A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B65A8u;
label_2b65a8:
    // 0x2b65a8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b65a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2b65ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2b65acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b65b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b65b4: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2b65b4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2b65b8: 0xc0bf800  jal         func_2FE000
    ctx->pc = 0x2B65B8u;
    SET_GPR_U32(ctx, 31, 0x2B65C0u);
    ctx->pc = 0x2B65BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B65B8u;
    // 0x2b65bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE000u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE000u, 0x2B65B8u, 0x2B65C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B65C0u;
label_2b65c0:
    // 0x2b65c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2b65c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b65c4:
    // 0x2b65c4: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2b65c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b65c8: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2b65c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b65cc: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2b65ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2b65d0: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2b65d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b65d4: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2b65d4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b65d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b65d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b65dc: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x2b65dcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2b65e0: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x2b65e0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b65e4: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x2b65e4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b65e8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2b65e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b65ec: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x2b65ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2b65f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2B65F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B65F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B65F0u;
        // 0x2b65f4: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B65F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B65F8u;
}
