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

// Function: sub_0014AA78
// Address: 0x14aa78 - 0x14ac50
void sub_0014AA78_0x14aa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AA78_0x14aa78");
#endif

    switch (ctx->pc) {
        case 0x14aab0u: goto label_14aab0;
        case 0x14aabcu: goto label_14aabc;
        case 0x14aaf8u: goto label_14aaf8;
        case 0x14ab28u: goto label_14ab28;
        case 0x14ab34u: goto label_14ab34;
        case 0x14abe8u: goto label_14abe8;
        case 0x14abf4u: goto label_14abf4;
        case 0x14ac10u: goto label_14ac10;
        case 0x14ac1cu: goto label_14ac1c;
        default: break;
    }

    ctx->pc = 0x14aa78u;

    // 0x14aa78: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x14aa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x14aa7c: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x14aa7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x14aa80: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x14aa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x14aa84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x14aa84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa88: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x14aa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x14aa8c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x14aa8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa90: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x14aa90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x14aa94: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x14aa94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aa98: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x14aa98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x14aa9c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x14aa9cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaa0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x14aaa0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x14aaa4: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x14aaa4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x14aaa8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x14aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x14aaac: 0x0  nop
    ctx->pc = 0x14aaacu;
    // NOP
label_14aab0:
    // 0x14aab0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x14aab0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aab4: 0xc111532  jal         func_4454C8
    ctx->pc = 0x14AAB4u;
    SET_GPR_U32(ctx, 31, 0x14AABCu);
    ctx->pc = 0x14AAB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAB4u;
    // 0x14aab8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4454C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4454C8u, 0x14AAB4u, 0x14AABCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AABCu;
label_14aabc:
    // 0x14aabc: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x14aabcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x14aac0: 0x282182a  slt         $v1, $s4, $v0
    ctx->pc = 0x14aac0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x14aac4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14AAC4u;
    {
        const bool branch_taken_0x14aac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAC4u;
        // 0x14aac8: 0x83800a  movz        $s0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aac4) {
            ctx->pc = 0x14AAD8u;
            goto label_14aad8;
        }
    }
    ctx->pc = 0x14AACCu;
    // 0x14aacc: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14aaccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14aad0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
    ctx->pc = 0x14AAD0u;
    {
        const bool branch_taken_0x14aad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x14aad0) {
            ctx->pc = 0x14AAD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AAD0u;
            // 0x14aad4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14AAB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_14aab0;
        }
    }
    ctx->pc = 0x14AAD8u;
label_14aad8:
    // 0x14aad8: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x14aad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x14aadc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14AADCu;
    {
        const bool branch_taken_0x14aadc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x14AAE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AADCu;
        // 0x14aae0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aadc) {
            ctx->pc = 0x14AAECu;
            goto label_14aaec;
        }
    }
    ctx->pc = 0x14AAE4u;
    // 0x14aae4: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x14AAE4u;
    {
        const bool branch_taken_0x14aae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAE4u;
        // 0x14aae8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aae4) {
            ctx->pc = 0x14AC20u;
            goto label_14ac20;
        }
    }
    ctx->pc = 0x14AAECu;
label_14aaec:
    // 0x14aaec: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x14aaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14aaf0: 0xc111590  jal         func_445640
    ctx->pc = 0x14AAF0u;
    SET_GPR_U32(ctx, 31, 0x14AAF8u);
    ctx->pc = 0x14AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AAF0u;
    // 0x14aaf4: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x445640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x445640u, 0x14AAF0u, 0x14AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AAF8u;
label_14aaf8:
    // 0x14aaf8: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x14aaf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14aafc: 0x4610048  bgez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x14AAFCu;
    {
        const bool branch_taken_0x14aafc = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x14AB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AAFCu;
        // 0x14ab00: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aafc) {
            ctx->pc = 0x14AC20u;
            goto label_14ac20;
        }
    }
    ctx->pc = 0x14AB04u;
    // 0x14ab04: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x14ab04u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
    // 0x14ab08: 0x3c110055  lui         $s1, 0x55
    ctx->pc = 0x14ab08u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)85 << 16));
    // 0x14ab0c: 0x8e0269ec  lw          $v0, 0x69EC($s0)
    ctx->pc = 0x14ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5169ECu));
    // 0x14ab10: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14ab10u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14ab14: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14ab14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14ab18: 0x24c6ae20  addiu       $a2, $a2, -0x51E0
    ctx->pc = 0x14ab18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946336));
    // 0x14ab1c: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x14ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x14ab20: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14AB20u;
    SET_GPR_U32(ctx, 31, 0x14AB28u);
    ctx->pc = 0x14AB24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB20u;
    // 0x14ab24: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14AB20u, 0x14AB28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB28u;
label_14ab28:
    // 0x14ab28: 0x8e0369ec  lw          $v1, 0x69EC($s0)
    ctx->pc = 0x14ab28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 27116)));
    // 0x14ab2c: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14AB2Cu;
    SET_GPR_U32(ctx, 31, 0x14AB34u);
    ctx->pc = 0x14AB30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AB2Cu;
    // 0x14ab30: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14AB2Cu, 0x14AB34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AB34u;
label_14ab34:
    // 0x14ab34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14ab38: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x14ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x14ab3c: 0x2c830007  sltiu       $v1, $a0, 0x7
    ctx->pc = 0x14ab3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x14ab40: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x14AB40u;
    {
        const bool branch_taken_0x14ab40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB40u;
        // 0x14ab44: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab40) {
            ctx->pc = 0x14ABC4u;
            goto label_14abc4;
        }
    }
    ctx->pc = 0x14AB48u;
    // 0x14ab48: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x14ab48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x14ab4c: 0x2442afc0  addiu       $v0, $v0, -0x5040
    ctx->pc = 0x14ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946752));
    // 0x14ab50: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x14ab50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x14ab54: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x14ab54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x14ab58: 0x800008  jr          $a0
    ctx->pc = 0x14AB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14AB60u: goto label_14ab60;
            case 0x14AB74u: goto label_14ab74;
            case 0x14AB88u: goto label_14ab88;
            case 0x14AB9Cu: goto label_14ab9c;
            case 0x14ABB0u: goto label_14abb0;
            case 0x14ABC4u: goto label_14abc4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AB58u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14AB60u;
label_14ab60:
    // 0x14ab60: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14ab64: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14ab68: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14ab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14ab6c: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14AB6Cu;
    {
        const bool branch_taken_0x14ab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB6Cu;
        // 0x14ab70: 0x24c6aa68  addiu       $a2, $a2, -0x5598 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab6c) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14AB74u;
label_14ab74:
    // 0x14ab74: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14ab78: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14ab78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14ab7c: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14ab7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14ab80: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x14AB80u;
    {
        const bool branch_taken_0x14ab80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB80u;
        // 0x14ab84: 0x24c6ae58  addiu       $a2, $a2, -0x51A8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab80) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14AB88u;
label_14ab88:
    // 0x14ab88: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14ab88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14ab8c: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14ab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14ab90: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14ab90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14ab94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x14AB94u;
    {
        const bool branch_taken_0x14ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14AB98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AB94u;
        // 0x14ab98: 0x24c6ad98  addiu       $a2, $a2, -0x5268 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ab94) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14AB9Cu;
label_14ab9c:
    // 0x14ab9c: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14ab9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14aba0: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14aba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14aba4: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14aba8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x14ABA8u;
    {
        const bool branch_taken_0x14aba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABA8u;
        // 0x14abac: 0x24c6aeb0  addiu       $a2, $a2, -0x5150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946480));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14aba8) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14ABB0u;
label_14abb0:
    // 0x14abb0: 0x8e4269ec  lw          $v0, 0x69EC($s2)
    ctx->pc = 0x14abb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14abb4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14abb4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14abb8: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14abb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14abbc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14ABBCu;
    {
        const bool branch_taken_0x14abbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABBCu;
        // 0x14abc0: 0x24c6af00  addiu       $a2, $a2, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946560));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abbc) {
            ctx->pc = 0x14ABE0u;
            goto label_14abe0;
        }
    }
    ctx->pc = 0x14ABC4u;
label_14abc4:
    // 0x14abc4: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x14abc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x14abc8: 0x2842fff7  slti        $v0, $v0, -0x9
    ctx->pc = 0x14abc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967287) ? 1 : 0);
    // 0x14abcc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x14ABCCu;
    {
        const bool branch_taken_0x14abcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABCCu;
        // 0x14abd0: 0x8e4269ec  lw          $v0, 0x69EC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abcc) {
            ctx->pc = 0x14ABFCu;
            goto label_14abfc;
        }
    }
    ctx->pc = 0x14ABD4u;
    // 0x14abd4: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14abd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14abd8: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14abd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14abdc: 0x24c6acb8  addiu       $a2, $a2, -0x5348
    ctx->pc = 0x14abdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294945976));
label_14abe0:
    // 0x14abe0: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14ABE0u;
    SET_GPR_U32(ctx, 31, 0x14ABE8u);
    ctx->pc = 0x14ABE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABE0u;
    // 0x14abe4: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14ABE0u, 0x14ABE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABE8u;
label_14abe8:
    // 0x14abe8: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14abec: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14ABECu;
    SET_GPR_U32(ctx, 31, 0x14ABF4u);
    ctx->pc = 0x14ABF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14ABECu;
    // 0x14abf0: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14ABECu, 0x14ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14ABF4u;
label_14abf4:
    // 0x14abf4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x14ABF4u;
    {
        const bool branch_taken_0x14abf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14ABF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14ABF4u;
        // 0x14abf8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14abf4) {
            ctx->pc = 0x14AC20u;
            goto label_14ac20;
        }
    }
    ctx->pc = 0x14ABFCu;
label_14abfc:
    // 0x14abfc: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x14abfcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
    // 0x14ac00: 0x2625a870  addiu       $a1, $s1, -0x5790
    ctx->pc = 0x14ac00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294944880));
    // 0x14ac04: 0x24c6acf8  addiu       $a2, $a2, -0x5308
    ctx->pc = 0x14ac04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294946040));
    // 0x14ac08: 0xc10c6b0  jal         func_431AC0
    ctx->pc = 0x14AC08u;
    SET_GPR_U32(ctx, 31, 0x14AC10u);
    ctx->pc = 0x14AC0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC08u;
    // 0x14ac0c: 0x8c44000c  lw          $a0, 0xC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431AC0u, 0x14AC08u, 0x14AC10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC10u;
label_14ac10:
    // 0x14ac10: 0x8e4369ec  lw          $v1, 0x69EC($s2)
    ctx->pc = 0x14ac10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 27116)));
    // 0x14ac14: 0xc10c57e  jal         func_4315F8
    ctx->pc = 0x14AC14u;
    SET_GPR_U32(ctx, 31, 0x14AC1Cu);
    ctx->pc = 0x14AC18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AC14u;
    // 0x14ac18: 0x8c64000c  lw          $a0, 0xC($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4315F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4315F8u, 0x14AC14u, 0x14AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14AC1Cu;
label_14ac1c:
    // 0x14ac1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x14ac1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14ac20:
    // 0x14ac20: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x14ac20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x14ac24: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x14ac24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x14ac28: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x14ac28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x14ac2c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x14ac2cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14ac30: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x14ac30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x14ac34: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x14ac34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x14ac38: 0x3e00008  jr          $ra
    ctx->pc = 0x14AC38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14AC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AC38u;
        // 0x14ac3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14AC38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14AC40u;
    // 0x14ac40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x14ac40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x14ac44: 0x0  nop
    ctx->pc = 0x14ac44u;
    // NOP
    // 0x14ac48: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x14ac48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14ac4c: 0x0  nop
    ctx->pc = 0x14ac4cu;
    // NOP
    ctx->pc = 0x14ac50u;
}
