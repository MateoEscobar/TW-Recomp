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

// Function: sub_00151A98
// Address: 0x151a98 - 0x151bc0
void sub_00151A98_0x151a98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151A98_0x151a98");
#endif

    switch (ctx->pc) {
        case 0x151af0u: goto label_151af0;
        default: break;
    }

    ctx->pc = 0x151a98u;

    // 0x151a98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x151a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x151a9c: 0x2ca20020  sltiu       $v0, $a1, 0x20
    ctx->pc = 0x151a9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x151aa0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x151AA0u;
    {
        const bool branch_taken_0x151aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x151AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AA0u;
        // 0x151aa4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151aa0) {
            ctx->pc = 0x151AB0u;
            goto label_151ab0;
        }
    }
    ctx->pc = 0x151AA8u;
    // 0x151aa8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x151AA8u;
    {
        const bool branch_taken_0x151aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AA8u;
        // 0x151aac: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151aa8) {
            ctx->pc = 0x151AFCu;
            goto label_151afc;
        }
    }
    ctx->pc = 0x151AB0u;
label_151ab0:
    // 0x151ab0: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x151ab0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
    // 0x151ab4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x151AB4u;
    {
        const bool branch_taken_0x151ab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AB4u;
        // 0x151ab8: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151ab4) {
            ctx->pc = 0x151AF8u;
            goto label_151af8;
        }
    }
    ctx->pc = 0x151ABCu;
    // 0x151abc: 0x34a51fc0  ori         $a1, $a1, 0x1FC0
    ctx->pc = 0x151abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8128);
    // 0x151ac0: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x151ac0u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x151ac4: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x151AC4u;
    {
        const bool branch_taken_0x151ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151ac4) {
            ctx->pc = 0x151AC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151AC4u;
            // 0x151ac8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x151ACCu;
            goto label_151acc;
        }
    }
    ctx->pc = 0x151ACCu;
label_151acc:
    // 0x151acc: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x151accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x151ad0: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x151ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x151ad4: 0x1810  mfhi        $v1
    ctx->pc = 0x151ad4u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x151ad8: 0x2012  mflo        $a0
    ctx->pc = 0x151ad8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x151adc: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x151adcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x151ae0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x151ae0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x151ae4: 0x34840400  ori         $a0, $a0, 0x400
    ctx->pc = 0x151ae4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1024);
    // 0x151ae8: 0xc054630  jal         func_1518C0
    ctx->pc = 0x151AE8u;
    SET_GPR_U32(ctx, 31, 0x151AF0u);
    ctx->pc = 0x151AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151AE8u;
    // 0x151aec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1518C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1518C0u, 0x151AE8u, 0x151AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151AF0u;
label_151af0:
    // 0x151af0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x151AF0u;
    {
        const bool branch_taken_0x151af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151AF0u;
        // 0x151af4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151af0) {
            ctx->pc = 0x151AFCu;
            goto label_151afc;
        }
    }
    ctx->pc = 0x151AF8u;
label_151af8:
    // 0x151af8: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x151af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_151afc:
    // 0x151afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x151b00: 0x3e00008  jr          $ra
    ctx->pc = 0x151B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x151B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151B00u;
        // 0x151b04: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151B08u;
    // 0x151b08: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x151b08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x151b0c: 0x0  nop
    ctx->pc = 0x151b0cu;
    // NOP
    // 0x151b10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151b10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151b14: 0x0  nop
    ctx->pc = 0x151b14u;
    // NOP
    // 0x151b18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151b18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151b1c: 0x0  nop
    ctx->pc = 0x151b1cu;
    // NOP
    // 0x151b20: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x151b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151b24: 0x0  nop
    ctx->pc = 0x151b24u;
    // NOP
    // 0x151b28: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151b28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151b2c: 0x0  nop
    ctx->pc = 0x151b2cu;
    // NOP
    // 0x151b30: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151b34: 0x0  nop
    ctx->pc = 0x151b34u;
    // NOP
    // 0x151b38: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151b3c: 0x0  nop
    ctx->pc = 0x151b3cu;
    // NOP
    // 0x151b40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151b44: 0x0  nop
    ctx->pc = 0x151b44u;
    // NOP
    // 0x151b48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151b4c: 0x0  nop
    ctx->pc = 0x151b4cu;
    // NOP
    // 0x151b50: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151b54: 0x0  nop
    ctx->pc = 0x151b54u;
    // NOP
    // 0x151b58: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x151b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151b5c: 0x0  nop
    ctx->pc = 0x151b5cu;
    // NOP
    // 0x151b60: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x151b60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x151b64: 0x0  nop
    ctx->pc = 0x151b64u;
    // NOP
    // 0x151b68: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151b6c: 0x0  nop
    ctx->pc = 0x151b6cu;
    // NOP
    // 0x151b70: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151b74: 0x0  nop
    ctx->pc = 0x151b74u;
    // NOP
    // 0x151b78: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151b7c: 0x0  nop
    ctx->pc = 0x151b7cu;
    // NOP
    // 0x151b80: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x151b80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x151b84: 0x0  nop
    ctx->pc = 0x151b84u;
    // NOP
    // 0x151b88: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x151b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x151b8c: 0x0  nop
    ctx->pc = 0x151b8cu;
    // NOP
    // 0x151b90: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x151b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x151b94: 0x0  nop
    ctx->pc = 0x151b94u;
    // NOP
    // 0x151b98: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151b9c: 0x0  nop
    ctx->pc = 0x151b9cu;
    // NOP
    // 0x151ba0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x151ba0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x151ba4: 0x0  nop
    ctx->pc = 0x151ba4u;
    // NOP
    // 0x151ba8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x151ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x151bac: 0x0  nop
    ctx->pc = 0x151bacu;
    // NOP
    // 0x151bb0: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x151bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x151bb4: 0x0  nop
    ctx->pc = 0x151bb4u;
    // NOP
    // 0x151bb8: 0x212c2  srl         $v0, $v0, 11
    ctx->pc = 0x151bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 11));
    // 0x151bbc: 0x0  nop
    ctx->pc = 0x151bbcu;
    // NOP
    ctx->pc = 0x151bc0u;
}
