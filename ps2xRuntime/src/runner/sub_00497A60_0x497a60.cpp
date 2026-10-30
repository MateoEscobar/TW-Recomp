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

// Function: sub_00497A60
// Address: 0x497a60 - 0x497c58
void sub_00497A60_0x497a60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00497A60_0x497a60");
#endif

    switch (ctx->pc) {
        case 0x497a90u: goto label_497a90;
        case 0x497ab0u: goto label_497ab0;
        case 0x497b00u: goto label_497b00;
        case 0x497b90u: goto label_497b90;
        case 0x497bd0u: goto label_497bd0;
        case 0x497c08u: goto label_497c08;
        default: break;
    }

    ctx->pc = 0x497a60u;

    // 0x497a60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x497a60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497a64: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x497a64u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x497a68: 0xa38386cc  sb          $v1, -0x7934($gp)
    ctx->pc = 0x497a68u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936268), (uint8_t)GPR_U32(ctx, 3));
    // 0x497a6c: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x497a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x497a70: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x497a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x497a74: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x497a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x497a78: 0x8c47002c  lw          $a3, 0x2C($v0)
    ctx->pc = 0x497a78u;
    SET_GPR_S32(ctx, 7, (int32_t)FAST_READ32(0x71007Cu));
    // 0x497a7c: 0x8c460020  lw          $a2, 0x20($v0)
    ctx->pc = 0x497a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x710070u));
    // 0x497a80: 0x8c440018  lw          $a0, 0x18($v0)
    ctx->pc = 0x497a80u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x710068u));
    // 0x497a84: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x497a84u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x497a88: 0xc121848  jal         func_486120
    ctx->pc = 0x497A88u;
    SET_GPR_U32(ctx, 31, 0x497A90u);
    ctx->pc = 0x497A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x497A88u;
    // 0x497a8c: 0x8c45001c  lw          $a1, 0x1C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x497A88u, 0x497A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x497A90u;
label_497a90:
    // 0x497a90: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x497a90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497a94: 0xa38086cc  sb          $zero, -0x7934($gp)
    ctx->pc = 0x497a94u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936268), (uint8_t)GPR_U32(ctx, 0));
    // 0x497a98: 0x24020085  addiu       $v0, $zero, 0x85
    ctx->pc = 0x497a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 133));
    // 0x497a9c: 0x3c070071  lui         $a3, 0x71
    ctx->pc = 0x497a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)113 << 16));
    // 0x497aa0: 0xa0c20020  sb          $v0, 0x20($a2)
    ctx->pc = 0x497aa0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x497aa4: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x497aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x497aa8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497AA8u;
    {
        const bool branch_taken_0x497aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AA8u;
        // 0x497aac: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497aa8) {
            ctx->pc = 0x497ACCu;
            goto label_497acc;
        }
    }
    ctx->pc = 0x497AB0u;
label_497ab0:
    // 0x497ab0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497ab4: 0x0  nop
    ctx->pc = 0x497ab4u;
    // NOP
    // 0x497ab8: 0x0  nop
    ctx->pc = 0x497ab8u;
    // NOP
    // 0x497abc: 0x0  nop
    ctx->pc = 0x497abcu;
    // NOP
    // 0x497ac0: 0x0  nop
    ctx->pc = 0x497ac0u;
    // NOP
    // 0x497ac4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497AC4u;
    {
        const bool branch_taken_0x497ac4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AC4u;
        // 0x497ac8: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ac4) {
            ctx->pc = 0x497AB0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497ab0;
        }
    }
    ctx->pc = 0x497ACCu;
label_497acc:
    // 0x497acc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497ad0: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x497ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x497ad4: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x497ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x497ad8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x497ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x497adc: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x497adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x497ae0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x497AE0u;
    {
        const bool branch_taken_0x497ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AE0u;
        // 0x497ae4: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ae0) {
            ctx->pc = 0x497AF0u;
            goto label_497af0;
        }
    }
    ctx->pc = 0x497AE8u;
    // 0x497ae8: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x497ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x497aec: 0xacc2000c  sw          $v0, 0xC($a2)
    ctx->pc = 0x497aecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 2));
label_497af0:
    // 0x497af0: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x497af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x497af4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x497af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497af8: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497AF8u;
    {
        const bool branch_taken_0x497af8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x497AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497AF8u;
        // 0x497afc: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497af8) {
            ctx->pc = 0x497B1Cu;
            goto label_497b1c;
        }
    }
    ctx->pc = 0x497B00u;
label_497b00:
    // 0x497b00: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497b00u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497b04: 0x0  nop
    ctx->pc = 0x497b04u;
    // NOP
    // 0x497b08: 0x0  nop
    ctx->pc = 0x497b08u;
    // NOP
    // 0x497b0c: 0x0  nop
    ctx->pc = 0x497b0cu;
    // NOP
    // 0x497b10: 0x0  nop
    ctx->pc = 0x497b10u;
    // NOP
    // 0x497b14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497B14u;
    {
        const bool branch_taken_0x497b14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B14u;
        // 0x497b18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b14) {
            ctx->pc = 0x497B00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497b00;
        }
    }
    ctx->pc = 0x497B1Cu;
label_497b1c:
    // 0x497b1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x497b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497b20: 0x621004  sllv        $v0, $v0, $v1
    ctx->pc = 0x497b20u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
    // 0x497b24: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x497b24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x497b28: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x497b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x497b2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x497B2Cu;
    {
        const bool branch_taken_0x497b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B2Cu;
        // 0x497b30: 0x821023  subu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b2c) {
            ctx->pc = 0x497B3Cu;
            goto label_497b3c;
        }
    }
    ctx->pc = 0x497B34u;
    // 0x497b34: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x497b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x497b38: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x497b38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_497b3c:
    // 0x497b3c: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x497b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x497b40: 0xc22821  addu        $a1, $a2, $v0
    ctx->pc = 0x497b40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x497b44: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x497b44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x497b48: 0xdce3f620  ld          $v1, -0x9E0($a3)
    ctx->pc = 0x497b48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 4294964768)));
    // 0x497b4c: 0x31a7b  dsra        $v1, $v1, 9
    ctx->pc = 0x497b4cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> 9);
    // 0x497b50: 0x3063003f  andi        $v1, $v1, 0x3F
    ctx->pc = 0x497b50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)63);
    // 0x497b54: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x497b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x497b58: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x497b58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x497b5c: 0x31b80  sll         $v1, $v1, 14
    ctx->pc = 0x497b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 14));
    // 0x497b60: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x497b60u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x497b64: 0xdce2f620  ld          $v0, -0x9E0($a3)
    ctx->pc = 0x497b64u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 4294964768)));
    // 0x497b68: 0x213fb  dsra        $v0, $v0, 15
    ctx->pc = 0x497b68u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> 15);
    // 0x497b6c: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x497b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x497b70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x497b70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x497b74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x497b74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x497b78: 0x21500  sll         $v0, $v0, 20
    ctx->pc = 0x497b78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x497b7c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x497b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x497b80: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x497b80u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x497b84: 0x8cc2000c  lw          $v0, 0xC($a2)
    ctx->pc = 0x497b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x497b88: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497B88u;
    {
        const bool branch_taken_0x497b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497B88u;
        // 0x497b8c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497b88) {
            ctx->pc = 0x497BACu;
            goto label_497bac;
        }
    }
    ctx->pc = 0x497B90u;
label_497b90:
    // 0x497b90: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497b94: 0x0  nop
    ctx->pc = 0x497b94u;
    // NOP
    // 0x497b98: 0x0  nop
    ctx->pc = 0x497b98u;
    // NOP
    // 0x497b9c: 0x0  nop
    ctx->pc = 0x497b9cu;
    // NOP
    // 0x497ba0: 0x0  nop
    ctx->pc = 0x497ba0u;
    // NOP
    // 0x497ba4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497BA4u;
    {
        const bool branch_taken_0x497ba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BA4u;
        // 0x497ba8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497ba4) {
            ctx->pc = 0x497B90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497b90;
        }
    }
    ctx->pc = 0x497BACu;
label_497bac:
    // 0x497bac: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x497bacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x497bb0: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x497bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x497bb4: 0x21680  sll         $v0, $v0, 26
    ctx->pc = 0x497bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 26));
    // 0x497bb8: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x497bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x497bbc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x497bbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x497bc0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x497bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x497bc4: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x497bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x497bc8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497BC8u;
    {
        const bool branch_taken_0x497bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BC8u;
        // 0x497bcc: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497bc8) {
            ctx->pc = 0x497BECu;
            goto label_497bec;
        }
    }
    ctx->pc = 0x497BD0u;
label_497bd0:
    // 0x497bd0: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497bd4: 0x0  nop
    ctx->pc = 0x497bd4u;
    // NOP
    // 0x497bd8: 0x0  nop
    ctx->pc = 0x497bd8u;
    // NOP
    // 0x497bdc: 0x0  nop
    ctx->pc = 0x497bdcu;
    // NOP
    // 0x497be0: 0x0  nop
    ctx->pc = 0x497be0u;
    // NOP
    // 0x497be4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497BE4u;
    {
        const bool branch_taken_0x497be4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497BE4u;
        // 0x497be8: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497be4) {
            ctx->pc = 0x497BD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497bd0;
        }
    }
    ctx->pc = 0x497BECu;
label_497bec:
    // 0x497bec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x497becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x497bf0: 0x41f80  sll         $v1, $a0, 30
    ctx->pc = 0x497bf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 30));
    // 0x497bf4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x497bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x497bf8: 0xaca20008  sw          $v0, 0x8($a1)
    ctx->pc = 0x497bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
    // 0x497bfc: 0x8cc20010  lw          $v0, 0x10($a2)
    ctx->pc = 0x497bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
    // 0x497c00: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x497C00u;
    {
        const bool branch_taken_0x497c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x497C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C00u;
        // 0x497c04: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497c00) {
            ctx->pc = 0x497C24u;
            goto label_497c24;
        }
    }
    ctx->pc = 0x497C08u;
label_497c08:
    // 0x497c08: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x497c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x497c0c: 0x0  nop
    ctx->pc = 0x497c0cu;
    // NOP
    // 0x497c10: 0x0  nop
    ctx->pc = 0x497c10u;
    // NOP
    // 0x497c14: 0x0  nop
    ctx->pc = 0x497c14u;
    // NOP
    // 0x497c18: 0x0  nop
    ctx->pc = 0x497c18u;
    // NOP
    // 0x497c1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x497C1Cu;
    {
        const bool branch_taken_0x497c1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x497C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C1Cu;
        // 0x497c20: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x497c1c) {
            ctx->pc = 0x497C08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_497c08;
        }
    }
    ctx->pc = 0x497C24u;
label_497c24:
    // 0x497c24: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x497c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x497c28: 0x3082000f  andi        $v0, $a0, 0xF
    ctx->pc = 0x497c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)15);
    // 0x497c2c: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x497c2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
    // 0x497c30: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x497c30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x497c34: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x497c34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x497c38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x497c38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x497c3c: 0xa0a40017  sb          $a0, 0x17($a1)
    ctx->pc = 0x497c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 23), (uint8_t)GPR_U32(ctx, 4));
    // 0x497c40: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x497c40u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x497c44: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x497c44u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x497c48: 0xa0a00016  sb          $zero, 0x16($a1)
    ctx->pc = 0x497c48u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 22), (uint8_t)GPR_U32(ctx, 0));
    // 0x497c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x497C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x497C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x497C4Cu;
        // 0x497c50: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x497C4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x497C54u;
    // 0x497c54: 0x0  nop
    ctx->pc = 0x497c54u;
    // NOP
    ctx->pc = 0x497c58u;
}
