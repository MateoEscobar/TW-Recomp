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

// Function: sub_00324438
// Address: 0x324438 - 0x3244c0
void sub_00324438_0x324438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00324438_0x324438");
#endif

    switch (ctx->pc) {
        case 0x324464u: goto label_324464;
        case 0x324478u: goto label_324478;
        case 0x3244a8u: goto label_3244a8;
        default: break;
    }

    ctx->pc = 0x324438u;

    // 0x324438: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x324438u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x32443c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x32443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x324440: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x324440u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x324444: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x324444u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324448: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x324448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x32444c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x32444cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324450: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x324450u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x324454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324458: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x324458u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x32445c: 0xc0c9ee2  jal         func_327B88
    ctx->pc = 0x32445Cu;
    SET_GPR_U32(ctx, 31, 0x324464u);
    ctx->pc = 0x324460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x32445Cu;
    // 0x324460: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x327B88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x327B88u, 0x32445Cu, 0x324464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324464u;
label_324464:
    // 0x324464: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x324464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x324468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32446c: 0x24a54840  addiu       $a1, $a1, 0x4840
    ctx->pc = 0x32446cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18496));
    // 0x324470: 0xc0ca002  jal         func_328008
    ctx->pc = 0x324470u;
    SET_GPR_U32(ctx, 31, 0x324478u);
    ctx->pc = 0x324474u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x324470u;
    // 0x324474: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328008u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328008u, 0x324470u, 0x324478u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x324478u;
label_324478:
    // 0x324478: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x324478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x32447c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x32447Cu;
    {
        const bool branch_taken_0x32447c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x324480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32447Cu;
        // 0x324480: 0x3c050057  lui         $a1, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32447c) {
            ctx->pc = 0x324490u;
            goto label_324490;
        }
    }
    ctx->pc = 0x324484u;
    // 0x324484: 0x3c020057  lui         $v0, 0x57
    ctx->pc = 0x324484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
    // 0x324488: 0x24424848  addiu       $v0, $v0, 0x4848
    ctx->pc = 0x324488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18504));
    // 0x32448c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x32448cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_324490:
    // 0x324490: 0x8fa70008  lw          $a3, 0x8($sp)
    ctx->pc = 0x324490u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x324494: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x324494u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x324498: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x324498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32449c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x32449cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3244a0: 0xc0c9224  jal         func_324890
    ctx->pc = 0x3244A0u;
    SET_GPR_U32(ctx, 31, 0x3244A8u);
    ctx->pc = 0x3244A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3244A0u;
    // 0x3244a4: 0x24a54850  addiu       $a1, $a1, 0x4850 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x324890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x324890u, 0x3244A0u, 0x3244A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3244A8u;
label_3244a8:
    // 0x3244a8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3244a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3244ac: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3244acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3244b0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3244b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3244b4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x3244b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3244b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3244B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3244BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3244B8u;
        // 0x3244bc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3244B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3244C0u;
}
