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

// Function: sub_00253078
// Address: 0x253078 - 0x253118
void sub_00253078_0x253078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253078_0x253078");
#endif

    switch (ctx->pc) {
        case 0x2530bcu: goto label_2530bc;
        case 0x2530d8u: goto label_2530d8;
        case 0x2530fcu: goto label_2530fc;
        default: break;
    }

    ctx->pc = 0x253078u;

    // 0x253078: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x253078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x25307c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x25307cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x253080: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x253080u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x253084: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x253084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x253088: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x253088u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x25308c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x25308cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x253090: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x253090u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x253094: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x253094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x253098: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x253098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25309c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x25309cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530a0: 0x3c0140a0  lui         $at, 0x40A0
    ctx->pc = 0x2530a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16544 << 16));
    // 0x2530a4: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2530a4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2530a8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2530a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2530ac: 0xac4005b4  sw          $zero, 0x5B4($v0)
    ctx->pc = 0x2530acu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x5105B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5105B4u, _value); } while (0);
    // 0x2530b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2530b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530b4: 0xc094904  jal         func_252410
    ctx->pc = 0x2530B4u;
    SET_GPR_U32(ctx, 31, 0x2530BCu);
    ctx->pc = 0x2530B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530B4u;
    // 0x2530b8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252410u, 0x2530B4u, 0x2530BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2530BCu;
label_2530bc:
    // 0x2530bc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2530BCu;
    {
        const bool branch_taken_0x2530bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530BCu;
        // 0x2530c0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530bc) {
            ctx->pc = 0x2530FCu;
            goto label_2530fc;
        }
    }
    ctx->pc = 0x2530C4u;
    // 0x2530c4: 0x8c44c450  lw          $a0, -0x3BB0($v0)
    ctx->pc = 0x2530c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294952016)));
    // 0x2530c8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x2530C8u;
    {
        const bool branch_taken_0x2530c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530C8u;
        // 0x2530cc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530c8) {
            ctx->pc = 0x2530FCu;
            goto label_2530fc;
        }
    }
    ctx->pc = 0x2530D0u;
    // 0x2530d0: 0xc094454  jal         func_251150
    ctx->pc = 0x2530D0u;
    SET_GPR_U32(ctx, 31, 0x2530D8u);
    ctx->pc = 0x2530D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530D0u;
    // 0x2530d4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251150u, 0x2530D0u, 0x2530D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2530D8u;
label_2530d8:
    // 0x2530d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2530d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2530dc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2530DCu;
    {
        const bool branch_taken_0x2530dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2530E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2530DCu;
        // 0x2530e0: 0x3c02006d  lui         $v0, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2530dc) {
            ctx->pc = 0x2530FCu;
            goto label_2530fc;
        }
    }
    ctx->pc = 0x2530E4u;
    // 0x2530e4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x2530e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x2530e8: 0x3c05006d  lui         $a1, 0x6D
    ctx->pc = 0x2530e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)109 << 16));
    // 0x2530ec: 0xac51c958  sw          $s1, -0x36A8($v0)
    ctx->pc = 0x2530ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294953304), GPR_U32(ctx, 17));
    // 0x2530f0: 0xe474c95c  swc1        $f20, -0x36A4($v1)
    ctx->pc = 0x2530f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x6CC95Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6CC95Cu, _value); } while (0); }
    // 0x2530f4: 0xc094b24  jal         func_252C90
    ctx->pc = 0x2530F4u;
    SET_GPR_U32(ctx, 31, 0x2530FCu);
    ctx->pc = 0x2530F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2530F4u;
    // 0x2530f8: 0xacb2c960  sw          $s2, -0x36A0($a1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294953312), GPR_U32(ctx, 18));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252C90u, 0x2530F4u, 0x2530FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2530FCu;
label_2530fc:
    // 0x2530fc: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x2530fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x253100: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x253100u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x253104: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x253104u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253108: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x253108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25310c: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x25310cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x253110: 0x3e00008  jr          $ra
    ctx->pc = 0x253110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x253114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x253110u;
        // 0x253114: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253118u;
}
