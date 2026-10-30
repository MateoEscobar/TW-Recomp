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

// Function: sub_0042C718
// Address: 0x42c718 - 0x42c7b0
void sub_0042C718_0x42c718(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C718_0x42c718");
#endif

    switch (ctx->pc) {
        case 0x42c730u: goto label_42c730;
        case 0x42c748u: goto label_42c748;
        default: break;
    }

    ctx->pc = 0x42c718u;

    // 0x42c718: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42c718u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x42c71c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42c71cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x42c720: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x42c720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x42c724: 0xe7ac0010  swc1        $f12, 0x10($sp)
    ctx->pc = 0x42c724u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x42c728: 0xc10b196  jal         func_42C658
    ctx->pc = 0x42C728u;
    SET_GPR_U32(ctx, 31, 0x42C730u);
    ctx->pc = 0x42C72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C728u;
    // 0x42c72c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C658u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C658u, 0x42C728u, 0x42C730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C730u;
label_42c730:
    // 0x42c730: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x42c730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42c734: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x42c734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x42c738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C738u;
    {
        const bool branch_taken_0x42c738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C738u;
        // 0x42c73c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c738) {
            ctx->pc = 0x42C748u;
            goto label_42c748;
        }
    }
    ctx->pc = 0x42C740u;
    // 0x42c740: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42C740u;
    {
        const bool branch_taken_0x42c740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C740u;
        // 0x42c744: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c740) {
            ctx->pc = 0x42C750u;
            goto label_42c750;
        }
    }
    ctx->pc = 0x42C748u;
label_42c748:
    // 0x42c748: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x42C748u;
    {
        const bool branch_taken_0x42c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C748u;
        // 0x42c74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c748) {
            ctx->pc = 0x42C7A4u;
            goto label_42c7a4;
        }
    }
    ctx->pc = 0x42C750u;
label_42c750:
    // 0x42c750: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x42C750u;
    {
        const bool branch_taken_0x42c750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C750u;
        // 0x42c754: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c750) {
            ctx->pc = 0x42C7A4u;
            goto label_42c7a4;
        }
    }
    ctx->pc = 0x42C758u;
    // 0x42c758: 0x38620004  xori        $v0, $v1, 0x4
    ctx->pc = 0x42c758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
    // 0x42c75c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C75Cu;
    {
        const bool branch_taken_0x42c75c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C75Cu;
        // 0x42c760: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c75c) {
            ctx->pc = 0x42C774u;
            goto label_42c774;
        }
    }
    ctx->pc = 0x42C764u;
    // 0x42c764: 0x480fff8  bltz        $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x42C764u;
    {
        const bool branch_taken_0x42c764 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x42C768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C764u;
        // 0x42c768: 0x28820020  slti        $v0, $a0, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c764) {
            ctx->pc = 0x42C748u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42c748;
        }
    }
    ctx->pc = 0x42C76Cu;
    // 0x42c76c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C76Cu;
    {
        const bool branch_taken_0x42c76c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c76c) {
            ctx->pc = 0x42C770u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C76Cu;
            // 0x42c770: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C780u;
            goto label_42c780;
        }
    }
    ctx->pc = 0x42C774u;
label_42c774:
    // 0x42c774: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x42c774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x42c778: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x42C778u;
    {
        const bool branch_taken_0x42c778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C77Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C778u;
        // 0x42c77c: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c778) {
            ctx->pc = 0x42C7A4u;
            goto label_42c7a4;
        }
    }
    ctx->pc = 0x42C780u;
label_42c780:
    // 0x42c780: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C780u;
    {
        const bool branch_taken_0x42c780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c780) {
            ctx->pc = 0x42C784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C780u;
            // 0x42c784: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C798u;
            goto label_42c798;
        }
    }
    ctx->pc = 0x42C788u;
    // 0x42c788: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x42c788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x42c78c: 0x2482ffe2  addiu       $v0, $a0, -0x1E
    ctx->pc = 0x42c78cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967266));
    // 0x42c790: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42C790u;
    {
        const bool branch_taken_0x42c790 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C790u;
        // 0x42c794: 0x431004  sllv        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c790) {
            ctx->pc = 0x42C7A4u;
            goto label_42c7a4;
        }
    }
    ctx->pc = 0x42C798u;
label_42c798:
    // 0x42c798: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x42c798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x42c79c: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x42c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x42c7a0: 0x431006  srlv        $v0, $v1, $v0
    ctx->pc = 0x42c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
label_42c7a4:
    // 0x42c7a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42c7a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42c7a8: 0x3e00008  jr          $ra
    ctx->pc = 0x42C7A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C7A8u;
        // 0x42c7ac: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C7A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C7B0u;
}
