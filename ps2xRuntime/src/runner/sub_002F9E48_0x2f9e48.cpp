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

// Function: sub_002F9E48
// Address: 0x2f9e48 - 0x2f9f48
void sub_002F9E48_0x2f9e48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F9E48_0x2f9e48");
#endif

    switch (ctx->pc) {
        case 0x2f9e48u: goto label_2f9e48;
        case 0x2f9e4cu: goto label_2f9e4c;
        case 0x2f9e50u: goto label_2f9e50;
        case 0x2f9e54u: goto label_2f9e54;
        case 0x2f9e58u: goto label_2f9e58;
        case 0x2f9e5cu: goto label_2f9e5c;
        case 0x2f9e60u: goto label_2f9e60;
        case 0x2f9e64u: goto label_2f9e64;
        case 0x2f9e68u: goto label_2f9e68;
        case 0x2f9e6cu: goto label_2f9e6c;
        case 0x2f9e70u: goto label_2f9e70;
        case 0x2f9e74u: goto label_2f9e74;
        case 0x2f9e78u: goto label_2f9e78;
        case 0x2f9e7cu: goto label_2f9e7c;
        case 0x2f9e80u: goto label_2f9e80;
        case 0x2f9e84u: goto label_2f9e84;
        case 0x2f9e88u: goto label_2f9e88;
        case 0x2f9e8cu: goto label_2f9e8c;
        case 0x2f9e90u: goto label_2f9e90;
        case 0x2f9e94u: goto label_2f9e94;
        case 0x2f9e98u: goto label_2f9e98;
        case 0x2f9e9cu: goto label_2f9e9c;
        case 0x2f9ea0u: goto label_2f9ea0;
        case 0x2f9ea4u: goto label_2f9ea4;
        case 0x2f9ea8u: goto label_2f9ea8;
        case 0x2f9eacu: goto label_2f9eac;
        case 0x2f9eb0u: goto label_2f9eb0;
        case 0x2f9eb4u: goto label_2f9eb4;
        case 0x2f9eb8u: goto label_2f9eb8;
        case 0x2f9ebcu: goto label_2f9ebc;
        case 0x2f9ec0u: goto label_2f9ec0;
        case 0x2f9ec4u: goto label_2f9ec4;
        case 0x2f9ec8u: goto label_2f9ec8;
        case 0x2f9eccu: goto label_2f9ecc;
        case 0x2f9ed0u: goto label_2f9ed0;
        case 0x2f9ed4u: goto label_2f9ed4;
        case 0x2f9ed8u: goto label_2f9ed8;
        case 0x2f9edcu: goto label_2f9edc;
        case 0x2f9ee0u: goto label_2f9ee0;
        case 0x2f9ee4u: goto label_2f9ee4;
        case 0x2f9ee8u: goto label_2f9ee8;
        case 0x2f9eecu: goto label_2f9eec;
        case 0x2f9ef0u: goto label_2f9ef0;
        case 0x2f9ef4u: goto label_2f9ef4;
        case 0x2f9ef8u: goto label_2f9ef8;
        case 0x2f9efcu: goto label_2f9efc;
        case 0x2f9f00u: goto label_2f9f00;
        case 0x2f9f04u: goto label_2f9f04;
        case 0x2f9f08u: goto label_2f9f08;
        case 0x2f9f0cu: goto label_2f9f0c;
        case 0x2f9f10u: goto label_2f9f10;
        case 0x2f9f14u: goto label_2f9f14;
        case 0x2f9f18u: goto label_2f9f18;
        case 0x2f9f1cu: goto label_2f9f1c;
        case 0x2f9f20u: goto label_2f9f20;
        case 0x2f9f24u: goto label_2f9f24;
        case 0x2f9f28u: goto label_2f9f28;
        case 0x2f9f2cu: goto label_2f9f2c;
        case 0x2f9f30u: goto label_2f9f30;
        case 0x2f9f34u: goto label_2f9f34;
        case 0x2f9f38u: goto label_2f9f38;
        case 0x2f9f3cu: goto label_2f9f3c;
        case 0x2f9f40u: goto label_2f9f40;
        case 0x2f9f44u: goto label_2f9f44;
        default: break;
    }

    ctx->pc = 0x2f9e48u;

label_2f9e48:
    // 0x2f9e48: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f9e48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2f9e4c:
    // 0x2f9e4c: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x2f9e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_2f9e50:
    // 0x2f9e50: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2f9e50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2f9e54:
    // 0x2f9e54: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2f9e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2f9e58:
    // 0x2f9e58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f9e58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f9e5c:
    // 0x2f9e5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2f9e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2f9e60:
    // 0x2f9e60: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x2f9e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
label_2f9e64:
    // 0x2f9e64: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2f9e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2f9e68:
    // 0x2f9e68: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x2f9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
label_2f9e6c:
    // 0x2f9e6c: 0x8c850030  lw          $a1, 0x30($a0)
    ctx->pc = 0x2f9e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
label_2f9e70:
    // 0x2f9e70: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x2f9e70u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_2f9e74:
    // 0x2f9e74: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x2f9e74u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f9e78:
    // 0x2f9e78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x2f9e78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2f9e7c:
    // 0x2f9e7c: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
label_2f9e80:
    if (ctx->pc == 0x2F9E80u) {
        ctx->pc = 0x2F9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E7Cu;
        // 0x2f9e80: 0x28c03  sra         $s1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E84u;
        goto label_2f9e84;
    }
    ctx->pc = 0x2F9E7Cu;
    {
        const bool branch_taken_0x2f9e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F9E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E7Cu;
        // 0x2f9e80: 0x28c03  sra         $s1, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9e7c) {
            ctx->pc = 0x2F9EF0u;
            goto label_2f9ef0;
        }
    }
    ctx->pc = 0x2F9E84u;
label_2f9e84:
    // 0x2f9e84: 0x86030004  lh          $v1, 0x4($s0)
    ctx->pc = 0x2f9e84u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2f9e88:
    // 0x2f9e88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f9e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f9e8c:
    // 0x2f9e8c: 0x54620007  bnel        $v1, $v0, . + 4 + (0x7 << 2)
label_2f9e90:
    if (ctx->pc == 0x2F9E90u) {
        ctx->pc = 0x2F9E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E8Cu;
        // 0x2f9e90: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9E94u;
        goto label_2f9e94;
    }
    ctx->pc = 0x2F9E8Cu;
    {
        const bool branch_taken_0x2f9e8c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f9e8c) {
            ctx->pc = 0x2F9E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F9E8Cu;
            // 0x2f9e90: 0x96020004  lhu         $v0, 0x4($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F9EACu;
            goto label_2f9eac;
        }
    }
    ctx->pc = 0x2F9E94u;
label_2f9e94:
    // 0x2f9e94: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2f9e94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
label_2f9e98:
    // 0x2f9e98: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x2f9e98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_2f9e9c:
    // 0x2f9e9c: 0xc0cd4ee  jal         func_3353B8
label_2f9ea0:
    if (ctx->pc == 0x2F9EA0u) {
        ctx->pc = 0x2F9EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9E9Cu;
        // 0x2f9ea0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EA4u;
        goto label_2f9ea4;
    }
    ctx->pc = 0x2F9E9Cu;
    SET_GPR_U32(ctx, 31, 0x2F9EA4u);
    ctx->pc = 0x2F9EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F9E9Cu;
    // 0x2f9ea0: 0x2484b880  addiu       $a0, $a0, -0x4780 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948992));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x2F9E9Cu, 0x2F9EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F9EA4u;
label_2f9ea4:
    // 0x2f9ea4: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2f9ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2f9ea8:
    // 0x2f9ea8: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2f9ea8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2f9eac:
    // 0x2f9eac: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2f9eacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9eb0:
    // 0x2f9eb0: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2f9eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2f9eb4:
    // 0x2f9eb4: 0x1c600018  bgtz        $v1, . + 4 + (0x18 << 2)
label_2f9eb8:
    if (ctx->pc == 0x2F9EB8u) {
        ctx->pc = 0x2F9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EB4u;
        // 0x2f9eb8: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EBCu;
        goto label_2f9ebc;
    }
    ctx->pc = 0x2F9EB4u;
    {
        const bool branch_taken_0x2f9eb4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2F9EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EB4u;
        // 0x2f9eb8: 0xa6020004  sh          $v0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9eb4) {
            ctx->pc = 0x2F9F18u;
            goto label_2f9f18;
        }
    }
    ctx->pc = 0x2F9EBCu;
label_2f9ebc:
    // 0x2f9ebc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f9ec0:
    // 0x2f9ec0: 0xa6000004  sh          $zero, 0x4($s0)
    ctx->pc = 0x2f9ec0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 0));
label_2f9ec4:
    // 0x2f9ec4: 0x84640010  lh          $a0, 0x10($v1)
    ctx->pc = 0x2f9ec4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
label_2f9ec8:
    // 0x2f9ec8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2f9ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2f9ecc:
    // 0x2f9ecc: 0x40f809  jalr        $v0
label_2f9ed0:
    if (ctx->pc == 0x2F9ED0u) {
        ctx->pc = 0x2F9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ECCu;
        // 0x2f9ed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9ED4u;
        goto label_2f9ed4;
    }
    ctx->pc = 0x2F9ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9ED4u);
        ctx->pc = 0x2F9ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ECCu;
        // 0x2f9ed0: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9ECCu, 0x2F9ED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9ED4u;
label_2f9ed4:
    // 0x2f9ed4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f9ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f9ed8:
    // 0x2f9ed8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_2f9edc:
    if (ctx->pc == 0x2F9EDCu) {
        ctx->pc = 0x2F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ED8u;
        // 0x2f9edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EE0u;
        goto label_2f9ee0;
    }
    ctx->pc = 0x2F9ED8u;
    {
        const bool branch_taken_0x2f9ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2F9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9ED8u;
        // 0x2f9edc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ed8) {
            ctx->pc = 0x2F9EE8u;
            goto label_2f9ee8;
        }
    }
    ctx->pc = 0x2F9EE0u;
label_2f9ee0:
    // 0x2f9ee0: 0x10000014  b           . + 4 + (0x14 << 2)
label_2f9ee4:
    if (ctx->pc == 0x2F9EE4u) {
        ctx->pc = 0x2F9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EE0u;
        // 0x2f9ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EE8u;
        goto label_2f9ee8;
    }
    ctx->pc = 0x2F9EE0u;
    {
        const bool branch_taken_0x2f9ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EE0u;
        // 0x2f9ee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ee0) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9EE8u;
label_2f9ee8:
    // 0x2f9ee8: 0x1000000d  b           . + 4 + (0xD << 2)
label_2f9eec:
    if (ctx->pc == 0x2F9EECu) {
        ctx->pc = 0x2F9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EE8u;
        // 0x2f9eec: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9EF0u;
        goto label_2f9ef0;
    }
    ctx->pc = 0x2F9EE8u;
    {
        const bool branch_taken_0x2f9ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9EE8u;
        // 0x2f9eec: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9ee8) {
            ctx->pc = 0x2F9F20u;
            goto label_2f9f20;
        }
    }
    ctx->pc = 0x2F9EF0u;
label_2f9ef0:
    // 0x2f9ef0: 0x96020004  lhu         $v0, 0x4($s0)
    ctx->pc = 0x2f9ef0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
label_2f9ef4:
    // 0x2f9ef4: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2f9ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f9ef8:
    // 0x2f9ef8: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2f9ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2f9efc:
    // 0x2f9efc: 0xa6020004  sh          $v0, 0x4($s0)
    ctx->pc = 0x2f9efcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 2));
label_2f9f00:
    // 0x2f9f00: 0x4610002  bgez        $v1, . + 4 + (0x2 << 2)
label_2f9f04:
    if (ctx->pc == 0x2F9F04u) {
        ctx->pc = 0x2F9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F00u;
        // 0x2f9f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F08u;
        goto label_2f9f08;
    }
    ctx->pc = 0x2F9F00u;
    {
        const bool branch_taken_0x2f9f00 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2F9F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F00u;
        // 0x2f9f04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f00) {
            ctx->pc = 0x2F9F0Cu;
            goto label_2f9f0c;
        }
    }
    ctx->pc = 0x2F9F08u;
label_2f9f08:
    // 0x2f9f08: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2f9f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f9f0c:
    // 0x2f9f0c: 0x41400  sll         $v0, $a0, 16
    ctx->pc = 0x2f9f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_2f9f10:
    // 0x2f9f10: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_2f9f14:
    if (ctx->pc == 0x2F9F14u) {
        ctx->pc = 0x2F9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F10u;
        // 0x2f9f14: 0xa6040004  sh          $a0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F18u;
        goto label_2f9f18;
    }
    ctx->pc = 0x2F9F10u;
    {
        const bool branch_taken_0x2f9f10 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F10u;
        // 0x2f9f14: 0xa6040004  sh          $a0, 0x4($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f10) {
            ctx->pc = 0x2F9F20u;
            goto label_2f9f20;
        }
    }
    ctx->pc = 0x2F9F18u;
label_2f9f18:
    // 0x2f9f18: 0x10000006  b           . + 4 + (0x6 << 2)
label_2f9f1c:
    if (ctx->pc == 0x2F9F1Cu) {
        ctx->pc = 0x2F9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F18u;
        // 0x2f9f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F20u;
        goto label_2f9f20;
    }
    ctx->pc = 0x2F9F18u;
    {
        const bool branch_taken_0x2f9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F18u;
        // 0x2f9f1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f9f18) {
            ctx->pc = 0x2F9F34u;
            goto label_2f9f34;
        }
    }
    ctx->pc = 0x2F9F20u;
label_2f9f20:
    // 0x2f9f20: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2f9f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2f9f24:
    // 0x2f9f24: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x2f9f24u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_2f9f28:
    // 0x2f9f28: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x2f9f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_2f9f2c:
    // 0x2f9f2c: 0x40f809  jalr        $v0
label_2f9f30:
    if (ctx->pc == 0x2F9F30u) {
        ctx->pc = 0x2F9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F2Cu;
        // 0x2f9f30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F34u;
        goto label_2f9f34;
    }
    ctx->pc = 0x2F9F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F9F34u);
        ctx->pc = 0x2F9F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F2Cu;
        // 0x2f9f30: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9F2Cu, 0x2F9F34u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F9F34u;
label_2f9f34:
    // 0x2f9f34: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2f9f34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2f9f38:
    // 0x2f9f38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2f9f38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2f9f3c:
    // 0x2f9f3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2f9f3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2f9f40:
    // 0x2f9f40: 0x3e00008  jr          $ra
label_2f9f44:
    if (ctx->pc == 0x2F9F44u) {
        ctx->pc = 0x2F9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F40u;
        // 0x2f9f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F9F48u;
        goto label_fallthrough_0x2f9f40;
    }
    ctx->pc = 0x2F9F40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F9F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F9F40u;
        // 0x2f9f44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F9F40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f9f40:
    ctx->pc = 0x2F9F48u;
}
