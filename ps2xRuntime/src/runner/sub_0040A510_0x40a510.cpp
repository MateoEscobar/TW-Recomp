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

// Function: sub_0040A510
// Address: 0x40a510 - 0x40a5b0
void sub_0040A510_0x40a510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040A510_0x40a510");
#endif

    switch (ctx->pc) {
        case 0x40a540u: goto label_40a540;
        case 0x40a550u: goto label_40a550;
        case 0x40a560u: goto label_40a560;
        case 0x40a568u: goto label_40a568;
        case 0x40a574u: goto label_40a574;
        case 0x40a580u: goto label_40a580;
        case 0x40a58cu: goto label_40a58c;
        default: break;
    }

    ctx->pc = 0x40a510u;

    // 0x40a510: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x40a510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x40a514: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x40a514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x40a518: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x40a518u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x40a51c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x40a51cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x40a520: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x40a520u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x40a524: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x40a524u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a528: 0x8e0247a0  lw          $v0, 0x47A0($s0)
    ctx->pc = 0x40a528u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5147A0u));
    // 0x40a52c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40a52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a530: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40A530u;
    {
        const bool branch_taken_0x40a530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40A534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A530u;
        // 0x40a534: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40a530) {
            ctx->pc = 0x40A544u;
            goto label_40a544;
        }
    }
    ctx->pc = 0x40A538u;
    // 0x40a538: 0xc0cbda6  jal         func_32F698
    ctx->pc = 0x40A538u;
    SET_GPR_U32(ctx, 31, 0x40A540u);
    ctx->pc = 0x40A53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A538u;
    // 0x40a53c: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32F698u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32F698u, 0x40A538u, 0x40A540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A540u;
label_40a540:
    // 0x40a540: 0xae0247a0  sw          $v0, 0x47A0($s0)
    ctx->pc = 0x40a540u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 18336), GPR_U32(ctx, 2));
label_40a544:
    // 0x40a544: 0x8e0447a0  lw          $a0, 0x47A0($s0)
    ctx->pc = 0x40a544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18336)));
    // 0x40a548: 0xc0c8f4e  jal         func_323D38
    ctx->pc = 0x40A548u;
    SET_GPR_U32(ctx, 31, 0x40A550u);
    ctx->pc = 0x40A54Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A548u;
    // 0x40a54c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323D38u, 0x40A548u, 0x40A550u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A550u;
label_40a550:
    // 0x40a550: 0x8e0447a0  lw          $a0, 0x47A0($s0)
    ctx->pc = 0x40a550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18336)));
    // 0x40a554: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x40a554u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a558: 0xc0c8e86  jal         func_323A18
    ctx->pc = 0x40A558u;
    SET_GPR_U32(ctx, 31, 0x40A560u);
    ctx->pc = 0x40A55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A558u;
    // 0x40a55c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323A18u, 0x40A558u, 0x40A560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A560u;
label_40a560:
    // 0x40a560: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40A560u;
    SET_GPR_U32(ctx, 31, 0x40A568u);
    ctx->pc = 0x40A564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A560u;
    // 0x40a564: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40A560u, 0x40A568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A568u;
label_40a568:
    // 0x40a568: 0x8e0447a0  lw          $a0, 0x47A0($s0)
    ctx->pc = 0x40a568u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18336)));
    // 0x40a56c: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40A56Cu;
    SET_GPR_U32(ctx, 31, 0x40A574u);
    ctx->pc = 0x40A570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A56Cu;
    // 0x40a570: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40A56Cu, 0x40A574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A574u;
label_40a574:
    // 0x40a574: 0x8e0447a0  lw          $a0, 0x47A0($s0)
    ctx->pc = 0x40a574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18336)));
    // 0x40a578: 0xc0c8faa  jal         func_323EA8
    ctx->pc = 0x40A578u;
    SET_GPR_U32(ctx, 31, 0x40A580u);
    ctx->pc = 0x40A57Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A578u;
    // 0x40a57c: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323EA8u, 0x40A578u, 0x40A580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A580u;
label_40a580:
    // 0x40a580: 0x8e0447a0  lw          $a0, 0x47A0($s0)
    ctx->pc = 0x40a580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 18336)));
    // 0x40a584: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40A584u;
    SET_GPR_U32(ctx, 31, 0x40A58Cu);
    ctx->pc = 0x40A588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40A584u;
    // 0x40a588: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40A584u, 0x40A58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40A58Cu;
label_40a58c:
    // 0x40a58c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x40a58cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40a590: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x40a590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40a594: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x40a594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40a598: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x40a598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40a59c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40a59cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40a5a0: 0x3e00008  jr          $ra
    ctx->pc = 0x40A5A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40A5A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40A5A0u;
        // 0x40a5a4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40A5A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40A5A8u;
    // 0x40a5a8: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x40a5a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x40a5ac: 0x0  nop
    ctx->pc = 0x40a5acu;
    // NOP
    ctx->pc = 0x40a5b0u;
}
