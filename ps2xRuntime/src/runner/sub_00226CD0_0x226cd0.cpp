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

// Function: sub_00226CD0
// Address: 0x226cd0 - 0x226e20
void sub_00226CD0_0x226cd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226CD0_0x226cd0");
#endif

    switch (ctx->pc) {
        case 0x226cd0u: goto label_226cd0;
        case 0x226cd4u: goto label_226cd4;
        case 0x226cd8u: goto label_226cd8;
        case 0x226cdcu: goto label_226cdc;
        case 0x226ce0u: goto label_226ce0;
        case 0x226ce4u: goto label_226ce4;
        case 0x226ce8u: goto label_226ce8;
        case 0x226cecu: goto label_226cec;
        case 0x226cf0u: goto label_226cf0;
        case 0x226cf4u: goto label_226cf4;
        case 0x226cf8u: goto label_226cf8;
        case 0x226cfcu: goto label_226cfc;
        case 0x226d00u: goto label_226d00;
        case 0x226d04u: goto label_226d04;
        case 0x226d08u: goto label_226d08;
        case 0x226d0cu: goto label_226d0c;
        case 0x226d10u: goto label_226d10;
        case 0x226d14u: goto label_226d14;
        case 0x226d18u: goto label_226d18;
        case 0x226d1cu: goto label_226d1c;
        case 0x226d20u: goto label_226d20;
        case 0x226d24u: goto label_226d24;
        case 0x226d28u: goto label_226d28;
        case 0x226d2cu: goto label_226d2c;
        case 0x226d30u: goto label_226d30;
        case 0x226d34u: goto label_226d34;
        case 0x226d38u: goto label_226d38;
        case 0x226d3cu: goto label_226d3c;
        case 0x226d40u: goto label_226d40;
        case 0x226d44u: goto label_226d44;
        case 0x226d48u: goto label_226d48;
        case 0x226d4cu: goto label_226d4c;
        case 0x226d50u: goto label_226d50;
        case 0x226d54u: goto label_226d54;
        case 0x226d58u: goto label_226d58;
        case 0x226d5cu: goto label_226d5c;
        case 0x226d60u: goto label_226d60;
        case 0x226d64u: goto label_226d64;
        case 0x226d68u: goto label_226d68;
        case 0x226d6cu: goto label_226d6c;
        case 0x226d70u: goto label_226d70;
        case 0x226d74u: goto label_226d74;
        case 0x226d78u: goto label_226d78;
        case 0x226d7cu: goto label_226d7c;
        case 0x226d80u: goto label_226d80;
        case 0x226d84u: goto label_226d84;
        case 0x226d88u: goto label_226d88;
        case 0x226d8cu: goto label_226d8c;
        case 0x226d90u: goto label_226d90;
        case 0x226d94u: goto label_226d94;
        case 0x226d98u: goto label_226d98;
        case 0x226d9cu: goto label_226d9c;
        case 0x226da0u: goto label_226da0;
        case 0x226da4u: goto label_226da4;
        case 0x226da8u: goto label_226da8;
        case 0x226dacu: goto label_226dac;
        case 0x226db0u: goto label_226db0;
        case 0x226db4u: goto label_226db4;
        case 0x226db8u: goto label_226db8;
        case 0x226dbcu: goto label_226dbc;
        case 0x226dc0u: goto label_226dc0;
        case 0x226dc4u: goto label_226dc4;
        case 0x226dc8u: goto label_226dc8;
        case 0x226dccu: goto label_226dcc;
        case 0x226dd0u: goto label_226dd0;
        case 0x226dd4u: goto label_226dd4;
        case 0x226dd8u: goto label_226dd8;
        case 0x226ddcu: goto label_226ddc;
        case 0x226de0u: goto label_226de0;
        case 0x226de4u: goto label_226de4;
        case 0x226de8u: goto label_226de8;
        case 0x226decu: goto label_226dec;
        case 0x226df0u: goto label_226df0;
        case 0x226df4u: goto label_226df4;
        case 0x226df8u: goto label_226df8;
        case 0x226dfcu: goto label_226dfc;
        case 0x226e00u: goto label_226e00;
        case 0x226e04u: goto label_226e04;
        case 0x226e08u: goto label_226e08;
        case 0x226e0cu: goto label_226e0c;
        case 0x226e10u: goto label_226e10;
        case 0x226e14u: goto label_226e14;
        case 0x226e18u: goto label_226e18;
        case 0x226e1cu: goto label_226e1c;
        default: break;
    }

    ctx->pc = 0x226cd0u;

label_226cd0:
    // 0x226cd0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x226cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_226cd4:
    // 0x226cd4: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x226cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_226cd8:
    // 0x226cd8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x226cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_226cdc:
    // 0x226cdc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x226cdcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_226ce0:
    // 0x226ce0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x226ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_226ce4:
    // 0x226ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x226ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_226ce8:
    // 0x226ce8: 0xc0874fa  jal         func_21D3E8
label_226cec:
    if (ctx->pc == 0x226CECu) {
        ctx->pc = 0x226CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CE8u;
        // 0x226cec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226CF0u;
        goto label_226cf0;
    }
    ctx->pc = 0x226CE8u;
    SET_GPR_U32(ctx, 31, 0x226CF0u);
    ctx->pc = 0x226CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CE8u;
    // 0x226cec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x226CE8u, 0x226CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226CF0u;
label_226cf0:
    // 0x226cf0: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x226cf0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
label_226cf4:
    // 0x226cf4: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_226cf8:
    if (ctx->pc == 0x226CF8u) {
        ctx->pc = 0x226CFCu;
        goto label_226cfc;
    }
    ctx->pc = 0x226CF4u;
    {
        const bool branch_taken_0x226cf4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x226cf4) {
            ctx->pc = 0x226D0Cu;
            goto label_226d0c;
        }
    }
    ctx->pc = 0x226CFCu;
label_226cfc:
    // 0x226cfc: 0xc089f22  jal         func_227C88
label_226d00:
    if (ctx->pc == 0x226D00u) {
        ctx->pc = 0x226D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226CFCu;
        // 0x226d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D04u;
        goto label_226d04;
    }
    ctx->pc = 0x226CFCu;
    SET_GPR_U32(ctx, 31, 0x226D04u);
    ctx->pc = 0x226D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226CFCu;
    // 0x226d00: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227C88u, 0x226CFCu, 0x226D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D04u;
label_226d04:
    // 0x226d04: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
label_226d08:
    if (ctx->pc == 0x226D08u) {
        ctx->pc = 0x226D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D04u;
        // 0x226d08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D0Cu;
        goto label_226d0c;
    }
    ctx->pc = 0x226D04u;
    {
        const bool branch_taken_0x226d04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D04u;
        // 0x226d08: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d04) {
            ctx->pc = 0x226E0Cu;
            goto label_226e0c;
        }
    }
    ctx->pc = 0x226D0Cu;
label_226d0c:
    // 0x226d0c: 0xc08a61a  jal         func_229868
label_226d10:
    if (ctx->pc == 0x226D10u) {
        ctx->pc = 0x226D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D0Cu;
        // 0x226d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D14u;
        goto label_226d14;
    }
    ctx->pc = 0x226D0Cu;
    SET_GPR_U32(ctx, 31, 0x226D14u);
    ctx->pc = 0x226D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D0Cu;
    // 0x226d10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x226D0Cu, 0x226D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D14u;
label_226d14:
    // 0x226d14: 0x5220000e  beql        $s1, $zero, . + 4 + (0xE << 2)
label_226d18:
    if (ctx->pc == 0x226D18u) {
        ctx->pc = 0x226D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D14u;
        // 0x226d18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D1Cu;
        goto label_226d1c;
    }
    ctx->pc = 0x226D14u;
    {
        const bool branch_taken_0x226d14 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d14) {
            ctx->pc = 0x226D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226D14u;
            // 0x226d18: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226D50u;
            goto label_226d50;
        }
    }
    ctx->pc = 0x226D1Cu;
label_226d1c:
    // 0x226d1c: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_226d20:
    if (ctx->pc == 0x226D20u) {
        ctx->pc = 0x226D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D1Cu;
        // 0x226d20: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D24u;
        goto label_226d24;
    }
    ctx->pc = 0x226D1Cu;
    {
        const bool branch_taken_0x226d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226d1c) {
            ctx->pc = 0x226D20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x226D1Cu;
            // 0x226d20: 0x8e230000  lw          $v1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x226D38u;
            goto label_226d38;
        }
    }
    ctx->pc = 0x226D24u;
label_226d24:
    // 0x226d24: 0xc089f5e  jal         func_227D78
label_226d28:
    if (ctx->pc == 0x226D28u) {
        ctx->pc = 0x226D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D24u;
        // 0x226d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D2Cu;
        goto label_226d2c;
    }
    ctx->pc = 0x226D24u;
    SET_GPR_U32(ctx, 31, 0x226D2Cu);
    ctx->pc = 0x226D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D24u;
    // 0x226d28: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D78u, 0x226D24u, 0x226D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D2Cu;
label_226d2c:
    // 0x226d2c: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_226d30:
    if (ctx->pc == 0x226D30u) {
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D2Cu;
        // 0x226d30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D34u;
        goto label_226d34;
    }
    ctx->pc = 0x226D2Cu;
    {
        const bool branch_taken_0x226d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D2Cu;
        // 0x226d30: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d2c) {
            ctx->pc = 0x226E0Cu;
            goto label_226e0c;
        }
    }
    ctx->pc = 0x226D34u;
label_226d34:
    // 0x226d34: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x226d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_226d38:
    // 0x226d38: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226d38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226d3c:
    // 0x226d3c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226d40:
    // 0x226d40: 0x40f809  jalr        $v0
label_226d44:
    if (ctx->pc == 0x226D44u) {
        ctx->pc = 0x226D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D40u;
        // 0x226d44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D48u;
        goto label_226d48;
    }
    ctx->pc = 0x226D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226D48u);
        ctx->pc = 0x226D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D40u;
        // 0x226d44: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226D40u, 0x226D48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226D48u;
label_226d48:
    // 0x226d48: 0x10000002  b           . + 4 + (0x2 << 2)
label_226d4c:
    if (ctx->pc == 0x226D4Cu) {
        ctx->pc = 0x226D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D48u;
        // 0x226d4c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D50u;
        goto label_226d50;
    }
    ctx->pc = 0x226D48u;
    {
        const bool branch_taken_0x226d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D48u;
        // 0x226d4c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d48) {
            ctx->pc = 0x226D54u;
            goto label_226d54;
        }
    }
    ctx->pc = 0x226D50u;
label_226d50:
    // 0x226d50: 0x8c43bd30  lw          $v1, -0x42D0($v0)
    ctx->pc = 0x226d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_226d54:
    // 0x226d54: 0x824201b0  lb          $v0, 0x1B0($s2)
    ctx->pc = 0x226d54u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 432)));
label_226d58:
    // 0x226d58: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x226d58u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_226d5c:
    // 0x226d5c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_226d60:
    if (ctx->pc == 0x226D60u) {
        ctx->pc = 0x226D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D5Cu;
        // 0x226d60: 0xae4300c8  sw          $v1, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D64u;
        goto label_226d64;
    }
    ctx->pc = 0x226D5Cu;
    {
        const bool branch_taken_0x226d5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D5Cu;
        // 0x226d60: 0xae4300c8  sw          $v1, 0xC8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 200), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d5c) {
            ctx->pc = 0x226DA0u;
            goto label_226da0;
        }
    }
    ctx->pc = 0x226D64u;
label_226d64:
    // 0x226d64: 0xc087502  jal         func_21D408
label_226d68:
    if (ctx->pc == 0x226D68u) {
        ctx->pc = 0x226D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D64u;
        // 0x226d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D6Cu;
        goto label_226d6c;
    }
    ctx->pc = 0x226D64u;
    SET_GPR_U32(ctx, 31, 0x226D6Cu);
    ctx->pc = 0x226D68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D64u;
    // 0x226d68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226D64u, 0x226D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D6Cu;
label_226d6c:
    // 0x226d6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x226d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226d70:
    // 0x226d70: 0xc08a61a  jal         func_229868
label_226d74:
    if (ctx->pc == 0x226D74u) {
        ctx->pc = 0x226D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D70u;
        // 0x226d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D78u;
        goto label_226d78;
    }
    ctx->pc = 0x226D70u;
    SET_GPR_U32(ctx, 31, 0x226D78u);
    ctx->pc = 0x226D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D70u;
    // 0x226d74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x226D70u, 0x226D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D78u;
label_226d78:
    // 0x226d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x226d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_226d7c:
    // 0x226d7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x226d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226d80:
    // 0x226d80: 0xc0a33f8  jal         func_28CFE0
label_226d84:
    if (ctx->pc == 0x226D84u) {
        ctx->pc = 0x226D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D80u;
        // 0x226d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D88u;
        goto label_226d88;
    }
    ctx->pc = 0x226D80u;
    SET_GPR_U32(ctx, 31, 0x226D88u);
    ctx->pc = 0x226D84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D80u;
    // 0x226d84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x226D80u, 0x226D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D88u;
label_226d88:
    // 0x226d88: 0xc087502  jal         func_21D408
label_226d8c:
    if (ctx->pc == 0x226D8Cu) {
        ctx->pc = 0x226D8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D88u;
        // 0x226d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D90u;
        goto label_226d90;
    }
    ctx->pc = 0x226D88u;
    SET_GPR_U32(ctx, 31, 0x226D90u);
    ctx->pc = 0x226D8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226D88u;
    // 0x226d8c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226D88u, 0x226D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226D90u;
label_226d90:
    // 0x226d90: 0x16200013  bnez        $s1, . + 4 + (0x13 << 2)
label_226d94:
    if (ctx->pc == 0x226D94u) {
        ctx->pc = 0x226D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D90u;
        // 0x226d94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226D98u;
        goto label_226d98;
    }
    ctx->pc = 0x226D90u;
    {
        const bool branch_taken_0x226d90 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x226D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D90u;
        // 0x226d94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d90) {
            ctx->pc = 0x226DE0u;
            goto label_226de0;
        }
    }
    ctx->pc = 0x226D98u;
label_226d98:
    // 0x226d98: 0x10000019  b           . + 4 + (0x19 << 2)
label_226d9c:
    if (ctx->pc == 0x226D9Cu) {
        ctx->pc = 0x226D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D98u;
        // 0x226d9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DA0u;
        goto label_226da0;
    }
    ctx->pc = 0x226D98u;
    {
        const bool branch_taken_0x226d98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226D98u;
        // 0x226d9c: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226d98) {
            ctx->pc = 0x226E00u;
            goto label_226e00;
        }
    }
    ctx->pc = 0x226DA0u;
label_226da0:
    // 0x226da0: 0xc08a61a  jal         func_229868
label_226da4:
    if (ctx->pc == 0x226DA4u) {
        ctx->pc = 0x226DA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DA0u;
        // 0x226da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DA8u;
        goto label_226da8;
    }
    ctx->pc = 0x226DA0u;
    SET_GPR_U32(ctx, 31, 0x226DA8u);
    ctx->pc = 0x226DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DA0u;
    // 0x226da4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x226DA0u, 0x226DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DA8u;
label_226da8:
    // 0x226da8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_226dac:
    if (ctx->pc == 0x226DACu) {
        ctx->pc = 0x226DB0u;
        goto label_226db0;
    }
    ctx->pc = 0x226DA8u;
    {
        const bool branch_taken_0x226da8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x226da8) {
            ctx->pc = 0x226DD0u;
            goto label_226dd0;
        }
    }
    ctx->pc = 0x226DB0u;
label_226db0:
    // 0x226db0: 0xc087502  jal         func_21D408
label_226db4:
    if (ctx->pc == 0x226DB4u) {
        ctx->pc = 0x226DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DB0u;
        // 0x226db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DB8u;
        goto label_226db8;
    }
    ctx->pc = 0x226DB0u;
    SET_GPR_U32(ctx, 31, 0x226DB8u);
    ctx->pc = 0x226DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DB0u;
    // 0x226db4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226DB0u, 0x226DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DB8u;
label_226db8:
    // 0x226db8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226db8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_226dbc:
    // 0x226dbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x226dbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_226dc0:
    // 0x226dc0: 0xc0a33f8  jal         func_28CFE0
label_226dc4:
    if (ctx->pc == 0x226DC4u) {
        ctx->pc = 0x226DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DC0u;
        // 0x226dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DC8u;
        goto label_226dc8;
    }
    ctx->pc = 0x226DC0u;
    SET_GPR_U32(ctx, 31, 0x226DC8u);
    ctx->pc = 0x226DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DC0u;
    // 0x226dc4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CFE0u, 0x226DC0u, 0x226DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DC8u;
label_226dc8:
    // 0x226dc8: 0x10000010  b           . + 4 + (0x10 << 2)
label_226dcc:
    if (ctx->pc == 0x226DCCu) {
        ctx->pc = 0x226DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DC8u;
        // 0x226dcc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DD0u;
        goto label_226dd0;
    }
    ctx->pc = 0x226DC8u;
    {
        const bool branch_taken_0x226dc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DC8u;
        // 0x226dcc: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226dc8) {
            ctx->pc = 0x226E0Cu;
            goto label_226e0c;
        }
    }
    ctx->pc = 0x226DD0u;
label_226dd0:
    // 0x226dd0: 0xc087502  jal         func_21D408
label_226dd4:
    if (ctx->pc == 0x226DD4u) {
        ctx->pc = 0x226DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DD0u;
        // 0x226dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DD8u;
        goto label_226dd8;
    }
    ctx->pc = 0x226DD0u;
    SET_GPR_U32(ctx, 31, 0x226DD8u);
    ctx->pc = 0x226DD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x226DD0u;
    // 0x226dd4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x226DD0u, 0x226DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226DD8u;
label_226dd8:
    // 0x226dd8: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
label_226ddc:
    if (ctx->pc == 0x226DDCu) {
        ctx->pc = 0x226DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DD8u;
        // 0x226ddc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DE0u;
        goto label_226de0;
    }
    ctx->pc = 0x226DD8u;
    {
        const bool branch_taken_0x226dd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DD8u;
        // 0x226ddc: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226dd8) {
            ctx->pc = 0x226DFCu;
            goto label_226dfc;
        }
    }
    ctx->pc = 0x226DE0u;
label_226de0:
    // 0x226de0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x226de0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_226de4:
    // 0x226de4: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x226de4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_226de8:
    // 0x226de8: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x226de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_226dec:
    // 0x226dec: 0x40f809  jalr        $v0
label_226df0:
    if (ctx->pc == 0x226DF0u) {
        ctx->pc = 0x226DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DECu;
        // 0x226df0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DF4u;
        goto label_226df4;
    }
    ctx->pc = 0x226DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x226DF4u);
        ctx->pc = 0x226DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DECu;
        // 0x226df0: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226DECu, 0x226DF4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x226DF4u;
label_226df4:
    // 0x226df4: 0x10000004  b           . + 4 + (0x4 << 2)
label_226df8:
    if (ctx->pc == 0x226DF8u) {
        ctx->pc = 0x226DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DF4u;
        // 0x226df8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226DFCu;
        goto label_226dfc;
    }
    ctx->pc = 0x226DF4u;
    {
        const bool branch_taken_0x226df4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x226DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226DF4u;
        // 0x226df8: 0xae020128  sw          $v0, 0x128($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x226df4) {
            ctx->pc = 0x226E08u;
            goto label_226e08;
        }
    }
    ctx->pc = 0x226DFCu;
label_226dfc:
    // 0x226dfc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x226dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_226e00:
    // 0x226e00: 0x8c42bd30  lw          $v0, -0x42D0($v0)
    ctx->pc = 0x226e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
label_226e04:
    // 0x226e04: 0xae020128  sw          $v0, 0x128($s0)
    ctx->pc = 0x226e04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 2));
label_226e08:
    // 0x226e08: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x226e08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_226e0c:
    // 0x226e0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x226e0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_226e10:
    // 0x226e10: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x226e10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_226e14:
    // 0x226e14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x226e14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_226e18:
    // 0x226e18: 0x3e00008  jr          $ra
label_226e1c:
    if (ctx->pc == 0x226E1Cu) {
        ctx->pc = 0x226E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E18u;
        // 0x226e1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x226E20u;
        goto label_fallthrough_0x226e18;
    }
    ctx->pc = 0x226E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x226E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x226E18u;
        // 0x226e1c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x226E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x226e18:
    ctx->pc = 0x226E20u;
}
