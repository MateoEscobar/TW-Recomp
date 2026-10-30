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

// Function: sub_00239F20
// Address: 0x239f20 - 0x23a058
void sub_00239F20_0x239f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239F20_0x239f20");
#endif

    switch (ctx->pc) {
        case 0x239f20u: goto label_239f20;
        case 0x239f24u: goto label_239f24;
        case 0x239f28u: goto label_239f28;
        case 0x239f2cu: goto label_239f2c;
        case 0x239f30u: goto label_239f30;
        case 0x239f34u: goto label_239f34;
        case 0x239f38u: goto label_239f38;
        case 0x239f3cu: goto label_239f3c;
        case 0x239f40u: goto label_239f40;
        case 0x239f44u: goto label_239f44;
        case 0x239f48u: goto label_239f48;
        case 0x239f4cu: goto label_239f4c;
        case 0x239f50u: goto label_239f50;
        case 0x239f54u: goto label_239f54;
        case 0x239f58u: goto label_239f58;
        case 0x239f5cu: goto label_239f5c;
        case 0x239f60u: goto label_239f60;
        case 0x239f64u: goto label_239f64;
        case 0x239f68u: goto label_239f68;
        case 0x239f6cu: goto label_239f6c;
        case 0x239f70u: goto label_239f70;
        case 0x239f74u: goto label_239f74;
        case 0x239f78u: goto label_239f78;
        case 0x239f7cu: goto label_239f7c;
        case 0x239f80u: goto label_239f80;
        case 0x239f84u: goto label_239f84;
        case 0x239f88u: goto label_239f88;
        case 0x239f8cu: goto label_239f8c;
        case 0x239f90u: goto label_239f90;
        case 0x239f94u: goto label_239f94;
        case 0x239f98u: goto label_239f98;
        case 0x239f9cu: goto label_239f9c;
        case 0x239fa0u: goto label_239fa0;
        case 0x239fa4u: goto label_239fa4;
        case 0x239fa8u: goto label_239fa8;
        case 0x239facu: goto label_239fac;
        case 0x239fb0u: goto label_239fb0;
        case 0x239fb4u: goto label_239fb4;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fbcu: goto label_239fbc;
        case 0x239fc0u: goto label_239fc0;
        case 0x239fc4u: goto label_239fc4;
        case 0x239fc8u: goto label_239fc8;
        case 0x239fccu: goto label_239fcc;
        case 0x239fd0u: goto label_239fd0;
        case 0x239fd4u: goto label_239fd4;
        case 0x239fd8u: goto label_239fd8;
        case 0x239fdcu: goto label_239fdc;
        case 0x239fe0u: goto label_239fe0;
        case 0x239fe4u: goto label_239fe4;
        case 0x239fe8u: goto label_239fe8;
        case 0x239fecu: goto label_239fec;
        case 0x239ff0u: goto label_239ff0;
        case 0x239ff4u: goto label_239ff4;
        case 0x239ff8u: goto label_239ff8;
        case 0x239ffcu: goto label_239ffc;
        case 0x23a000u: goto label_23a000;
        case 0x23a004u: goto label_23a004;
        case 0x23a008u: goto label_23a008;
        case 0x23a00cu: goto label_23a00c;
        case 0x23a010u: goto label_23a010;
        case 0x23a014u: goto label_23a014;
        case 0x23a018u: goto label_23a018;
        case 0x23a01cu: goto label_23a01c;
        case 0x23a020u: goto label_23a020;
        case 0x23a024u: goto label_23a024;
        case 0x23a028u: goto label_23a028;
        case 0x23a02cu: goto label_23a02c;
        case 0x23a030u: goto label_23a030;
        case 0x23a034u: goto label_23a034;
        case 0x23a038u: goto label_23a038;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a040u: goto label_23a040;
        case 0x23a044u: goto label_23a044;
        case 0x23a048u: goto label_23a048;
        case 0x23a04cu: goto label_23a04c;
        case 0x23a050u: goto label_23a050;
        case 0x23a054u: goto label_23a054;
        default: break;
    }

    ctx->pc = 0x239f20u;

label_239f20:
    // 0x239f20: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x239f20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_239f24:
    // 0x239f24: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x239f24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_239f28:
    // 0x239f28: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x239f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_239f2c:
    // 0x239f2c: 0x97a40002  lhu         $a0, 0x2($sp)
    ctx->pc = 0x239f2cu;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 2)));
label_239f30:
    // 0x239f30: 0x140882d  daddu       $s1, $t2, $zero
    ctx->pc = 0x239f30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_239f34:
    // 0x239f34: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x239f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_239f38:
    // 0x239f38: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x239f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_239f3c:
    // 0x239f3c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x239f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
label_239f40:
    // 0x239f40: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x239f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_239f44:
    // 0x239f44: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x239f44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239f48:
    // 0x239f48: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x239f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_239f4c:
    // 0x239f4c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x239f4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_239f50:
    // 0x239f50: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x239f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_239f54:
    // 0x239f54: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x239f54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_239f58:
    // 0x239f58: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x239f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_239f5c:
    // 0x239f5c: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x239f5cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_239f60:
    // 0x239f60: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x239f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_239f64:
    // 0x239f64: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x239f64u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_239f68:
    // 0x239f68: 0xc0e402c  jal         func_3900B0
label_239f6c:
    if (ctx->pc == 0x239F6Cu) {
        ctx->pc = 0x239F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F68u;
        // 0x239f6c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F70u;
        goto label_239f70;
    }
    ctx->pc = 0x239F68u;
    SET_GPR_U32(ctx, 31, 0x239F70u);
    ctx->pc = 0x239F6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F68u;
    // 0x239f6c: 0x42403  sra         $a0, $a0, 16 (Delay Slot)
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3900B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3900B0u, 0x239F68u, 0x239F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F70u;
label_239f70:
    // 0x239f70: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239f70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239f74:
    // 0x239f74: 0x1200002e  beqz        $s0, . + 4 + (0x2E << 2)
label_239f78:
    if (ctx->pc == 0x239F78u) {
        ctx->pc = 0x239F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F74u;
        // 0x239f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F7Cu;
        goto label_239f7c;
    }
    ctx->pc = 0x239F74u;
    {
        const bool branch_taken_0x239f74 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F74u;
        // 0x239f78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f74) {
            ctx->pc = 0x23A030u;
            goto label_23a030;
        }
    }
    ctx->pc = 0x239F7Cu;
label_239f7c:
    // 0x239f7c: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_239f80:
    if (ctx->pc == 0x239F80u) {
        ctx->pc = 0x239F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F7Cu;
        // 0x239f80: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F84u;
        goto label_239f84;
    }
    ctx->pc = 0x239F7Cu;
    {
        const bool branch_taken_0x239f7c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x239F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F7Cu;
        // 0x239f80: 0x3c050056  lui         $a1, 0x56 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f7c) {
            ctx->pc = 0x239F94u;
            goto label_239f94;
        }
    }
    ctx->pc = 0x239F84u;
label_239f84:
    // 0x239f84: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x239f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_239f88:
    // 0x239f88: 0x24a5c6e0  addiu       $a1, $a1, -0x3920
    ctx->pc = 0x239f88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952672));
label_239f8c:
    // 0x239f8c: 0xc08e2a2  jal         func_238A88
label_239f90:
    if (ctx->pc == 0x239F90u) {
        ctx->pc = 0x239F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239F8Cu;
        // 0x239f90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239F94u;
        goto label_239f94;
    }
    ctx->pc = 0x239F8Cu;
    SET_GPR_U32(ctx, 31, 0x239F94u);
    ctx->pc = 0x239F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239F8Cu;
    // 0x239f90: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x238A88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x238A88u, 0x239F8Cu, 0x239F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239F94u;
label_239f94:
    // 0x239f94: 0xae000590  sw          $zero, 0x590($s0)
    ctx->pc = 0x239f94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 0));
label_239f98:
    // 0x239f98: 0xae000594  sw          $zero, 0x594($s0)
    ctx->pc = 0x239f98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 0));
label_239f9c:
    // 0x239f9c: 0xae000598  sw          $zero, 0x598($s0)
    ctx->pc = 0x239f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 0));
label_239fa0:
    // 0x239fa0: 0xae00059c  sw          $zero, 0x59C($s0)
    ctx->pc = 0x239fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 0));
label_239fa4:
    // 0x239fa4: 0x12400006  beqz        $s2, . + 4 + (0x6 << 2)
label_239fa8:
    if (ctx->pc == 0x239FA8u) {
        ctx->pc = 0x239FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FA4u;
        // 0x239fa8: 0xae0005a0  sw          $zero, 0x5A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FACu;
        goto label_239fac;
    }
    ctx->pc = 0x239FA4u;
    {
        const bool branch_taken_0x239fa4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FA4u;
        // 0x239fa8: 0xae0005a0  sw          $zero, 0x5A0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fa4) {
            ctx->pc = 0x239FC0u;
            goto label_239fc0;
        }
    }
    ctx->pc = 0x239FACu;
label_239fac:
    // 0x239fac: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x239facu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_239fb0:
    // 0x239fb0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x239fb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239fb4:
    // 0x239fb4: 0xc050fda  jal         func_143F68
label_239fb8:
    if (ctx->pc == 0x239FB8u) {
        ctx->pc = 0x239FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FB4u;
        // 0x239fb8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FBCu;
        goto label_239fbc;
    }
    ctx->pc = 0x239FB4u;
    SET_GPR_U32(ctx, 31, 0x239FBCu);
    ctx->pc = 0x239FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FB4u;
    // 0x239fb8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x239FB4u, 0x239FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FBCu;
label_239fbc:
    // 0x239fbc: 0xae020590  sw          $v0, 0x590($s0)
    ctx->pc = 0x239fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1424), GPR_U32(ctx, 2));
label_239fc0:
    // 0x239fc0: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_239fc4:
    if (ctx->pc == 0x239FC4u) {
        ctx->pc = 0x239FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FC0u;
        // 0x239fc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FC8u;
        goto label_239fc8;
    }
    ctx->pc = 0x239FC0u;
    {
        const bool branch_taken_0x239fc0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FC0u;
        // 0x239fc4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fc0) {
            ctx->pc = 0x239FD8u;
            goto label_239fd8;
        }
    }
    ctx->pc = 0x239FC8u;
label_239fc8:
    // 0x239fc8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x239fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_239fcc:
    // 0x239fcc: 0xc050fda  jal         func_143F68
label_239fd0:
    if (ctx->pc == 0x239FD0u) {
        ctx->pc = 0x239FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FCCu;
        // 0x239fd0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FD4u;
        goto label_239fd4;
    }
    ctx->pc = 0x239FCCu;
    SET_GPR_U32(ctx, 31, 0x239FD4u);
    ctx->pc = 0x239FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FCCu;
    // 0x239fd0: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x239FCCu, 0x239FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FD4u;
label_239fd4:
    // 0x239fd4: 0xae020594  sw          $v0, 0x594($s0)
    ctx->pc = 0x239fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1428), GPR_U32(ctx, 2));
label_239fd8:
    // 0x239fd8: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
label_239fdc:
    if (ctx->pc == 0x239FDCu) {
        ctx->pc = 0x239FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FD8u;
        // 0x239fdc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FE0u;
        goto label_239fe0;
    }
    ctx->pc = 0x239FD8u;
    {
        const bool branch_taken_0x239fd8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FD8u;
        // 0x239fdc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fd8) {
            ctx->pc = 0x239FF0u;
            goto label_239ff0;
        }
    }
    ctx->pc = 0x239FE0u;
label_239fe0:
    // 0x239fe0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x239fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_239fe4:
    // 0x239fe4: 0xc050fda  jal         func_143F68
label_239fe8:
    if (ctx->pc == 0x239FE8u) {
        ctx->pc = 0x239FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FE4u;
        // 0x239fe8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FECu;
        goto label_239fec;
    }
    ctx->pc = 0x239FE4u;
    SET_GPR_U32(ctx, 31, 0x239FECu);
    ctx->pc = 0x239FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FE4u;
    // 0x239fe8: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x239FE4u, 0x239FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x239FECu;
label_239fec:
    // 0x239fec: 0xae020598  sw          $v0, 0x598($s0)
    ctx->pc = 0x239fecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1432), GPR_U32(ctx, 2));
label_239ff0:
    // 0x239ff0: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_239ff4:
    if (ctx->pc == 0x239FF4u) {
        ctx->pc = 0x239FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FF0u;
        // 0x239ff4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x239FF8u;
        goto label_239ff8;
    }
    ctx->pc = 0x239FF0u;
    {
        const bool branch_taken_0x239ff0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FF0u;
        // 0x239ff4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ff0) {
            ctx->pc = 0x23A008u;
            goto label_23a008;
        }
    }
    ctx->pc = 0x239FF8u;
label_239ff8:
    // 0x239ff8: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x239ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_239ffc:
    // 0x239ffc: 0xc050fda  jal         func_143F68
label_23a000:
    if (ctx->pc == 0x23A000u) {
        ctx->pc = 0x23A000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x239FFCu;
        // 0x23a000: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A004u;
        goto label_23a004;
    }
    ctx->pc = 0x239FFCu;
    SET_GPR_U32(ctx, 31, 0x23A004u);
    ctx->pc = 0x23A000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x239FFCu;
    // 0x23a000: 0x248491e0  addiu       $a0, $a0, -0x6E20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939104));
    ctx->in_delay_slot = false;
    ctx->pc = 0x143F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143F68u, 0x239FFCu, 0x23A004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23A004u;
label_23a004:
    // 0x23a004: 0xae02059c  sw          $v0, 0x59C($s0)
    ctx->pc = 0x23a004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1436), GPR_U32(ctx, 2));
label_23a008:
    // 0x23a008: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x23a008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_23a00c:
    // 0x23a00c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23a00cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_23a010:
    // 0x23a010: 0x8c462b04  lw          $a2, 0x2B04($v0)
    ctx->pc = 0x23a010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11012)));
label_23a014:
    // 0x23a014: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x23a014u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_23a018:
    // 0x23a018: 0x846400c8  lh          $a0, 0xC8($v1)
    ctx->pc = 0x23a018u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 200)));
label_23a01c:
    // 0x23a01c: 0x8c6200cc  lw          $v0, 0xCC($v1)
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 204)));
label_23a020:
    // 0x23a020: 0x40f809  jalr        $v0
label_23a024:
    if (ctx->pc == 0x23A024u) {
        ctx->pc = 0x23A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A020u;
        // 0x23a024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A028u;
        goto label_23a028;
    }
    ctx->pc = 0x23A020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x23A028u);
        ctx->pc = 0x23A024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A020u;
        // 0x23a024: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A020u, 0x23A028u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x23A028u;
label_23a028:
    // 0x23a028: 0xae0205a0  sw          $v0, 0x5A0($s0)
    ctx->pc = 0x23a028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1440), GPR_U32(ctx, 2));
label_23a02c:
    // 0x23a02c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23a030:
    // 0x23a030: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x23a030u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_23a034:
    // 0x23a034: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x23a034u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_23a038:
    // 0x23a038: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x23a038u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_23a03c:
    // 0x23a03c: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x23a03cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_23a040:
    // 0x23a040: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x23a040u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_23a044:
    // 0x23a044: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x23a044u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_23a048:
    // 0x23a048: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x23a048u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_23a04c:
    // 0x23a04c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x23a04cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23a050:
    // 0x23a050: 0x3e00008  jr          $ra
label_23a054:
    if (ctx->pc == 0x23A054u) {
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23A058u;
        goto label_fallthrough_0x23a050;
    }
    ctx->pc = 0x23A050u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23A050u;
        // 0x23a054: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23A050u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x23a050:
    ctx->pc = 0x23A058u;
}
