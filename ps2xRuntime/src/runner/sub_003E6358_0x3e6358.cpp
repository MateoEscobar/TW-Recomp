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

// Function: sub_003E6358
// Address: 0x3e6358 - 0x3e6400
void sub_003E6358_0x3e6358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E6358_0x3e6358");
#endif

    switch (ctx->pc) {
        case 0x3e6380u: goto label_3e6380;
        case 0x3e638cu: goto label_3e638c;
        case 0x3e63d4u: goto label_3e63d4;
        case 0x3e63e4u: goto label_3e63e4;
        default: break;
    }

    ctx->pc = 0x3e6358u;

    // 0x3e6358: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3e6358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x3e635c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x3e635cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x3e6360: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e6360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e6364: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3e6364u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6368: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x3e6368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x3e636c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e636cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6370: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3e6370u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6374: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3e6374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3e6378: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6378u;
    SET_GPR_U32(ctx, 31, 0x3E6380u);
    ctx->pc = 0x3E637Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6378u;
    // 0x3e637c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6378u, 0x3E6380u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E6380u;
label_3e6380:
    // 0x3e6380: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x3e6380u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
    // 0x3e6384: 0xc0ea146  jal         func_3A8518
    ctx->pc = 0x3E6384u;
    SET_GPR_U32(ctx, 31, 0x3E638Cu);
    ctx->pc = 0x3E6388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E6384u;
    // 0x3e6388: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3E6384u, 0x3E638Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E638Cu;
label_3e638c:
    // 0x3e638c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3e638cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6390: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3e6390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3e6394: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6394u;
    {
        const bool branch_taken_0x3e6394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E6398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E6394u;
        // 0x3e6398: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6394) {
            ctx->pc = 0x3E63A8u;
            goto label_3e63a8;
        }
    }
    ctx->pc = 0x3E639Cu;
    // 0x3e639c: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x3e639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x3e63a0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3e63a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x3e63a4: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x3e63a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3e63a8:
    // 0x3e63a8: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3E63A8u;
    {
        const bool branch_taken_0x3e63a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3E63ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E63A8u;
        // 0x3e63ac: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e63a8) {
            ctx->pc = 0x3E63C8u;
            goto label_3e63c8;
        }
    }
    ctx->pc = 0x3E63B0u;
    // 0x3e63b0: 0x8e220054  lw          $v0, 0x54($s1)
    ctx->pc = 0x3e63b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x3e63b4: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x3e63b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
    // 0x3e63b8: 0xae2000b0  sw          $zero, 0xB0($s1)
    ctx->pc = 0x3e63b8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 176), GPR_U32(ctx, 0));
    // 0x3e63bc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3e63bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3e63c0: 0xae220054  sw          $v0, 0x54($s1)
    ctx->pc = 0x3e63c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 2));
    // 0x3e63c4: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x3e63c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_3e63c8:
    // 0x3e63c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e63c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63cc: 0xc0e8cda  jal         func_3A3368
    ctx->pc = 0x3E63CCu;
    SET_GPR_U32(ctx, 31, 0x3E63D4u);
    ctx->pc = 0x3E63D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E63CCu;
    // 0x3e63d0: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A3368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A3368u, 0x3E63CCu, 0x3E63D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E63D4u;
label_3e63d4:
    // 0x3e63d4: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x3e63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    // 0x3e63d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3e63d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e63dc: 0xc0e8cbc  jal         func_3A32F0
    ctx->pc = 0x3E63DCu;
    SET_GPR_U32(ctx, 31, 0x3E63E4u);
    ctx->pc = 0x3E63E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E63DCu;
    // 0x3e63e0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A32F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A32F0u, 0x3E63DCu, 0x3E63E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E63E4u;
label_3e63e4:
    // 0x3e63e4: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3e63e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e63e8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e63e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e63ec: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3e63ecu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e63f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3e63f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3e63f4: 0x3e00008  jr          $ra
    ctx->pc = 0x3E63F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E63F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E63F4u;
        // 0x3e63f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E63F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E63FCu;
    // 0x3e63fc: 0x0  nop
    ctx->pc = 0x3e63fcu;
    // NOP
    ctx->pc = 0x3e6400u;
}
