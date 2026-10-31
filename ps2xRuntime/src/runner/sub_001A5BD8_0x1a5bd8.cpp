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

// Function: sub_001A5BD8
// Address: 0x1a5bd8 - 0x1a5d28
void sub_001A5BD8_0x1a5bd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5BD8_0x1a5bd8");
#endif

    switch (ctx->pc) {
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        case 0x1a5c80u: goto label_1a5c80;
        case 0x1a5c84u: goto label_1a5c84;
        case 0x1a5c88u: goto label_1a5c88;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5c90u: goto label_1a5c90;
        case 0x1a5c94u: goto label_1a5c94;
        case 0x1a5c98u: goto label_1a5c98;
        case 0x1a5c9cu: goto label_1a5c9c;
        case 0x1a5ca0u: goto label_1a5ca0;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5ca8u: goto label_1a5ca8;
        case 0x1a5cacu: goto label_1a5cac;
        case 0x1a5cb0u: goto label_1a5cb0;
        case 0x1a5cb4u: goto label_1a5cb4;
        case 0x1a5cb8u: goto label_1a5cb8;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cc0u: goto label_1a5cc0;
        case 0x1a5cc4u: goto label_1a5cc4;
        case 0x1a5cc8u: goto label_1a5cc8;
        case 0x1a5cccu: goto label_1a5ccc;
        case 0x1a5cd0u: goto label_1a5cd0;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5cdcu: goto label_1a5cdc;
        case 0x1a5ce0u: goto label_1a5ce0;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5ce8u: goto label_1a5ce8;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5cf4u: goto label_1a5cf4;
        case 0x1a5cf8u: goto label_1a5cf8;
        case 0x1a5cfcu: goto label_1a5cfc;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d08u: goto label_1a5d08;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d10u: goto label_1a5d10;
        case 0x1a5d14u: goto label_1a5d14;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d20u: goto label_1a5d20;
        case 0x1a5d24u: goto label_1a5d24;
        default: break;
    }

    ctx->pc = 0x1a5bd8u;

label_1a5bd8:
    // 0x1a5bd8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1a5bd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_1a5bdc:
    // 0x1a5bdc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x1a5bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_1a5be0:
    // 0x1a5be0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a5be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1a5be4:
    // 0x1a5be4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1a5be4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a5be8:
    // 0x1a5be8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x1a5be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_1a5bec:
    // 0x1a5bec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x1a5becu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5bf0:
    // 0x1a5bf0: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x1a5bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_1a5bf4:
    // 0x1a5bf4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a5bf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a5bf8:
    // 0x1a5bf8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1a5bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1a5bfc:
    // 0x1a5bfc: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1a5bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1a5c00:
    // 0x1a5c00: 0x84640048  lh          $a0, 0x48($v1)
    ctx->pc = 0x1a5c00u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 72)));
label_1a5c04:
    // 0x1a5c04: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x1a5c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
label_1a5c08:
    // 0x1a5c08: 0x40f809  jalr        $v0
label_1a5c0c:
    if (ctx->pc == 0x1A5C0Cu) {
        ctx->pc = 0x1A5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C08u;
        // 0x1a5c0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C10u;
        goto label_1a5c10;
    }
    ctx->pc = 0x1A5C08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5C10u);
        ctx->pc = 0x1A5C0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C08u;
        // 0x1a5c0c: 0x2442021  addu        $a0, $s2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5C08u, 0x1A5C10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5C10u;
label_1a5c10:
    // 0x1a5c10: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
label_1a5c14:
    if (ctx->pc == 0x1A5C14u) {
        ctx->pc = 0x1A5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C10u;
        // 0x1a5c14: 0x26450160  addiu       $a1, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C18u;
        goto label_1a5c18;
    }
    ctx->pc = 0x1A5C10u;
    {
        const bool branch_taken_0x1a5c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C10u;
        // 0x1a5c14: 0x26450160  addiu       $a1, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c10) {
            ctx->pc = 0x1A5D04u;
            goto label_1a5d04;
        }
    }
    ctx->pc = 0x1A5C18u;
label_1a5c18:
    // 0x1a5c18: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5c1c:
    // 0x1a5c1c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1a5c20:
    if (ctx->pc == 0x1A5C20u) {
        ctx->pc = 0x1A5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C1Cu;
        // 0x1a5c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C24u;
        goto label_1a5c24;
    }
    ctx->pc = 0x1A5C1Cu;
    {
        const bool branch_taken_0x1a5c1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C1Cu;
        // 0x1a5c20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c1c) {
            ctx->pc = 0x1A5C44u;
            goto label_1a5c44;
        }
    }
    ctx->pc = 0x1A5C24u;
label_1a5c24:
    // 0x1a5c24: 0x92630003  lbu         $v1, 0x3($s3)
    ctx->pc = 0x1a5c24u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1a5c28:
    // 0x1a5c28: 0xaca201b4  sw          $v0, 0x1B4($a1)
    ctx->pc = 0x1a5c28u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 436), GPR_U32(ctx, 2));
label_1a5c2c:
    // 0x1a5c2c: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a5c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c30:
    // 0x1a5c30: 0xa0a301b1  sb          $v1, 0x1B1($a1)
    ctx->pc = 0x1a5c30u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 433), (uint8_t)GPR_U32(ctx, 3));
label_1a5c34:
    // 0x1a5c34: 0xc06ec0e  jal         func_1BB038
label_1a5c38:
    if (ctx->pc == 0x1A5C38u) {
        ctx->pc = 0x1A5C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C34u;
        // 0x1a5c38: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C3Cu;
        goto label_1a5c3c;
    }
    ctx->pc = 0x1A5C34u;
    SET_GPR_U32(ctx, 31, 0x1A5C3Cu);
    ctx->pc = 0x1A5C38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C34u;
    // 0x1a5c38: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB038u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB038u, 0x1A5C34u, 0x1A5C3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C3Cu;
label_1a5c3c:
    // 0x1a5c3c: 0x10000032  b           . + 4 + (0x32 << 2)
label_1a5c40:
    if (ctx->pc == 0x1A5C40u) {
        ctx->pc = 0x1A5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C3Cu;
        // 0x1a5c40: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C44u;
        goto label_1a5c44;
    }
    ctx->pc = 0x1A5C3Cu;
    {
        const bool branch_taken_0x1a5c3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C3Cu;
        // 0x1a5c40: 0x7bb00080  lq          $s0, 0x80($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c3c) {
            ctx->pc = 0x1A5D08u;
            goto label_1a5d08;
        }
    }
    ctx->pc = 0x1A5C44u;
label_1a5c44:
    // 0x1a5c44: 0x8e430350  lw          $v1, 0x350($s2)
    ctx->pc = 0x1a5c44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a5c48:
    // 0x1a5c48: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5c48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a5c4c:
    // 0x1a5c4c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1a5c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5c50:
    // 0x1a5c50: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5c50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5c54:
    // 0x1a5c54: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_1a5c58:
    // 0x1a5c58: 0x1082002a  beq         $a0, $v0, . + 4 + (0x2A << 2)
label_1a5c5c:
    if (ctx->pc == 0x1A5C5Cu) {
        ctx->pc = 0x1A5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C58u;
        // 0x1a5c5c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C60u;
        goto label_1a5c60;
    }
    ctx->pc = 0x1A5C58u;
    {
        const bool branch_taken_0x1a5c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x1A5C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C58u;
        // 0x1a5c5c: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c58) {
            ctx->pc = 0x1A5D04u;
            goto label_1a5d04;
        }
    }
    ctx->pc = 0x1A5C60u;
label_1a5c60:
    // 0x1a5c60: 0x3c140051  lui         $s4, 0x51
    ctx->pc = 0x1a5c60u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)81 << 16));
label_1a5c64:
    // 0x1a5c64: 0x0  nop
    ctx->pc = 0x1a5c64u;
    // NOP
label_1a5c68:
    // 0x1a5c68: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a5c68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5c6c:
    // 0x1a5c6c: 0x92650003  lbu         $a1, 0x3($s3)
    ctx->pc = 0x1a5c6cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 3)));
label_1a5c70:
    // 0x1a5c70: 0x8c700008  lw          $s0, 0x8($v1)
    ctx->pc = 0x1a5c70u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1a5c74:
    // 0x1a5c74: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5c78:
    // 0x1a5c78: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x1a5c78u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_1a5c7c:
    // 0x1a5c7c: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x1a5c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_1a5c80:
    // 0x1a5c80: 0x60f809  jalr        $v1
label_1a5c84:
    if (ctx->pc == 0x1A5C84u) {
        ctx->pc = 0x1A5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C80u;
        // 0x1a5c84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C88u;
        goto label_1a5c88;
    }
    ctx->pc = 0x1A5C80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5C88u);
        ctx->pc = 0x1A5C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C80u;
        // 0x1a5c84: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5C80u, 0x1A5C88u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5C88u;
label_1a5c88:
    // 0x1a5c88: 0xc68cd1d4  lwc1        $f12, -0x2E2C($s4)
    ctx->pc = 0x1a5c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4294955476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1a5c8c:
    // 0x1a5c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c90:
    // 0x1a5c90: 0xc06ece4  jal         func_1BB390
label_1a5c94:
    if (ctx->pc == 0x1A5C94u) {
        ctx->pc = 0x1A5C94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5C90u;
        // 0x1a5c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5C98u;
        goto label_1a5c98;
    }
    ctx->pc = 0x1A5C90u;
    SET_GPR_U32(ctx, 31, 0x1A5C98u);
    ctx->pc = 0x1A5C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5C90u;
    // 0x1a5c94: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BB390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BB390u, 0x1A5C90u, 0x1A5C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5C98u;
label_1a5c98:
    // 0x1a5c98: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1a5c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1a5c9c:
    // 0x1a5c9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1a5c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ca0:
    // 0x1a5ca0: 0x84440078  lh          $a0, 0x78($v0)
    ctx->pc = 0x1a5ca0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 120)));
label_1a5ca4:
    // 0x1a5ca4: 0x8c43007c  lw          $v1, 0x7C($v0)
    ctx->pc = 0x1a5ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_1a5ca8:
    // 0x1a5ca8: 0x60f809  jalr        $v1
label_1a5cac:
    if (ctx->pc == 0x1A5CACu) {
        ctx->pc = 0x1A5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CA8u;
        // 0x1a5cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5CB0u;
        goto label_1a5cb0;
    }
    ctx->pc = 0x1A5CA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1A5CB0u);
        ctx->pc = 0x1A5CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CA8u;
        // 0x1a5cac: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5CA8u, 0x1A5CB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1A5CB0u;
label_1a5cb0:
    // 0x1a5cb0: 0xc10c3ac  jal         func_430EB0
label_1a5cb4:
    if (ctx->pc == 0x1A5CB4u) {
        ctx->pc = 0x1A5CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CB0u;
        // 0x1a5cb4: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5CB8u;
        goto label_1a5cb8;
    }
    ctx->pc = 0x1A5CB0u;
    SET_GPR_U32(ctx, 31, 0x1A5CB8u);
    ctx->pc = 0x1A5CB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CB0u;
    // 0x1a5cb4: 0x8e040068  lw          $a0, 0x68($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A5CB0u, 0x1A5CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CB8u;
label_1a5cb8:
    // 0x1a5cb8: 0x8e030060  lw          $v1, 0x60($s0)
    ctx->pc = 0x1a5cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1a5cbc:
    // 0x1a5cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1a5cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1a5cc0:
    // 0x1a5cc0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a5cc0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
label_1a5cc4:
    // 0x1a5cc4: 0x8e110068  lw          $s1, 0x68($s0)
    ctx->pc = 0x1a5cc4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 104)));
label_1a5cc8:
    // 0x1a5cc8: 0xc10c3ac  jal         func_430EB0
label_1a5ccc:
    if (ctx->pc == 0x1A5CCCu) {
        ctx->pc = 0x1A5CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CC8u;
        // 0x1a5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5CD0u;
        goto label_1a5cd0;
    }
    ctx->pc = 0x1A5CC8u;
    SET_GPR_U32(ctx, 31, 0x1A5CD0u);
    ctx->pc = 0x1A5CCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CC8u;
    // 0x1a5ccc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430EB0u, 0x1A5CC8u, 0x1A5CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CD0u;
label_1a5cd0:
    // 0x1a5cd0: 0x8e040060  lw          $a0, 0x60($s0)
    ctx->pc = 0x1a5cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1a5cd4:
    // 0x1a5cd4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1a5cd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a5cd8:
    // 0x1a5cd8: 0xc10c4de  jal         func_431378
label_1a5cdc:
    if (ctx->pc == 0x1A5CDCu) {
        ctx->pc = 0x1A5CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CD8u;
        // 0x1a5cdc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5CE0u;
        goto label_1a5ce0;
    }
    ctx->pc = 0x1A5CD8u;
    SET_GPR_U32(ctx, 31, 0x1A5CE0u);
    ctx->pc = 0x1A5CDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A5CD8u;
    // 0x1a5cdc: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x1A5CD8u, 0x1A5CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A5CE0u;
label_1a5ce0:
    // 0x1a5ce0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1a5ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5ce4:
    // 0x1a5ce4: 0x8e450350  lw          $a1, 0x350($s2)
    ctx->pc = 0x1a5ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 848)));
label_1a5ce8:
    // 0x1a5ce8: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x1a5ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_1a5cec:
    // 0x1a5cec: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1a5cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5cf0:
    // 0x1a5cf0: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x1a5cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_1a5cf4:
    // 0x1a5cf4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x1a5cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_1a5cf8:
    // 0x1a5cf8: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_1a5cfc:
    // 0x1a5cfc: 0x1482ffda  bne         $a0, $v0, . + 4 + (-0x26 << 2)
label_1a5d00:
    if (ctx->pc == 0x1A5D00u) {
        ctx->pc = 0x1A5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CFCu;
        // 0x1a5d00: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D04u;
        goto label_1a5d04;
    }
    ctx->pc = 0x1A5CFCu;
    {
        const bool branch_taken_0x1a5cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5CFCu;
        // 0x1a5d00: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cfc) {
            ctx->pc = 0x1A5C68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1a5c68;
        }
    }
    ctx->pc = 0x1A5D04u;
label_1a5d04:
    // 0x1a5d04: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x1a5d04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a5d08:
    // 0x1a5d08: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x1a5d08u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5d0c:
    // 0x1a5d0c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x1a5d0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5d10:
    // 0x1a5d10: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1a5d10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5d14:
    // 0x1a5d14: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a5d14u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5d18:
    // 0x1a5d18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1a5d18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5d1c:
    // 0x1a5d1c: 0x3e00008  jr          $ra
label_1a5d20:
    if (ctx->pc == 0x1A5D20u) {
        ctx->pc = 0x1A5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D1Cu;
        // 0x1a5d20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A5D24u;
        goto label_1a5d24;
    }
    ctx->pc = 0x1A5D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A5D1Cu;
        // 0x1a5d20: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A5D1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A5D24u;
label_1a5d24:
    // 0x1a5d24: 0x0  nop
    ctx->pc = 0x1a5d24u;
    // NOP
    ctx->pc = 0x1a5d28u;
}
