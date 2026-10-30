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

// Function: sub_00266FD8
// Address: 0x266fd8 - 0x2671a8
void sub_00266FD8_0x266fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00266FD8_0x266fd8");
#endif

    switch (ctx->pc) {
        case 0x26700cu: goto label_26700c;
        case 0x267024u: goto label_267024;
        case 0x267044u: goto label_267044;
        case 0x267058u: goto label_267058;
        case 0x267070u: goto label_267070;
        case 0x267090u: goto label_267090;
        case 0x2670acu: goto label_2670ac;
        case 0x2670e4u: goto label_2670e4;
        case 0x2670f4u: goto label_2670f4;
        case 0x267110u: goto label_267110;
        case 0x267168u: goto label_267168;
        default: break;
    }

    ctx->pc = 0x266fd8u;

    // 0x266fd8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x266fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x266fdc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x266fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x266fe0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x266fe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x266fe4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x266fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fe8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x266fe8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266fec: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x266fecu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x266ff0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x266ff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x266ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x266ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x266ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x266ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x266ffc: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x266ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x267000: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x267000u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x267004: 0xc08a684  jal         func_229A10
    ctx->pc = 0x267004u;
    SET_GPR_U32(ctx, 31, 0x26700Cu);
    ctx->pc = 0x267008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267004u;
    // 0x267008: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229A10u, 0x267004u, 0x26700Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26700Cu;
label_26700c:
    // 0x26700c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26700Cu;
    {
        const bool branch_taken_0x26700c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26700Cu;
        // 0x267010: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x26700c) {
            ctx->pc = 0x26702Cu;
            goto label_26702c;
        }
    }
    ctx->pc = 0x267014u;
    // 0x267014: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x267014u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x267018: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x267018u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26701c: 0xc095358  jal         func_254D60
    ctx->pc = 0x26701Cu;
    SET_GPR_U32(ctx, 31, 0x267024u);
    ctx->pc = 0x267020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26701Cu;
    // 0x267020: 0x34a5ffff  ori         $a1, $a1, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x254D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254D60u, 0x26701Cu, 0x267024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267024u;
label_267024:
    // 0x267024: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x267024u;
    {
        const bool branch_taken_0x267024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267024u;
        // 0x267028: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267024) {
            ctx->pc = 0x267030u;
            goto label_267030;
        }
    }
    ctx->pc = 0x26702Cu;
label_26702c:
    // 0x26702c: 0x2414002a  addiu       $s4, $zero, 0x2A
    ctx->pc = 0x26702cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_267030:
    // 0x267030: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267030u;
    {
        const bool branch_taken_0x267030 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x267034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267030u;
        // 0x267034: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267030) {
            ctx->pc = 0x26704Cu;
            goto label_26704c;
        }
    }
    ctx->pc = 0x267038u;
    // 0x267038: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x267038u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26703c: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x26703Cu;
    SET_GPR_U32(ctx, 31, 0x267044u);
    ctx->pc = 0x267040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26703Cu;
    // 0x267040: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x26703Cu, 0x267044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267044u;
label_267044:
    // 0x267044: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x267044u;
    {
        const bool branch_taken_0x267044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267044u;
        // 0x267048: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267044) {
            ctx->pc = 0x267050u;
            goto label_267050;
        }
    }
    ctx->pc = 0x26704Cu;
label_26704c:
    // 0x26704c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26704cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_267050:
    // 0x267050: 0xc08a196  jal         func_228658
    ctx->pc = 0x267050u;
    SET_GPR_U32(ctx, 31, 0x267058u);
    ctx->pc = 0x267054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267050u;
    // 0x267054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228658u, 0x267050u, 0x267058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267058u;
label_267058:
    // 0x267058: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x267058u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26705c: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x26705cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x267060: 0x8e2200d4  lw          $v0, 0xD4($s1)
    ctx->pc = 0x267060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x267064: 0x8c642c04  lw          $a0, 0x2C04($v1)
    ctx->pc = 0x267064u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x512C04u));
    // 0x267068: 0xc0e44cc  jal         func_391330
    ctx->pc = 0x267068u;
    SET_GPR_U32(ctx, 31, 0x267070u);
    ctx->pc = 0x26706Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267068u;
    // 0x26706c: 0x8c450124  lw          $a1, 0x124($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 292)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x391330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x391330u, 0x267068u, 0x267070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267070u;
label_267070:
    // 0x267070: 0x80430086  lb          $v1, 0x86($v0)
    ctx->pc = 0x267070u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 134)));
    // 0x267074: 0x24020022  addiu       $v0, $zero, 0x22
    ctx->pc = 0x267074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x267078: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x267078u;
    {
        const bool branch_taken_0x267078 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x26707Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267078u;
        // 0x26707c: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267078) {
            ctx->pc = 0x267098u;
            goto label_267098;
        }
    }
    ctx->pc = 0x267080u;
    // 0x267080: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x267080u;
    {
        const bool branch_taken_0x267080 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x267080) {
            ctx->pc = 0x267098u;
            goto label_267098;
        }
    }
    ctx->pc = 0x267088u;
    // 0x267088: 0xc0e2612  jal         func_389848
    ctx->pc = 0x267088u;
    SET_GPR_U32(ctx, 31, 0x267090u);
    ctx->pc = 0x26708Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267088u;
    // 0x26708c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x389848u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x389848u, 0x267088u, 0x267090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267090u;
label_267090:
    // 0x267090: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x267090u;
    {
        const bool branch_taken_0x267090 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x267094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267090u;
        // 0x267094: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267090) {
            ctx->pc = 0x2670ECu;
            goto label_2670ec;
        }
    }
    ctx->pc = 0x267098u;
label_267098:
    // 0x267098: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x267098u;
    {
        const bool branch_taken_0x267098 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267098u;
        // 0x26709c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267098) {
            ctx->pc = 0x2670B4u;
            goto label_2670b4;
        }
    }
    ctx->pc = 0x2670A0u;
    // 0x2670a0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2670a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670a4: 0xc099cb4  jal         func_2672D0
    ctx->pc = 0x2670A4u;
    SET_GPR_U32(ctx, 31, 0x2670ACu);
    ctx->pc = 0x2670A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670A4u;
    // 0x2670a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672D0u, 0x2670A4u, 0x2670ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670ACu;
label_2670ac:
    // 0x2670ac: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x2670ACu;
    {
        const bool branch_taken_0x2670ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2670B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2670ACu;
        // 0x2670b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2670ac) {
            ctx->pc = 0x2670E8u;
            goto label_2670e8;
        }
    }
    ctx->pc = 0x2670B4u;
label_2670b4:
    // 0x2670b4: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2670b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x2670b8: 0x8e2700d4  lw          $a3, 0xD4($s1)
    ctx->pc = 0x2670b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 212)));
    // 0x2670bc: 0x244216c0  addiu       $v0, $v0, 0x16C0
    ctx->pc = 0x2670bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5824));
    // 0x2670c0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2670c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5116C0u));
    // 0x2670c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2670c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2670c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2670cc: 0x7fa30000  sq          $v1, 0x0($sp)
    ctx->pc = 0x2670ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    // 0x2670d0: 0xc4e0011c  lwc1        $f0, 0x11C($a3)
    ctx->pc = 0x2670d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2670d4: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x2670d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2670d8: 0xc4e10120  lwc1        $f1, 0x120($a3)
    ctx->pc = 0x2670d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2670dc: 0xc099cce  jal         func_267338
    ctx->pc = 0x2670DCu;
    SET_GPR_U32(ctx, 31, 0x2670E4u);
    ctx->pc = 0x2670E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670DCu;
    // 0x2670e0: 0xe7a10004  swc1        $f1, 0x4($sp) (Delay Slot)
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x267338u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267338u, 0x2670DCu, 0x2670E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670E4u;
label_2670e4:
    // 0x2670e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2670e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2670e8:
    // 0x2670e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2670e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2670ec:
    // 0x2670ec: 0xc0899e8  jal         func_2267A0
    ctx->pc = 0x2670ECu;
    SET_GPR_U32(ctx, 31, 0x2670F4u);
    ctx->pc = 0x2670F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2670ECu;
    // 0x2670f0: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2267A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2267A0u, 0x2670ECu, 0x2670F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2670F4u;
label_2670f4:
    // 0x2670f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2670f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2670f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2670fc: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2670fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267100: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x267100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267104: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x267104u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x267108: 0xc099b40  jal         func_266D00
    ctx->pc = 0x267108u;
    SET_GPR_U32(ctx, 31, 0x267110u);
    ctx->pc = 0x26710Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267108u;
    // 0x26710c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x266D00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x266D00u, 0x267108u, 0x267110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267110u;
label_267110:
    // 0x267110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x267110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x267114: 0x30820030  andi        $v0, $a0, 0x30
    ctx->pc = 0x267114u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)48);
    // 0x267118: 0x2c830041  sltiu       $v1, $a0, 0x41
    ctx->pc = 0x267118u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)65) ? 1 : 0);
    // 0x26711c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x26711Cu;
    {
        const bool branch_taken_0x26711c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x267120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26711Cu;
        // 0x267120: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26711c) {
            ctx->pc = 0x267140u;
            goto label_267140;
        }
    }
    ctx->pc = 0x267124u;
    // 0x267124: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x267124u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x267128: 0x26620798  addiu       $v0, $s3, 0x798
    ctx->pc = 0x267128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1944));
    // 0x26712c: 0x628021  addu        $s0, $v1, $v0
    ctx->pc = 0x26712cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x267130: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x267130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x267134: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x267134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x267138: 0x14820004  bne         $a0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267138u;
    {
        const bool branch_taken_0x267138 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x26713Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267138u;
        // 0x26713c: 0x60882d  daddu       $s1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267138) {
            ctx->pc = 0x26714Cu;
            goto label_26714c;
        }
    }
    ctx->pc = 0x267140u;
label_267140:
    // 0x267140: 0x26630798  addiu       $v1, $s3, 0x798
    ctx->pc = 0x267140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1944));
    // 0x267144: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x267144u;
    {
        const bool branch_taken_0x267144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267144u;
        // 0x267148: 0x8c6200a8  lw          $v0, 0xA8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267144) {
            ctx->pc = 0x267184u;
            goto label_267184;
        }
    }
    ctx->pc = 0x26714Cu;
label_26714c:
    // 0x26714c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x26714cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267150: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x267150u;
    {
        const bool branch_taken_0x267150 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x267154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267150u;
        // 0x267154: 0x26630798  addiu       $v1, $s3, 0x798 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267150) {
            ctx->pc = 0x26717Cu;
            goto label_26717c;
        }
    }
    ctx->pc = 0x267158u;
    // 0x267158: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x267158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x26715c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x26715cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x267160: 0xc0cd526  jal         func_335498
    ctx->pc = 0x267160u;
    SET_GPR_U32(ctx, 31, 0x267168u);
    ctx->pc = 0x267164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x267160u;
    // 0x267164: 0x2484b898  addiu       $a0, $a0, -0x4768 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335498u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335498u, 0x267160u, 0x267168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x267168u;
label_267168:
    // 0x267168: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x267168u;
    {
        const bool branch_taken_0x267168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267168u;
        // 0x26716c: 0x26630798  addiu       $v1, $s3, 0x798 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1944));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267168) {
            ctx->pc = 0x26717Cu;
            goto label_26717c;
        }
    }
    ctx->pc = 0x267170u;
    // 0x267170: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x267170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x267174: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x267174u;
    {
        const bool branch_taken_0x267174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x267178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x267174u;
        // 0x267178: 0x24420014  addiu       $v0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x267174) {
            ctx->pc = 0x267184u;
            goto label_267184;
        }
    }
    ctx->pc = 0x26717Cu;
label_26717c:
    // 0x26717c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x26717cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x267180: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x267180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_267184:
    // 0x267184: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x267184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x267188: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x267188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26718c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x26718cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x267190: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x267190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x267194: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x267194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x267198: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x267198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26719c: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x26719cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2671a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2671A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2671A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2671A0u;
        // 0x2671a4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2671A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2671A8u;
}
