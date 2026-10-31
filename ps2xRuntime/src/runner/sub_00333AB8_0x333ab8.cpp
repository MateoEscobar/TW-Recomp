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

// Function: sub_00333AB8
// Address: 0x333ab8 - 0x333c08
void sub_00333AB8_0x333ab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00333AB8_0x333ab8");
#endif

    switch (ctx->pc) {
        case 0x333b18u: goto label_333b18;
        case 0x333b3cu: goto label_333b3c;
        case 0x333b5cu: goto label_333b5c;
        case 0x333bccu: goto label_333bcc;
        case 0x333be8u: goto label_333be8;
        default: break;
    }

    ctx->pc = 0x333ab8u;

    // 0x333ab8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x333ab8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x333abc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x333abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x333ac0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x333ac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x333ac4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x333ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x333ac8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x333ac8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333acc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x333accu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x333ad0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x333ad0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333ad4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x333ad4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x333ad8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x333ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x333adc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x333adcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333ae0: 0x14820014  bne         $a0, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x333AE0u;
    {
        const bool branch_taken_0x333ae0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x333AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AE0u;
        // 0x333ae4: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333ae0) {
            ctx->pc = 0x333B34u;
            goto label_333b34;
        }
    }
    ctx->pc = 0x333AE8u;
    // 0x333ae8: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x333ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333aec: 0x84a30004  lh          $v1, 0x4($a1)
    ctx->pc = 0x333aecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x333af0: 0x10640006  beq         $v1, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x333AF0u;
    {
        const bool branch_taken_0x333af0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x333AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333AF0u;
        // 0x333af4: 0x31980  sll         $v1, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333af0) {
            ctx->pc = 0x333B0Cu;
            goto label_333b0c;
        }
    }
    ctx->pc = 0x333AF8u;
    // 0x333af8: 0x8e020048  lw          $v0, 0x48($s0)
    ctx->pc = 0x333af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x333afc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x333afcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x333b00: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x333b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x333b04: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x333B04u;
    {
        const bool branch_taken_0x333b04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x333b04) {
            ctx->pc = 0x333B34u;
            goto label_333b34;
        }
    }
    ctx->pc = 0x333B0Cu;
label_333b0c:
    // 0x333b0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b10: 0xc0cc862  jal         func_332188
    ctx->pc = 0x333B10u;
    SET_GPR_U32(ctx, 31, 0x333B18u);
    ctx->pc = 0x333B14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B10u;
    // 0x333b14: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332188u, 0x333B10u, 0x333B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B18u;
label_333b18:
    // 0x333b18: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333b1c: 0x24638000  addiu       $v1, $v1, -0x8000
    ctx->pc = 0x333b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294934528));
    // 0x333b20: 0xdc647ff0  ld          $a0, 0x7FF0($v1)
    ctx->pc = 0x333b20u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 32752)));
    // 0x333b24: 0xfc440000  sd          $a0, 0x0($v0)
    ctx->pc = 0x333b24u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 4));
    // 0x333b28: 0xdc657ff8  ld          $a1, 0x7FF8($v1)
    ctx->pc = 0x333b28u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 32760)));
    // 0x333b2c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x333B2Cu;
    {
        const bool branch_taken_0x333b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B2Cu;
        // 0x333b30: 0xfc450008  sd          $a1, 0x8($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 8), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b2c) {
            ctx->pc = 0x333BE8u;
            goto label_333be8;
        }
    }
    ctx->pc = 0x333B34u;
label_333b34:
    // 0x333b34: 0xc0cc9e6  jal         func_332798
    ctx->pc = 0x333B34u;
    SET_GPR_U32(ctx, 31, 0x333B3Cu);
    ctx->pc = 0x333B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B34u;
    // 0x333b38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x332798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x332798u, 0x333B34u, 0x333B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B3Cu;
label_333b3c:
    // 0x333b3c: 0x8e030048  lw          $v1, 0x48($s0)
    ctx->pc = 0x333b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x333b40: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x333b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
    // 0x333b44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x333b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x333b48: 0x8c530004  lw          $s3, 0x4($v0)
    ctx->pc = 0x333b48u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x333b4c: 0x12600021  beqz        $s3, . + 4 + (0x21 << 2)
    ctx->pc = 0x333B4Cu;
    {
        const bool branch_taken_0x333b4c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x333B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333B4Cu;
        // 0x333b50: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333b4c) {
            ctx->pc = 0x333BD4u;
            goto label_333bd4;
        }
    }
    ctx->pc = 0x333B54u;
    // 0x333b54: 0xc0ca1dc  jal         func_328770
    ctx->pc = 0x333B54u;
    SET_GPR_U32(ctx, 31, 0x333B5Cu);
    ctx->pc = 0x333B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333B54u;
    // 0x333b58: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328770u, 0x333B54u, 0x333B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333B5Cu;
label_333b5c:
    // 0x333b5c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333b60: 0x24080005  addiu       $t0, $zero, 0x5
    ctx->pc = 0x333b60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x333b64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333b64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b68: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x333b68u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333b6c: 0x24a78000  addiu       $a3, $a1, -0x8000
    ctx->pc = 0x333b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934528));
    // 0x333b70: 0xdce27ff0  ld          $v0, 0x7FF0($a3)
    ctx->pc = 0x333b70u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 7), 32752)));
    // 0x333b74: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x333b74u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
    // 0x333b78: 0xdce37ff8  ld          $v1, 0x7FF8($a3)
    ctx->pc = 0x333b78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 7), 32760)));
    // 0x333b7c: 0xfca30028  sd          $v1, 0x28($a1)
    ctx->pc = 0x333b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 40), GPR_U64(ctx, 3));
    // 0x333b80: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x333b80u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x333b84: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x333b84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333b88: 0xfce20010  sd          $v0, 0x10($a3)
    ctx->pc = 0x333b88u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 16), GPR_U64(ctx, 2));
    // 0x333b8c: 0xde430008  ld          $v1, 0x8($s2)
    ctx->pc = 0x333b8cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x333b90: 0xfce30018  sd          $v1, 0x18($a3)
    ctx->pc = 0x333b90u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 24), GPR_U64(ctx, 3));
    // 0x333b94: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333b94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333b98: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x333b98u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x333b9c: 0xfca20000  sd          $v0, 0x0($a1)
    ctx->pc = 0x333b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 2));
    // 0x333ba0: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x333ba0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x333ba4: 0xfca30008  sd          $v1, 0x8($a1)
    ctx->pc = 0x333ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 8), GPR_U64(ctx, 3));
    // 0x333ba8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x333ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333bac: 0xac53fff8  sw          $s3, -0x8($v0)
    ctx->pc = 0x333bacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967288), GPR_U32(ctx, 19));
    // 0x333bb0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x333bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333bb4: 0xac68fff0  sw          $t0, -0x10($v1)
    ctx->pc = 0x333bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294967280), GPR_U32(ctx, 8));
    // 0x333bb8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x333bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x333bbc: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x333bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x333bc0: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x333bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
    // 0x333bc4: 0xc0ca2d0  jal         func_328B40
    ctx->pc = 0x333BC4u;
    SET_GPR_U32(ctx, 31, 0x333BCCu);
    ctx->pc = 0x333BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BC4u;
    // 0x333bc8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x328B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x328B40u, 0x333BC4u, 0x333BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BCCu;
label_333bcc:
    // 0x333bcc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x333BCCu;
    {
        const bool branch_taken_0x333bcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x333BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BCCu;
        // 0x333bd0: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x333bcc) {
            ctx->pc = 0x333BECu;
            goto label_333bec;
        }
    }
    ctx->pc = 0x333BD4u;
label_333bd4:
    // 0x333bd4: 0x3c060057  lui         $a2, 0x57
    ctx->pc = 0x333bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)87 << 16));
    // 0x333bd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x333bd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333bdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x333bdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x333be0: 0xc0ca174  jal         func_3285D0
    ctx->pc = 0x333BE0u;
    SET_GPR_U32(ctx, 31, 0x333BE8u);
    ctx->pc = 0x333BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x333BE0u;
    // 0x333be4: 0x24c66828  addiu       $a2, $a2, 0x6828 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3285D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3285D0u, 0x333BE0u, 0x333BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x333BE8u;
label_333be8:
    // 0x333be8: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x333be8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_333bec:
    // 0x333bec: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x333becu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x333bf0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x333bf0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x333bf4: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x333bf4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x333bf8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x333bf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x333bfc: 0x3e00008  jr          $ra
    ctx->pc = 0x333BFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x333C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x333BFCu;
        // 0x333c00: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x333BFCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x333C04u;
    // 0x333c04: 0x0  nop
    ctx->pc = 0x333c04u;
    // NOP
    ctx->pc = 0x333c08u;
}
