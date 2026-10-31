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

// Function: sub_00424B90
// Address: 0x424b90 - 0x424d60
void sub_00424B90_0x424b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00424B90_0x424b90");
#endif

    switch (ctx->pc) {
        case 0x424b90u: goto label_424b90;
        case 0x424b94u: goto label_424b94;
        case 0x424b98u: goto label_424b98;
        case 0x424b9cu: goto label_424b9c;
        case 0x424ba0u: goto label_424ba0;
        case 0x424ba4u: goto label_424ba4;
        case 0x424ba8u: goto label_424ba8;
        case 0x424bacu: goto label_424bac;
        case 0x424bb0u: goto label_424bb0;
        case 0x424bb4u: goto label_424bb4;
        case 0x424bb8u: goto label_424bb8;
        case 0x424bbcu: goto label_424bbc;
        case 0x424bc0u: goto label_424bc0;
        case 0x424bc4u: goto label_424bc4;
        case 0x424bc8u: goto label_424bc8;
        case 0x424bccu: goto label_424bcc;
        case 0x424bd0u: goto label_424bd0;
        case 0x424bd4u: goto label_424bd4;
        case 0x424bd8u: goto label_424bd8;
        case 0x424bdcu: goto label_424bdc;
        case 0x424be0u: goto label_424be0;
        case 0x424be4u: goto label_424be4;
        case 0x424be8u: goto label_424be8;
        case 0x424becu: goto label_424bec;
        case 0x424bf0u: goto label_424bf0;
        case 0x424bf4u: goto label_424bf4;
        case 0x424bf8u: goto label_424bf8;
        case 0x424bfcu: goto label_424bfc;
        case 0x424c00u: goto label_424c00;
        case 0x424c04u: goto label_424c04;
        case 0x424c08u: goto label_424c08;
        case 0x424c0cu: goto label_424c0c;
        case 0x424c10u: goto label_424c10;
        case 0x424c14u: goto label_424c14;
        case 0x424c18u: goto label_424c18;
        case 0x424c1cu: goto label_424c1c;
        case 0x424c20u: goto label_424c20;
        case 0x424c24u: goto label_424c24;
        case 0x424c28u: goto label_424c28;
        case 0x424c2cu: goto label_424c2c;
        case 0x424c30u: goto label_424c30;
        case 0x424c34u: goto label_424c34;
        case 0x424c38u: goto label_424c38;
        case 0x424c3cu: goto label_424c3c;
        case 0x424c40u: goto label_424c40;
        case 0x424c44u: goto label_424c44;
        case 0x424c48u: goto label_424c48;
        case 0x424c4cu: goto label_424c4c;
        case 0x424c50u: goto label_424c50;
        case 0x424c54u: goto label_424c54;
        case 0x424c58u: goto label_424c58;
        case 0x424c5cu: goto label_424c5c;
        case 0x424c60u: goto label_424c60;
        case 0x424c64u: goto label_424c64;
        case 0x424c68u: goto label_424c68;
        case 0x424c6cu: goto label_424c6c;
        case 0x424c70u: goto label_424c70;
        case 0x424c74u: goto label_424c74;
        case 0x424c78u: goto label_424c78;
        case 0x424c7cu: goto label_424c7c;
        case 0x424c80u: goto label_424c80;
        case 0x424c84u: goto label_424c84;
        case 0x424c88u: goto label_424c88;
        case 0x424c8cu: goto label_424c8c;
        case 0x424c90u: goto label_424c90;
        case 0x424c94u: goto label_424c94;
        case 0x424c98u: goto label_424c98;
        case 0x424c9cu: goto label_424c9c;
        case 0x424ca0u: goto label_424ca0;
        case 0x424ca4u: goto label_424ca4;
        case 0x424ca8u: goto label_424ca8;
        case 0x424cacu: goto label_424cac;
        case 0x424cb0u: goto label_424cb0;
        case 0x424cb4u: goto label_424cb4;
        case 0x424cb8u: goto label_424cb8;
        case 0x424cbcu: goto label_424cbc;
        case 0x424cc0u: goto label_424cc0;
        case 0x424cc4u: goto label_424cc4;
        case 0x424cc8u: goto label_424cc8;
        case 0x424cccu: goto label_424ccc;
        case 0x424cd0u: goto label_424cd0;
        case 0x424cd4u: goto label_424cd4;
        case 0x424cd8u: goto label_424cd8;
        case 0x424cdcu: goto label_424cdc;
        case 0x424ce0u: goto label_424ce0;
        case 0x424ce4u: goto label_424ce4;
        case 0x424ce8u: goto label_424ce8;
        case 0x424cecu: goto label_424cec;
        case 0x424cf0u: goto label_424cf0;
        case 0x424cf4u: goto label_424cf4;
        case 0x424cf8u: goto label_424cf8;
        case 0x424cfcu: goto label_424cfc;
        case 0x424d00u: goto label_424d00;
        case 0x424d04u: goto label_424d04;
        case 0x424d08u: goto label_424d08;
        case 0x424d0cu: goto label_424d0c;
        case 0x424d10u: goto label_424d10;
        case 0x424d14u: goto label_424d14;
        case 0x424d18u: goto label_424d18;
        case 0x424d1cu: goto label_424d1c;
        case 0x424d20u: goto label_424d20;
        case 0x424d24u: goto label_424d24;
        case 0x424d28u: goto label_424d28;
        case 0x424d2cu: goto label_424d2c;
        case 0x424d30u: goto label_424d30;
        case 0x424d34u: goto label_424d34;
        case 0x424d38u: goto label_424d38;
        case 0x424d3cu: goto label_424d3c;
        case 0x424d40u: goto label_424d40;
        case 0x424d44u: goto label_424d44;
        case 0x424d48u: goto label_424d48;
        case 0x424d4cu: goto label_424d4c;
        case 0x424d50u: goto label_424d50;
        case 0x424d54u: goto label_424d54;
        case 0x424d58u: goto label_424d58;
        case 0x424d5cu: goto label_424d5c;
        default: break;
    }

    ctx->pc = 0x424b90u;

label_424b90:
    // 0x424b90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x424b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_424b94:
    // 0x424b94: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x424b94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_424b98:
    // 0x424b98: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x424b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_424b9c:
    // 0x424b9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x424b9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424ba0:
    // 0x424ba0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x424ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_424ba4:
    // 0x424ba4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x424ba4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_424ba8:
    // 0x424ba8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x424ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
label_424bac:
    // 0x424bac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x424bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_424bb0:
    // 0x424bb0: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x424bb0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424bb4:
    // 0x424bb4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x424bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_424bb8:
    // 0x424bb8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x424bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_424bbc:
    // 0x424bbc: 0x84640068  lh          $a0, 0x68($v1)
    ctx->pc = 0x424bbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 104)));
label_424bc0:
    // 0x424bc0: 0x8c62006c  lw          $v0, 0x6C($v1)
    ctx->pc = 0x424bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 108)));
label_424bc4:
    // 0x424bc4: 0x40f809  jalr        $v0
label_424bc8:
    if (ctx->pc == 0x424BC8u) {
        ctx->pc = 0x424BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424BC4u;
        // 0x424bc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424BCCu;
        goto label_424bcc;
    }
    ctx->pc = 0x424BC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x424BCCu);
        ctx->pc = 0x424BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424BC4u;
        // 0x424bc8: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424BC4u, 0x424BCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424BCCu;
label_424bcc:
    // 0x424bcc: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x424bccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
label_424bd0:
    // 0x424bd0: 0x2472e8f8  addiu       $s2, $v1, -0x1708
    ctx->pc = 0x424bd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961400));
label_424bd4:
    // 0x424bd4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x424bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_424bd8:
    // 0x424bd8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x424bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_424bdc:
    // 0x424bdc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x424bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_424be0:
    // 0x424be0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x424be0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_424be4:
    // 0x424be4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x424be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_424be8:
    // 0x424be8: 0x60f809  jalr        $v1
label_424bec:
    if (ctx->pc == 0x424BECu) {
        ctx->pc = 0x424BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424BE8u;
        // 0x424bec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424BF0u;
        goto label_424bf0;
    }
    ctx->pc = 0x424BE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x424BF0u);
        ctx->pc = 0x424BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424BE8u;
        // 0x424bec: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424BE8u, 0x424BF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424BF0u;
label_424bf0:
    // 0x424bf0: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x424bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_424bf4:
    // 0x424bf4: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x424bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_424bf8:
    // 0x424bf8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424bf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424bfc:
    // 0x424bfc: 0x0  nop
    ctx->pc = 0x424bfcu;
    // NOP
label_424c00:
    // 0x424c00: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x424c00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424c04:
    // 0x424c04: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x424c04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_424c08:
    // 0x424c08: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_424c0c:
    if (ctx->pc == 0x424C0Cu) {
        ctx->pc = 0x424C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C08u;
        // 0x424c0c: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C10u;
        goto label_424c10;
    }
    ctx->pc = 0x424C08u;
    {
        const bool branch_taken_0x424c08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C08u;
        // 0x424c0c: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c08) {
            ctx->pc = 0x424C34u;
            goto label_424c34;
        }
    }
    ctx->pc = 0x424C10u;
label_424c10:
    // 0x424c10: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x424c10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_424c14:
    // 0x424c14: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x424c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_424c18:
    // 0x424c18: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424c18u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424c1c:
    // 0x424c1c: 0x932004  sllv        $a0, $s3, $a0
    ctx->pc = 0x424c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 4) & 0x1F));
label_424c20:
    // 0x424c20: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x424c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_424c24:
    // 0x424c24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x424c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_424c28:
    // 0x424c28: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x424c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_424c2c:
    // 0x424c2c: 0x1000000a  b           . + 4 + (0xA << 2)
label_424c30:
    if (ctx->pc == 0x424C30u) {
        ctx->pc = 0x424C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C2Cu;
        // 0x424c30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C34u;
        goto label_424c34;
    }
    ctx->pc = 0x424C2Cu;
    {
        const bool branch_taken_0x424c2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C2Cu;
        // 0x424c30: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c2c) {
            ctx->pc = 0x424C58u;
            goto label_424c58;
        }
    }
    ctx->pc = 0x424C34u;
label_424c34:
    // 0x424c34: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x424c34u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_424c38:
    // 0x424c38: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x424c38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_424c3c:
    // 0x424c3c: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x424c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_424c40:
    // 0x424c40: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x424c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_424c44:
    // 0x424c44: 0x731804  sllv        $v1, $s3, $v1
    ctx->pc = 0x424c44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), GPR_U32(ctx, 3) & 0x1F));
label_424c48:
    // 0x424c48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x424c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_424c4c:
    // 0x424c4c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x424c4cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_424c50:
    // 0x424c50: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x424c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_424c54:
    // 0x424c54: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x424c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_424c58:
    // 0x424c58: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x424c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424c5c:
    // 0x424c5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x424c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_424c60:
    // 0x424c60: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x424c60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_424c64:
    // 0x424c64: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x424c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_424c68:
    // 0x424c68: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_424c6c:
    if (ctx->pc == 0x424C6Cu) {
        ctx->pc = 0x424C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C68u;
        // 0x424c6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C70u;
        goto label_424c70;
    }
    ctx->pc = 0x424C68u;
    {
        const bool branch_taken_0x424c68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x424C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C68u;
        // 0x424c6c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424c68) {
            ctx->pc = 0x424C00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424c00;
        }
    }
    ctx->pc = 0x424C70u;
label_424c70:
    // 0x424c70: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x424c70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_424c74:
    // 0x424c74: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x424c74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_424c78:
    // 0x424c78: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_424c7c:
    if (ctx->pc == 0x424C7Cu) {
        ctx->pc = 0x424C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424C78u;
        // 0x424c7c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424C80u;
        goto label_424c80;
    }
    ctx->pc = 0x424C78u;
    {
        const bool branch_taken_0x424c78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x424c78) {
            ctx->pc = 0x424C7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424C78u;
            // 0x424c7c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424BD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424bd8;
        }
    }
    ctx->pc = 0x424C80u;
label_424c80:
    // 0x424c80: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x424c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
label_424c84:
    // 0x424c84: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x424c84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424c88:
    // 0x424c88: 0x2453e948  addiu       $s3, $v0, -0x16B8
    ctx->pc = 0x424c88u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961480));
label_424c8c:
    // 0x424c8c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x424c8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_424c90:
    // 0x424c90: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x424c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_424c94:
    // 0x424c94: 0x0  nop
    ctx->pc = 0x424c94u;
    // NOP
label_424c98:
    // 0x424c98: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x424c98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_424c9c:
    // 0x424c9c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x424c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_424ca0:
    // 0x424ca0: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x424ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_424ca4:
    // 0x424ca4: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x424ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_424ca8:
    // 0x424ca8: 0x60f809  jalr        $v1
label_424cac:
    if (ctx->pc == 0x424CACu) {
        ctx->pc = 0x424CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424CA8u;
        // 0x424cac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424CB0u;
        goto label_424cb0;
    }
    ctx->pc = 0x424CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x424CB0u);
        ctx->pc = 0x424CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424CA8u;
        // 0x424cac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424CA8u, 0x424CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x424CB0u;
label_424cb0:
    // 0x424cb0: 0x103140  sll         $a2, $s0, 5
    ctx->pc = 0x424cb0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 5));
label_424cb4:
    // 0x424cb4: 0x26070001  addiu       $a3, $s0, 0x1
    ctx->pc = 0x424cb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_424cb8:
    // 0x424cb8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x424cb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_424cbc:
    // 0x424cbc: 0x0  nop
    ctx->pc = 0x424cbcu;
    // NOP
label_424cc0:
    // 0x424cc0: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x424cc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_424cc4:
    // 0x424cc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x424cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_424cc8:
    // 0x424cc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_424ccc:
    if (ctx->pc == 0x424CCCu) {
        ctx->pc = 0x424CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424CC8u;
        // 0x424ccc: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424CD0u;
        goto label_424cd0;
    }
    ctx->pc = 0x424CC8u;
    {
        const bool branch_taken_0x424cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x424CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424CC8u;
        // 0x424ccc: 0xc51821  addu        $v1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424cc8) {
            ctx->pc = 0x424CF4u;
            goto label_424cf4;
        }
    }
    ctx->pc = 0x424CD0u;
label_424cd0:
    // 0x424cd0: 0x31142  srl         $v0, $v1, 5
    ctx->pc = 0x424cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_424cd4:
    // 0x424cd4: 0x3064001f  andi        $a0, $v1, 0x1F
    ctx->pc = 0x424cd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_424cd8:
    // 0x424cd8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x424cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_424cdc:
    // 0x424cdc: 0x922004  sllv        $a0, $s2, $a0
    ctx->pc = 0x424cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 4) & 0x1F));
label_424ce0:
    // 0x424ce0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x424ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_424ce4:
    // 0x424ce4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x424ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_424ce8:
    // 0x424ce8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x424ce8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_424cec:
    // 0x424cec: 0x1000000a  b           . + 4 + (0xA << 2)
label_424cf0:
    if (ctx->pc == 0x424CF0u) {
        ctx->pc = 0x424CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424CECu;
        // 0x424cf0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424CF4u;
        goto label_424cf4;
    }
    ctx->pc = 0x424CECu;
    {
        const bool branch_taken_0x424cec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x424CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424CECu;
        // 0x424cf0: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424cec) {
            ctx->pc = 0x424D18u;
            goto label_424d18;
        }
    }
    ctx->pc = 0x424CF4u;
label_424cf4:
    // 0x424cf4: 0x32142  srl         $a0, $v1, 5
    ctx->pc = 0x424cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
label_424cf8:
    // 0x424cf8: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x424cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_424cfc:
    // 0x424cfc: 0x3063001f  andi        $v1, $v1, 0x1F
    ctx->pc = 0x424cfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)31);
label_424d00:
    // 0x424d00: 0x932021  addu        $a0, $a0, $s3
    ctx->pc = 0x424d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_424d04:
    // 0x424d04: 0x721804  sllv        $v1, $s2, $v1
    ctx->pc = 0x424d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_424d08:
    // 0x424d08: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x424d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_424d0c:
    // 0x424d0c: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x424d0cu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_424d10:
    // 0x424d10: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x424d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_424d14:
    // 0x424d14: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x424d14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_424d18:
    // 0x424d18: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x424d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_424d1c:
    // 0x424d1c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x424d1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_424d20:
    // 0x424d20: 0x2ca30020  sltiu       $v1, $a1, 0x20
    ctx->pc = 0x424d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
label_424d24:
    // 0x424d24: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x424d24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_424d28:
    // 0x424d28: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
label_424d2c:
    if (ctx->pc == 0x424D2Cu) {
        ctx->pc = 0x424D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D28u;
        // 0x424d2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424D30u;
        goto label_424d30;
    }
    ctx->pc = 0x424D28u;
    {
        const bool branch_taken_0x424d28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x424D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D28u;
        // 0x424d2c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x424d28) {
            ctx->pc = 0x424CC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424cc0;
        }
    }
    ctx->pc = 0x424D30u;
label_424d30:
    // 0x424d30: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x424d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_424d34:
    // 0x424d34: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x424d34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_424d38:
    // 0x424d38: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_424d3c:
    if (ctx->pc == 0x424D3Cu) {
        ctx->pc = 0x424D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D38u;
        // 0x424d3c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424D40u;
        goto label_424d40;
    }
    ctx->pc = 0x424D38u;
    {
        const bool branch_taken_0x424d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x424d38) {
            ctx->pc = 0x424D3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x424D38u;
            // 0x424d3c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x424C98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_424c98;
        }
    }
    ctx->pc = 0x424D40u;
label_424d40:
    // 0x424d40: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x424d40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_424d44:
    // 0x424d44: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x424d44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_424d48:
    // 0x424d48: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x424d48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_424d4c:
    // 0x424d4c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x424d4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_424d50:
    // 0x424d50: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x424d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_424d54:
    // 0x424d54: 0x3e00008  jr          $ra
label_424d58:
    if (ctx->pc == 0x424D58u) {
        ctx->pc = 0x424D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D54u;
        // 0x424d58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x424D5Cu;
        goto label_424d5c;
    }
    ctx->pc = 0x424D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x424D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x424D54u;
        // 0x424d58: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x424D54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x424D5Cu;
label_424d5c:
    // 0x424d5c: 0x0  nop
    ctx->pc = 0x424d5cu;
    // NOP
    ctx->pc = 0x424d60u;
}
