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

// Function: sub_002A4CB8
// Address: 0x2a4cb8 - 0x2a4dc8
void sub_002A4CB8_0x2a4cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4CB8_0x2a4cb8");
#endif

    switch (ctx->pc) {
        case 0x2a4cb8u: goto label_2a4cb8;
        case 0x2a4cbcu: goto label_2a4cbc;
        case 0x2a4cc0u: goto label_2a4cc0;
        case 0x2a4cc4u: goto label_2a4cc4;
        case 0x2a4cc8u: goto label_2a4cc8;
        case 0x2a4cccu: goto label_2a4ccc;
        case 0x2a4cd0u: goto label_2a4cd0;
        case 0x2a4cd4u: goto label_2a4cd4;
        case 0x2a4cd8u: goto label_2a4cd8;
        case 0x2a4cdcu: goto label_2a4cdc;
        case 0x2a4ce0u: goto label_2a4ce0;
        case 0x2a4ce4u: goto label_2a4ce4;
        case 0x2a4ce8u: goto label_2a4ce8;
        case 0x2a4cecu: goto label_2a4cec;
        case 0x2a4cf0u: goto label_2a4cf0;
        case 0x2a4cf4u: goto label_2a4cf4;
        case 0x2a4cf8u: goto label_2a4cf8;
        case 0x2a4cfcu: goto label_2a4cfc;
        case 0x2a4d00u: goto label_2a4d00;
        case 0x2a4d04u: goto label_2a4d04;
        case 0x2a4d08u: goto label_2a4d08;
        case 0x2a4d0cu: goto label_2a4d0c;
        case 0x2a4d10u: goto label_2a4d10;
        case 0x2a4d14u: goto label_2a4d14;
        case 0x2a4d18u: goto label_2a4d18;
        case 0x2a4d1cu: goto label_2a4d1c;
        case 0x2a4d20u: goto label_2a4d20;
        case 0x2a4d24u: goto label_2a4d24;
        case 0x2a4d28u: goto label_2a4d28;
        case 0x2a4d2cu: goto label_2a4d2c;
        case 0x2a4d30u: goto label_2a4d30;
        case 0x2a4d34u: goto label_2a4d34;
        case 0x2a4d38u: goto label_2a4d38;
        case 0x2a4d3cu: goto label_2a4d3c;
        case 0x2a4d40u: goto label_2a4d40;
        case 0x2a4d44u: goto label_2a4d44;
        case 0x2a4d48u: goto label_2a4d48;
        case 0x2a4d4cu: goto label_2a4d4c;
        case 0x2a4d50u: goto label_2a4d50;
        case 0x2a4d54u: goto label_2a4d54;
        case 0x2a4d58u: goto label_2a4d58;
        case 0x2a4d5cu: goto label_2a4d5c;
        case 0x2a4d60u: goto label_2a4d60;
        case 0x2a4d64u: goto label_2a4d64;
        case 0x2a4d68u: goto label_2a4d68;
        case 0x2a4d6cu: goto label_2a4d6c;
        case 0x2a4d70u: goto label_2a4d70;
        case 0x2a4d74u: goto label_2a4d74;
        case 0x2a4d78u: goto label_2a4d78;
        case 0x2a4d7cu: goto label_2a4d7c;
        case 0x2a4d80u: goto label_2a4d80;
        case 0x2a4d84u: goto label_2a4d84;
        case 0x2a4d88u: goto label_2a4d88;
        case 0x2a4d8cu: goto label_2a4d8c;
        case 0x2a4d90u: goto label_2a4d90;
        case 0x2a4d94u: goto label_2a4d94;
        case 0x2a4d98u: goto label_2a4d98;
        case 0x2a4d9cu: goto label_2a4d9c;
        case 0x2a4da0u: goto label_2a4da0;
        case 0x2a4da4u: goto label_2a4da4;
        case 0x2a4da8u: goto label_2a4da8;
        case 0x2a4dacu: goto label_2a4dac;
        case 0x2a4db0u: goto label_2a4db0;
        case 0x2a4db4u: goto label_2a4db4;
        case 0x2a4db8u: goto label_2a4db8;
        case 0x2a4dbcu: goto label_2a4dbc;
        case 0x2a4dc0u: goto label_2a4dc0;
        case 0x2a4dc4u: goto label_2a4dc4;
        default: break;
    }

    ctx->pc = 0x2a4cb8u;

label_2a4cb8:
    // 0x2a4cb8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2a4cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2a4cbc:
    // 0x2a4cbc: 0x63400  sll         $a2, $a2, 16
    ctx->pc = 0x2a4cbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 16));
label_2a4cc0:
    // 0x2a4cc0: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x2a4cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_2a4cc4:
    // 0x2a4cc4: 0x73c00  sll         $a3, $a3, 16
    ctx->pc = 0x2a4cc4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 16));
label_2a4cc8:
    // 0x2a4cc8: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x2a4cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_2a4ccc:
    // 0x2a4ccc: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x2a4cccu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_2a4cd0:
    // 0x2a4cd0: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x2a4cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_2a4cd4:
    // 0x2a4cd4: 0x69c03  sra         $s3, $a2, 16
    ctx->pc = 0x2a4cd4u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 6), 16));
label_2a4cd8:
    // 0x2a4cd8: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2a4cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2a4cdc:
    // 0x2a4cdc: 0x7a403  sra         $s4, $a3, 16
    ctx->pc = 0x2a4cdcu;
    SET_GPR_S32(ctx, 20, SRA32(GPR_S32(ctx, 7), 16));
label_2a4ce0:
    // 0x2a4ce0: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x2a4ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_2a4ce4:
    // 0x2a4ce4: 0x9ac03  sra         $s5, $t1, 16
    ctx->pc = 0x2a4ce4u;
    SET_GPR_S32(ctx, 21, SRA32(GPR_S32(ctx, 9), 16));
label_2a4ce8:
    // 0x2a4ce8: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x2a4ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_2a4cec:
    // 0x2a4cec: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2a4cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2a4cf0:
    // 0x2a4cf0: 0xafa50034  sw          $a1, 0x34($sp)
    ctx->pc = 0x2a4cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 5));
label_2a4cf4:
    // 0x2a4cf4: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x2a4cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_2a4cf8:
    // 0x2a4cf8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a4cfc:
    // 0x2a4cfc: 0xc0e409a  jal         func_390268
label_2a4d00:
    if (ctx->pc == 0x2A4D00u) {
        ctx->pc = 0x2A4D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4CFCu;
        // 0x2a4d00: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D04u;
        goto label_2a4d04;
    }
    ctx->pc = 0x2A4CFCu;
    SET_GPR_U32(ctx, 31, 0x2A4D04u);
    ctx->pc = 0x2A4D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4CFCu;
    // 0x2a4d00: 0x100902d  daddu       $s2, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2A4CFCu, 0x2A4D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D04u;
label_2a4d04:
    // 0x2a4d04: 0xc087502  jal         func_21D408
label_2a4d08:
    if (ctx->pc == 0x2A4D08u) {
        ctx->pc = 0x2A4D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D04u;
        // 0x2a4d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D0Cu;
        goto label_2a4d0c;
    }
    ctx->pc = 0x2A4D04u;
    SET_GPR_U32(ctx, 31, 0x2A4D0Cu);
    ctx->pc = 0x2A4D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D04u;
    // 0x2a4d08: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2A4D04u, 0x2A4D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D0Cu;
label_2a4d0c:
    // 0x2a4d0c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a4d0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d10:
    // 0x2a4d10: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x2a4d10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_2a4d14:
    // 0x2a4d14: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x2a4d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2a4d18:
    // 0x2a4d18: 0x8c62bd30  lw          $v0, -0x42D0($v1)
    ctx->pc = 0x2a4d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294950192)));
label_2a4d1c:
    // 0x2a4d1c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2a4d20:
    if (ctx->pc == 0x2A4D20u) {
        ctx->pc = 0x2A4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D1Cu;
        // 0x2a4d20: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D24u;
        goto label_2a4d24;
    }
    ctx->pc = 0x2A4D1Cu;
    {
        const bool branch_taken_0x2a4d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A4D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D1Cu;
        // 0x2a4d20: 0x27a50034  addiu       $a1, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d1c) {
            ctx->pc = 0x2A4D40u;
            goto label_2a4d40;
        }
    }
    ctx->pc = 0x2A4D24u;
label_2a4d24:
    // 0x2a4d24: 0xc0e40a2  jal         func_390288
label_2a4d28:
    if (ctx->pc == 0x2A4D28u) {
        ctx->pc = 0x2A4D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D24u;
        // 0x2a4d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D2Cu;
        goto label_2a4d2c;
    }
    ctx->pc = 0x2A4D24u;
    SET_GPR_U32(ctx, 31, 0x2A4D2Cu);
    ctx->pc = 0x2A4D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D24u;
    // 0x2a4d28: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390288u, 0x2A4D24u, 0x2A4D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D2Cu;
label_2a4d2c:
    // 0x2a4d2c: 0xc10587a  jal         func_4161E8
label_2a4d30:
    if (ctx->pc == 0x2A4D30u) {
        ctx->pc = 0x2A4D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D2Cu;
        // 0x2a4d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D34u;
        goto label_2a4d34;
    }
    ctx->pc = 0x2A4D2Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D34u);
    ctx->pc = 0x2A4D30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D2Cu;
    // 0x2a4d30: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4161E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4161E8u, 0x2A4D2Cu, 0x2A4D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D34u;
label_2a4d34:
    // 0x2a4d34: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2a4d34u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4d38:
    // 0x2a4d38: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a4d3c:
    if (ctx->pc == 0x2A4D3Cu) {
        ctx->pc = 0x2A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D38u;
        // 0x2a4d3c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D40u;
        goto label_2a4d40;
    }
    ctx->pc = 0x2A4D38u;
    {
        const bool branch_taken_0x2a4d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D38u;
        // 0x2a4d3c: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d38) {
            ctx->pc = 0x2A4D64u;
            goto label_2a4d64;
        }
    }
    ctx->pc = 0x2A4D40u;
label_2a4d40:
    // 0x2a4d40: 0x8e260000  lw          $a2, 0x0($s1)
    ctx->pc = 0x2a4d40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2a4d44:
    // 0x2a4d44: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2a4d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2a4d48:
    // 0x2a4d48: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2a4d48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2a4d4c:
    // 0x2a4d4c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2a4d4cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2a4d50:
    // 0x2a4d50: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2a4d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2a4d54:
    // 0x2a4d54: 0x60f809  jalr        $v1
label_2a4d58:
    if (ctx->pc == 0x2A4D58u) {
        ctx->pc = 0x2A4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D54u;
        // 0x2a4d58: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D5Cu;
        goto label_2a4d5c;
    }
    ctx->pc = 0x2A4D54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2A4D5Cu);
        ctx->pc = 0x2A4D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D54u;
        // 0x2a4d58: 0xc52821  addu        $a1, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4D54u, 0x2A4D5Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2A4D5Cu;
label_2a4d5c:
    // 0x2a4d5c: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x2a4d5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2a4d60:
    // 0x2a4d60: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x2a4d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_2a4d64:
    // 0x2a4d64: 0xc0a4e54  jal         func_293950
label_2a4d68:
    if (ctx->pc == 0x2A4D68u) {
        ctx->pc = 0x2A4D6Cu;
        goto label_2a4d6c;
    }
    ctx->pc = 0x2A4D64u;
    SET_GPR_U32(ctx, 31, 0x2A4D6Cu);
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2A4D64u, 0x2A4D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D6Cu;
label_2a4d6c:
    // 0x2a4d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a4d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d70:
    // 0x2a4d70: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_2a4d74:
    if (ctx->pc == 0x2A4D74u) {
        ctx->pc = 0x2A4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D70u;
        // 0x2a4d74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D78u;
        goto label_2a4d78;
    }
    ctx->pc = 0x2A4D70u;
    {
        const bool branch_taken_0x2a4d70 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D70u;
        // 0x2a4d74: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4d70) {
            ctx->pc = 0x2A4D94u;
            goto label_2a4d94;
        }
    }
    ctx->pc = 0x2A4D78u;
label_2a4d78:
    // 0x2a4d78: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x2a4d78u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d7c:
    // 0x2a4d7c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2a4d7cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d80:
    // 0x2a4d80: 0x2a0502d  daddu       $t2, $s5, $zero
    ctx->pc = 0x2a4d80u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d84:
    // 0x2a4d84: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2a4d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d88:
    // 0x2a4d88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2a4d88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d8c:
    // 0x2a4d8c: 0xc0a9372  jal         func_2A4DC8
label_2a4d90:
    if (ctx->pc == 0x2A4D90u) {
        ctx->pc = 0x2A4D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D8Cu;
        // 0x2a4d90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4D94u;
        goto label_2a4d94;
    }
    ctx->pc = 0x2A4D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A4D94u);
    ctx->pc = 0x2A4D90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D8Cu;
    // 0x2a4d90: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A4DC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A4DC8u, 0x2A4D8Cu, 0x2A4D94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4D94u;
label_2a4d94:
    // 0x2a4d94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a4d94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a4d98:
    // 0x2a4d98: 0xc0a35d6  jal         func_28D758
label_2a4d9c:
    if (ctx->pc == 0x2A4D9Cu) {
        ctx->pc = 0x2A4D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4D98u;
        // 0x2a4d9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4DA0u;
        goto label_2a4da0;
    }
    ctx->pc = 0x2A4D98u;
    SET_GPR_U32(ctx, 31, 0x2A4DA0u);
    ctx->pc = 0x2A4D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2A4D98u;
    // 0x2a4d9c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2A4D98u, 0x2A4DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A4DA0u;
label_2a4da0:
    // 0x2a4da0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x2a4da0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_2a4da4:
    // 0x2a4da4: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x2a4da4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2a4da8:
    // 0x2a4da8: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x2a4da8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_2a4dac:
    // 0x2a4dac: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x2a4dacu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2a4db0:
    // 0x2a4db0: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x2a4db0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2a4db4:
    // 0x2a4db4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2a4db4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2a4db8:
    // 0x2a4db8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a4db8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a4dbc:
    // 0x2a4dbc: 0x3e00008  jr          $ra
label_2a4dc0:
    if (ctx->pc == 0x2A4DC0u) {
        ctx->pc = 0x2A4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DBCu;
        // 0x2a4dc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2A4DC4u;
        goto label_2a4dc4;
    }
    ctx->pc = 0x2A4DBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A4DC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A4DBCu;
        // 0x2a4dc0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A4DBCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A4DC4u;
label_2a4dc4:
    // 0x2a4dc4: 0x0  nop
    ctx->pc = 0x2a4dc4u;
    // NOP
    ctx->pc = 0x2a4dc8u;
}
