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

// Function: sub_004C8AB0
// Address: 0x4c8ab0 - 0x4c8c00
void sub_004C8AB0_0x4c8ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004C8AB0_0x4c8ab0");
#endif

    switch (ctx->pc) {
        case 0x4c8b08u: goto label_4c8b08;
        case 0x4c8b28u: goto label_4c8b28;
        case 0x4c8b3cu: goto label_4c8b3c;
        case 0x4c8b58u: goto label_4c8b58;
        default: break;
    }

    ctx->pc = 0x4c8ab0u;

    // 0x4c8ab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4c8ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4c8ab4: 0x3c020053  lui         $v0, 0x53
    ctx->pc = 0x4c8ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)83 << 16));
    // 0x4c8ab8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x4c8ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x4c8abc: 0x3c120053  lui         $s2, 0x53
    ctx->pc = 0x4c8abcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)83 << 16));
    // 0x4c8ac0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4c8ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4c8ac4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x4c8ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x4c8ac8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x4c8ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8acc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x4c8accu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x4c8ad0: 0x3c140053  lui         $s4, 0x53
    ctx->pc = 0x4c8ad0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)83 << 16));
    // 0x4c8ad4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x4c8ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x4c8ad8: 0x3c150053  lui         $s5, 0x53
    ctx->pc = 0x4c8ad8u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
    // 0x4c8adc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x4c8adcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x4c8ae0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x4c8ae0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8ae4: 0x8e462830  lw          $a2, 0x2830($s2)
    ctx->pc = 0x4c8ae4u;
    SET_GPR_S32(ctx, 6, (int32_t)FAST_READ32(0x532830u));
    // 0x4c8ae8: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x4c8ae8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8aec: 0x8c432824  lw          $v1, 0x2824($v0)
    ctx->pc = 0x4c8aecu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x532824u));
    // 0x4c8af0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x4c8af0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x4c8af4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x4c8af4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x4c8af8: 0x14c30019  bne         $a2, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4C8AF8u;
    {
        const bool branch_taken_0x4c8af8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 3));
        ctx->pc = 0x4C8AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8AF8u;
        // 0x4c8afc: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8af8) {
            ctx->pc = 0x4C8B60u;
            goto label_4c8b60;
        }
    }
    ctx->pc = 0x4C8B00u;
    // 0x4c8b00: 0xc132336  jal         func_4C8CD8
    ctx->pc = 0x4C8B00u;
    SET_GPR_U32(ctx, 31, 0x4C8B08u);
    ctx->pc = 0x4C8B04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8B00u;
    // 0x4c8b04: 0x62100  sll         $a0, $a2, 4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8CD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8CD8u, 0x4C8B00u, 0x4C8B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8B08u;
label_4c8b08:
    // 0x4c8b08: 0x8e462830  lw          $a2, 0x2830($s2)
    ctx->pc = 0x4c8b08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x4c8b0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x4c8b0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8b10: 0x8ea52828  lw          $a1, 0x2828($s5)
    ctx->pc = 0x4c8b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10280)));
    // 0x4c8b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4c8b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8b18: 0x610c0  sll         $v0, $a2, 3
    ctx->pc = 0x4c8b18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x4c8b1c: 0x2229821  addu        $s3, $s1, $v0
    ctx->pc = 0x4c8b1cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4c8b20: 0xc133518  jal         func_4CD460
    ctx->pc = 0x4C8B20u;
    SET_GPR_U32(ctx, 31, 0x4C8B28u);
    ctx->pc = 0x4C8B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8B20u;
    // 0x4c8b24: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C8B20u, 0x4C8B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8B28u;
label_4c8b28:
    // 0x4c8b28: 0x8e462830  lw          $a2, 0x2830($s2)
    ctx->pc = 0x4c8b28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x4c8b2c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4c8b2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4c8b30: 0x8e85282c  lw          $a1, 0x282C($s4)
    ctx->pc = 0x4c8b30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10284)));
    // 0x4c8b34: 0xc133518  jal         func_4CD460
    ctx->pc = 0x4C8B34u;
    SET_GPR_U32(ctx, 31, 0x4C8B3Cu);
    ctx->pc = 0x4C8B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8B34u;
    // 0x4c8b38: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4CD460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4CD460u, 0x4C8B34u, 0x4C8B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8B3Cu;
label_4c8b3c:
    // 0x4c8b3c: 0x8e422830  lw          $v0, 0x2830($s2)
    ctx->pc = 0x4c8b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 10288)));
    // 0x4c8b40: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x4c8b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x4c8b44: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4c8b44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4c8b48: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4C8B48u;
    {
        const bool branch_taken_0x4c8b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x4C8B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8B48u;
        // 0x4c8b4c: 0xae422830  sw          $v0, 0x2830($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 10288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4c8b48) {
            ctx->pc = 0x4C8B58u;
            goto label_4c8b58;
        }
    }
    ctx->pc = 0x4C8B50u;
    // 0x4c8b50: 0xc132364  jal         func_4C8D90
    ctx->pc = 0x4C8B50u;
    SET_GPR_U32(ctx, 31, 0x4C8B58u);
    ctx->pc = 0x4C8B54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4C8B50u;
    // 0x4c8b54: 0x8ea42828  lw          $a0, 0x2828($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10280)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C8D90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C8D90u, 0x4C8B50u, 0x4C8B58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4C8B58u;
label_4c8b58:
    // 0x4c8b58: 0xaeb12828  sw          $s1, 0x2828($s5)
    ctx->pc = 0x4c8b58u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 10280), GPR_U32(ctx, 17));
    // 0x4c8b5c: 0xae93282c  sw          $s3, 0x282C($s4)
    ctx->pc = 0x4c8b5cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 10284), GPR_U32(ctx, 19));
label_4c8b60:
    // 0x4c8b60: 0x3c070053  lui         $a3, 0x53
    ctx->pc = 0x4c8b60u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)83 << 16));
    // 0x4c8b64: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x4c8b64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x4c8b68: 0x8ce52820  lw          $a1, 0x2820($a3)
    ctx->pc = 0x4c8b68u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x532820u));
    // 0x4c8b6c: 0x2606001f  addiu       $a2, $s0, 0x1F
    ctx->pc = 0x4c8b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 31));
    // 0x4c8b70: 0x3463ffe0  ori         $v1, $v1, 0xFFE0
    ctx->pc = 0x4c8b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65504);
    // 0x4c8b74: 0x8ec42824  lw          $a0, 0x2824($s6)
    ctx->pc = 0x4c8b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10276)));
    // 0x4c8b78: 0xc38024  and         $s0, $a2, $v1
    ctx->pc = 0x4c8b78u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x4c8b7c: 0x51142  srl         $v0, $a1, 5
    ctx->pc = 0x4c8b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 5));
    // 0x4c8b80: 0x101942  srl         $v1, $s0, 5
    ctx->pc = 0x4c8b80u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 5));
    // 0x4c8b84: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4c8b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4c8b88: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x4c8b88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
    // 0x4c8b8c: 0x8e86282c  lw          $a2, 0x282C($s4)
    ctx->pc = 0x4c8b8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 10284)));
    // 0x4c8b90: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x4c8b90u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x4c8b94: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x4c8b94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x4c8b98: 0x24420021  addiu       $v0, $v0, 0x21
    ctx->pc = 0x4c8b98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 33));
    // 0x4c8b9c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x4c8b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x4c8ba0: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x4c8ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x4c8ba4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x4c8ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4c8ba8: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x4c8ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x4c8bac: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x4c8bacu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4c8bb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x4c8bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4c8bb4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x4c8bb4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4c8bb8: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x4c8bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
    // 0x4c8bbc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x4c8bbcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4c8bc0: 0xace52820  sw          $a1, 0x2820($a3)
    ctx->pc = 0x4c8bc0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 10272), GPR_U32(ctx, 5));
    // 0x4c8bc4: 0xac900000  sw          $s0, 0x0($a0)
    ctx->pc = 0x4c8bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 16));
    // 0x4c8bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4c8bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4c8bcc: 0x8ec32824  lw          $v1, 0x2824($s6)
    ctx->pc = 0x4c8bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 10276)));
    // 0x4c8bd0: 0x8ea42828  lw          $a0, 0x2828($s5)
    ctx->pc = 0x4c8bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 10280)));
    // 0x4c8bd4: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x4c8bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4c8bd8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x4c8bd8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4c8bdc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x4c8bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x4c8be0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x4c8be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x4c8be4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x4c8be4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
    // 0x4c8be8: 0xaec32824  sw          $v1, 0x2824($s6)
    ctx->pc = 0x4c8be8u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 10276), GPR_U32(ctx, 3));
    // 0x4c8bec: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x4c8becu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4c8bf0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x4c8bf0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x4c8bf4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4c8bf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4c8bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x4C8BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4C8BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4C8BF8u;
        // 0x4c8bfc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4C8BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4C8C00u;
}
