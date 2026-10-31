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

// Function: sub_001E4F18
// Address: 0x1e4f18 - 0x1e5114
void sub_001E4F18_0x1e4f18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E4F18_0x1e4f18");
#endif

    switch (ctx->pc) {
        case 0x1e4f18u: goto label_1e4f18;
        case 0x1e4f1cu: goto label_1e4f1c;
        case 0x1e4f20u: goto label_1e4f20;
        case 0x1e4f24u: goto label_1e4f24;
        case 0x1e4f28u: goto label_1e4f28;
        case 0x1e4f2cu: goto label_1e4f2c;
        case 0x1e4f30u: goto label_1e4f30;
        case 0x1e4f34u: goto label_1e4f34;
        case 0x1e4f38u: goto label_1e4f38;
        case 0x1e4f3cu: goto label_1e4f3c;
        case 0x1e4f40u: goto label_1e4f40;
        case 0x1e4f44u: goto label_1e4f44;
        case 0x1e4f48u: goto label_1e4f48;
        case 0x1e4f4cu: goto label_1e4f4c;
        case 0x1e4f50u: goto label_1e4f50;
        case 0x1e4f54u: goto label_1e4f54;
        case 0x1e4f58u: goto label_1e4f58;
        case 0x1e4f5cu: goto label_1e4f5c;
        case 0x1e4f60u: goto label_1e4f60;
        case 0x1e4f64u: goto label_1e4f64;
        case 0x1e4f68u: goto label_1e4f68;
        case 0x1e4f6cu: goto label_1e4f6c;
        case 0x1e4f70u: goto label_1e4f70;
        case 0x1e4f74u: goto label_1e4f74;
        case 0x1e4f78u: goto label_1e4f78;
        case 0x1e4f7cu: goto label_1e4f7c;
        case 0x1e4f80u: goto label_1e4f80;
        case 0x1e4f84u: goto label_1e4f84;
        case 0x1e4f88u: goto label_1e4f88;
        case 0x1e4f8cu: goto label_1e4f8c;
        case 0x1e4f90u: goto label_1e4f90;
        case 0x1e4f94u: goto label_1e4f94;
        case 0x1e4f98u: goto label_1e4f98;
        case 0x1e4f9cu: goto label_1e4f9c;
        case 0x1e4fa0u: goto label_1e4fa0;
        case 0x1e4fa4u: goto label_1e4fa4;
        case 0x1e4fa8u: goto label_1e4fa8;
        case 0x1e4facu: goto label_1e4fac;
        case 0x1e4fb0u: goto label_1e4fb0;
        case 0x1e4fb4u: goto label_1e4fb4;
        case 0x1e4fb8u: goto label_1e4fb8;
        case 0x1e4fbcu: goto label_1e4fbc;
        case 0x1e4fc0u: goto label_1e4fc0;
        case 0x1e4fc4u: goto label_1e4fc4;
        case 0x1e4fc8u: goto label_1e4fc8;
        case 0x1e4fccu: goto label_1e4fcc;
        case 0x1e4fd0u: goto label_1e4fd0;
        case 0x1e4fd4u: goto label_1e4fd4;
        case 0x1e4fd8u: goto label_1e4fd8;
        case 0x1e4fdcu: goto label_1e4fdc;
        case 0x1e4fe0u: goto label_1e4fe0;
        case 0x1e4fe4u: goto label_1e4fe4;
        case 0x1e4fe8u: goto label_1e4fe8;
        case 0x1e4fecu: goto label_1e4fec;
        case 0x1e4ff0u: goto label_1e4ff0;
        case 0x1e4ff4u: goto label_1e4ff4;
        case 0x1e4ff8u: goto label_1e4ff8;
        case 0x1e4ffcu: goto label_1e4ffc;
        case 0x1e5000u: goto label_1e5000;
        case 0x1e5004u: goto label_1e5004;
        case 0x1e5008u: goto label_1e5008;
        case 0x1e500cu: goto label_1e500c;
        case 0x1e5010u: goto label_1e5010;
        case 0x1e5014u: goto label_1e5014;
        case 0x1e5018u: goto label_1e5018;
        case 0x1e501cu: goto label_1e501c;
        case 0x1e5020u: goto label_1e5020;
        case 0x1e5024u: goto label_1e5024;
        case 0x1e5028u: goto label_1e5028;
        case 0x1e502cu: goto label_1e502c;
        case 0x1e5030u: goto label_1e5030;
        case 0x1e5034u: goto label_1e5034;
        case 0x1e5038u: goto label_1e5038;
        case 0x1e503cu: goto label_1e503c;
        case 0x1e5040u: goto label_1e5040;
        case 0x1e5044u: goto label_1e5044;
        case 0x1e5048u: goto label_1e5048;
        case 0x1e504cu: goto label_1e504c;
        case 0x1e5050u: goto label_1e5050;
        case 0x1e5054u: goto label_1e5054;
        case 0x1e5058u: goto label_1e5058;
        case 0x1e505cu: goto label_1e505c;
        case 0x1e5060u: goto label_1e5060;
        case 0x1e5064u: goto label_1e5064;
        case 0x1e5068u: goto label_1e5068;
        case 0x1e506cu: goto label_1e506c;
        case 0x1e5070u: goto label_1e5070;
        case 0x1e5074u: goto label_1e5074;
        case 0x1e5078u: goto label_1e5078;
        case 0x1e507cu: goto label_1e507c;
        case 0x1e5080u: goto label_1e5080;
        case 0x1e5084u: goto label_1e5084;
        case 0x1e5088u: goto label_1e5088;
        case 0x1e508cu: goto label_1e508c;
        case 0x1e5090u: goto label_1e5090;
        case 0x1e5094u: goto label_1e5094;
        case 0x1e5098u: goto label_1e5098;
        case 0x1e509cu: goto label_1e509c;
        case 0x1e50a0u: goto label_1e50a0;
        case 0x1e50a4u: goto label_1e50a4;
        case 0x1e50a8u: goto label_1e50a8;
        case 0x1e50acu: goto label_1e50ac;
        case 0x1e50b0u: goto label_1e50b0;
        case 0x1e50b4u: goto label_1e50b4;
        case 0x1e50b8u: goto label_1e50b8;
        case 0x1e50bcu: goto label_1e50bc;
        case 0x1e50c0u: goto label_1e50c0;
        case 0x1e50c4u: goto label_1e50c4;
        case 0x1e50c8u: goto label_1e50c8;
        case 0x1e50ccu: goto label_1e50cc;
        case 0x1e50d0u: goto label_1e50d0;
        case 0x1e50d4u: goto label_1e50d4;
        case 0x1e50d8u: goto label_1e50d8;
        case 0x1e50dcu: goto label_1e50dc;
        case 0x1e50e0u: goto label_1e50e0;
        case 0x1e50e4u: goto label_1e50e4;
        case 0x1e50e8u: goto label_1e50e8;
        case 0x1e50ecu: goto label_1e50ec;
        case 0x1e50f0u: goto label_1e50f0;
        case 0x1e50f4u: goto label_1e50f4;
        case 0x1e50f8u: goto label_1e50f8;
        case 0x1e50fcu: goto label_1e50fc;
        case 0x1e5100u: goto label_1e5100;
        case 0x1e5104u: goto label_1e5104;
        case 0x1e5108u: goto label_1e5108;
        case 0x1e510cu: goto label_1e510c;
        case 0x1e5110u: goto label_1e5110;
        default: break;
    }

    ctx->pc = 0x1e4f18u;

label_1e4f18:
    // 0x1e4f18: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1e4f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1e4f1c:
    // 0x1e4f1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1e4f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1e4f20:
    // 0x1e4f20: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1e4f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1e4f24:
    // 0x1e4f24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1e4f24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1e4f28:
    // 0x1e4f28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e4f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e4f2c:
    // 0x1e4f2c: 0x8e220950  lw          $v0, 0x950($s1)
    ctx->pc = 0x1e4f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2384)));
label_1e4f30:
    // 0x1e4f30: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1e4f34:
    if (ctx->pc == 0x1E4F34u) {
        ctx->pc = 0x1E4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F30u;
        // 0x1e4f34: 0x2ca20007  sltiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F38u;
        goto label_1e4f38;
    }
    ctx->pc = 0x1E4F30u;
    {
        const bool branch_taken_0x1e4f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F30u;
        // 0x1e4f34: 0x2ca20007  sltiu       $v0, $a1, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f30) {
            ctx->pc = 0x1E4F6Cu;
            goto label_1e4f6c;
        }
    }
    ctx->pc = 0x1E4F38u;
label_1e4f38:
    // 0x1e4f38: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e4f38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e4f3c:
    // 0x1e4f3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1e4f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1e4f40:
    // 0x1e4f40: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1e4f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1e4f44:
    // 0x1e4f44: 0x8c440940  lw          $a0, 0x940($v0)
    ctx->pc = 0x1e4f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2368)));
label_1e4f48:
    // 0x1e4f48: 0x8c83005c  lw          $v1, 0x5C($a0)
    ctx->pc = 0x1e4f48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 92)));
label_1e4f4c:
    // 0x1e4f4c: 0x24840040  addiu       $a0, $a0, 0x40
    ctx->pc = 0x1e4f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 64));
label_1e4f50:
    // 0x1e4f50: 0x84660008  lh          $a2, 0x8($v1)
    ctx->pc = 0x1e4f50u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
label_1e4f54:
    // 0x1e4f54: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x1e4f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_1e4f58:
    // 0x1e4f58: 0x40f809  jalr        $v0
label_1e4f5c:
    if (ctx->pc == 0x1E4F5Cu) {
        ctx->pc = 0x1E4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F58u;
        // 0x1e4f5c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F60u;
        goto label_1e4f60;
    }
    ctx->pc = 0x1E4F58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E4F60u);
        ctx->pc = 0x1E4F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F58u;
        // 0x1e4f5c: 0x862021  addu        $a0, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F58u, 0x1E4F60u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1E4F60u;
label_1e4f60:
    // 0x1e4f60: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x1e4f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_1e4f64:
    // 0x1e4f64: 0x1000006c  b           . + 4 + (0x6C << 2)
label_1e4f68:
    if (ctx->pc == 0x1E4F68u) {
        ctx->pc = 0x1E4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F64u;
        // 0x1e4f68: 0xae220950  sw          $v0, 0x950($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F6Cu;
        goto label_1e4f6c;
    }
    ctx->pc = 0x1E4F64u;
    {
        const bool branch_taken_0x1e4f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F64u;
        // 0x1e4f68: 0xae220950  sw          $v0, 0x950($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f64) {
            ctx->pc = 0x1E5118u;
            return;
        }
    }
    ctx->pc = 0x1E4F6Cu;
label_1e4f6c:
    // 0x1e4f6c: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_1e4f70:
    if (ctx->pc == 0x1E4F70u) {
        ctx->pc = 0x1E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F6Cu;
        // 0x1e4f70: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F74u;
        goto label_1e4f74;
    }
    ctx->pc = 0x1E4F6Cu;
    {
        const bool branch_taken_0x1e4f6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F6Cu;
        // 0x1e4f70: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f6c) {
            ctx->pc = 0x1E5114u;
            return;
        }
    }
    ctx->pc = 0x1E4F74u;
label_1e4f74:
    // 0x1e4f74: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1e4f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1e4f78:
    // 0x1e4f78: 0x244267d0  addiu       $v0, $v0, 0x67D0
    ctx->pc = 0x1e4f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26576));
label_1e4f7c:
    // 0x1e4f7c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1e4f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1e4f80:
    // 0x1e4f80: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1e4f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1e4f84:
    // 0x1e4f84: 0x800008  jr          $a0
label_1e4f88:
    if (ctx->pc == 0x1E4F88u) {
        ctx->pc = 0x1E4F8Cu;
        goto label_1e4f8c;
    }
    ctx->pc = 0x1E4F84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1E4F8Cu: goto label_1e4f8c;
            case 0x1E4FFCu: goto label_1e4ffc;
            case 0x1E5070u: goto label_1e5070;
            case 0x1E50A0u: goto label_1e50a0;
            case 0x1E50D4u: goto label_1e50d4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E4F84u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1E4F8Cu;
label_1e4f8c:
    // 0x1e4f8c: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e4f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e4f90:
    // 0x1e4f90: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e4f94:
    if (ctx->pc == 0x1E4F94u) {
        ctx->pc = 0x1E4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F90u;
        // 0x1e4f94: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4F98u;
        goto label_1e4f98;
    }
    ctx->pc = 0x1E4F90u;
    {
        const bool branch_taken_0x1e4f90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E4F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F90u;
        // 0x1e4f94: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4f90) {
            ctx->pc = 0x1E4FC4u;
            goto label_1e4fc4;
        }
    }
    ctx->pc = 0x1E4F98u;
label_1e4f98:
    // 0x1e4f98: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e4f98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e4f9c:
    // 0x1e4f9c: 0xc04444c  jal         func_111130
label_1e4fa0:
    if (ctx->pc == 0x1E4FA0u) {
        ctx->pc = 0x1E4FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4F9Cu;
        // 0x1e4fa0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FA4u;
        goto label_1e4fa4;
    }
    ctx->pc = 0x1E4F9Cu;
    SET_GPR_U32(ctx, 31, 0x1E4FA4u);
    ctx->pc = 0x1E4FA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4F9Cu;
    // 0x1e4fa0: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E4F9Cu, 0x1E4FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FA4u;
label_1e4fa4:
    // 0x1e4fa4: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e4fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e4fa8:
    // 0x1e4fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fac:
    // 0x1e4fac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4facu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fb0:
    // 0x1e4fb0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4fb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fb4:
    // 0x1e4fb4: 0xc043f36  jal         func_10FCD8
label_1e4fb8:
    if (ctx->pc == 0x1E4FB8u) {
        ctx->pc = 0x1E4FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FB4u;
        // 0x1e4fb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FBCu;
        goto label_1e4fbc;
    }
    ctx->pc = 0x1E4FB4u;
    SET_GPR_U32(ctx, 31, 0x1E4FBCu);
    ctx->pc = 0x1E4FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FB4u;
    // 0x1e4fb8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E4FB4u, 0x1E4FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FBCu;
label_1e4fbc:
    // 0x1e4fbc: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e4fc0:
    if (ctx->pc == 0x1E4FC0u) {
        ctx->pc = 0x1E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FBCu;
        // 0x1e4fc0: 0x8e220948  lw          $v0, 0x948($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FC4u;
        goto label_1e4fc4;
    }
    ctx->pc = 0x1E4FBCu;
    {
        const bool branch_taken_0x1e4fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FBCu;
        // 0x1e4fc0: 0x8e220948  lw          $v0, 0x948($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fbc) {
            ctx->pc = 0x1E4FECu;
            goto label_1e4fec;
        }
    }
    ctx->pc = 0x1E4FC4u;
label_1e4fc4:
    // 0x1e4fc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e4fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e4fc8:
    // 0x1e4fc8: 0xc04444c  jal         func_111130
label_1e4fcc:
    if (ctx->pc == 0x1E4FCCu) {
        ctx->pc = 0x1E4FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FC8u;
        // 0x1e4fcc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FD0u;
        goto label_1e4fd0;
    }
    ctx->pc = 0x1E4FC8u;
    SET_GPR_U32(ctx, 31, 0x1E4FD0u);
    ctx->pc = 0x1E4FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FC8u;
    // 0x1e4fcc: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E4FC8u, 0x1E4FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FD0u;
label_1e4fd0:
    // 0x1e4fd0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e4fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e4fd4:
    // 0x1e4fd4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e4fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fd8:
    // 0x1e4fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e4fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fdc:
    // 0x1e4fdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e4fdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e4fe0:
    // 0x1e4fe0: 0xc043f36  jal         func_10FCD8
label_1e4fe4:
    if (ctx->pc == 0x1E4FE4u) {
        ctx->pc = 0x1E4FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FE0u;
        // 0x1e4fe4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FE8u;
        goto label_1e4fe8;
    }
    ctx->pc = 0x1E4FE0u;
    SET_GPR_U32(ctx, 31, 0x1E4FE8u);
    ctx->pc = 0x1E4FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E4FE0u;
    // 0x1e4fe4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E4FE0u, 0x1E4FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E4FE8u;
label_1e4fe8:
    // 0x1e4fe8: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e4fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e4fec:
    // 0x1e4fec: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_1e4ff0:
    if (ctx->pc == 0x1E4FF0u) {
        ctx->pc = 0x1E4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FECu;
        // 0x1e4ff0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FF4u;
        goto label_1e4ff4;
    }
    ctx->pc = 0x1E4FECu;
    {
        const bool branch_taken_0x1e4fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FECu;
        // 0x1e4ff0: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4fec) {
            ctx->pc = 0x1E5114u;
            return;
        }
    }
    ctx->pc = 0x1E4FF4u;
label_1e4ff4:
    // 0x1e4ff4: 0x10000047  b           . + 4 + (0x47 << 2)
label_1e4ff8:
    if (ctx->pc == 0x1E4FF8u) {
        ctx->pc = 0x1E4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FF4u;
        // 0x1e4ff8: 0xae220948  sw          $v0, 0x948($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E4FFCu;
        goto label_1e4ffc;
    }
    ctx->pc = 0x1E4FF4u;
    {
        const bool branch_taken_0x1e4ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E4FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E4FF4u;
        // 0x1e4ff8: 0xae220948  sw          $v0, 0x948($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e4ff4) {
            ctx->pc = 0x1E5114u;
            return;
        }
    }
    ctx->pc = 0x1E4FFCu;
label_1e4ffc:
    // 0x1e4ffc: 0x8e230948  lw          $v1, 0x948($s1)
    ctx->pc = 0x1e4ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e5000:
    // 0x1e5000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e5004:
    // 0x1e5004: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_1e5008:
    if (ctx->pc == 0x1E5008u) {
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E500Cu;
        goto label_1e500c;
    }
    ctx->pc = 0x1E5004u;
    {
        const bool branch_taken_0x1e5004 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1E5008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5004u;
        // 0x1e5008: 0x3c100051  lui         $s0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5004) {
            ctx->pc = 0x1E5038u;
            goto label_1e5038;
        }
    }
    ctx->pc = 0x1E500Cu;
label_1e500c:
    // 0x1e500c: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e500cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e5010:
    // 0x1e5010: 0xc04444c  jal         func_111130
label_1e5014:
    if (ctx->pc == 0x1E5014u) {
        ctx->pc = 0x1E5014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5010u;
        // 0x1e5014: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5018u;
        goto label_1e5018;
    }
    ctx->pc = 0x1E5010u;
    SET_GPR_U32(ctx, 31, 0x1E5018u);
    ctx->pc = 0x1E5014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5010u;
    // 0x1e5014: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E5010u, 0x1E5018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5018u;
label_1e5018:
    // 0x1e5018: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e5018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e501c:
    // 0x1e501c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e501cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5020:
    // 0x1e5020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5024:
    // 0x1e5024: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5024u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5028:
    // 0x1e5028: 0xc043f36  jal         func_10FCD8
label_1e502c:
    if (ctx->pc == 0x1E502Cu) {
        ctx->pc = 0x1E502Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5028u;
        // 0x1e502c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5030u;
        goto label_1e5030;
    }
    ctx->pc = 0x1E5028u;
    SET_GPR_U32(ctx, 31, 0x1E5030u);
    ctx->pc = 0x1E502Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5028u;
    // 0x1e502c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E5028u, 0x1E5030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5030u;
label_1e5030:
    // 0x1e5030: 0x1000000b  b           . + 4 + (0xB << 2)
label_1e5034:
    if (ctx->pc == 0x1E5034u) {
        ctx->pc = 0x1E5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5030u;
        // 0x1e5034: 0x8e220948  lw          $v0, 0x948($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5038u;
        goto label_1e5038;
    }
    ctx->pc = 0x1E5030u;
    {
        const bool branch_taken_0x1e5030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E5034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5030u;
        // 0x1e5034: 0x8e220948  lw          $v0, 0x948($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5030) {
            ctx->pc = 0x1E5060u;
            goto label_1e5060;
        }
    }
    ctx->pc = 0x1E5038u;
label_1e5038:
    // 0x1e5038: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1e5038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1e503c:
    // 0x1e503c: 0xc04444c  jal         func_111130
label_1e5040:
    if (ctx->pc == 0x1E5040u) {
        ctx->pc = 0x1E5040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E503Cu;
        // 0x1e5040: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5044u;
        goto label_1e5044;
    }
    ctx->pc = 0x1E503Cu;
    SET_GPR_U32(ctx, 31, 0x1E5044u);
    ctx->pc = 0x1E5040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E503Cu;
    // 0x1e5040: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E503Cu, 0x1E5044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5044u;
label_1e5044:
    // 0x1e5044: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e5044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e5048:
    // 0x1e5048: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5048u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e504c:
    // 0x1e504c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e504cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5050:
    // 0x1e5050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e5050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5054:
    // 0x1e5054: 0xc043f36  jal         func_10FCD8
label_1e5058:
    if (ctx->pc == 0x1E5058u) {
        ctx->pc = 0x1E5058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5054u;
        // 0x1e5058: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E505Cu;
        goto label_1e505c;
    }
    ctx->pc = 0x1E5054u;
    SET_GPR_U32(ctx, 31, 0x1E505Cu);
    ctx->pc = 0x1E5058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5054u;
    // 0x1e5058: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E5054u, 0x1E505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E505Cu;
label_1e505c:
    // 0x1e505c: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e505cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e5060:
    // 0x1e5060: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_1e5064:
    if (ctx->pc == 0x1E5064u) {
        ctx->pc = 0x1E5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5060u;
        // 0x1e5064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5068u;
        goto label_1e5068;
    }
    ctx->pc = 0x1E5060u;
    {
        const bool branch_taken_0x1e5060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E5064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5060u;
        // 0x1e5064: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5060) {
            ctx->pc = 0x1E5118u;
            return;
        }
    }
    ctx->pc = 0x1E5068u;
label_1e5068:
    // 0x1e5068: 0x1000002b  b           . + 4 + (0x2B << 2)
label_1e506c:
    if (ctx->pc == 0x1E506Cu) {
        ctx->pc = 0x1E506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5068u;
        // 0x1e506c: 0xae220948  sw          $v0, 0x948($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5070u;
        goto label_1e5070;
    }
    ctx->pc = 0x1E5068u;
    {
        const bool branch_taken_0x1e5068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E506Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5068u;
        // 0x1e506c: 0xae220948  sw          $v0, 0x948($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2376), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5068) {
            ctx->pc = 0x1E5118u;
            return;
        }
    }
    ctx->pc = 0x1E5070u;
label_1e5070:
    // 0x1e5070: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e5070u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e5074:
    // 0x1e5074: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1e5074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1e5078:
    // 0x1e5078: 0xc04444c  jal         func_111130
label_1e507c:
    if (ctx->pc == 0x1E507Cu) {
        ctx->pc = 0x1E507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5078u;
        // 0x1e507c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5080u;
        goto label_1e5080;
    }
    ctx->pc = 0x1E5078u;
    SET_GPR_U32(ctx, 31, 0x1E5080u);
    ctx->pc = 0x1E507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5078u;
    // 0x1e507c: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E5078u, 0x1E5080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5080u;
label_1e5080:
    // 0x1e5080: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e5080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e5084:
    // 0x1e5084: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e5084u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e5088:
    // 0x1e5088: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e5088u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e508c:
    // 0x1e508c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e508cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5090:
    // 0x1e5090: 0xc043f36  jal         func_10FCD8
label_1e5094:
    if (ctx->pc == 0x1E5094u) {
        ctx->pc = 0x1E5094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5090u;
        // 0x1e5094: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5098u;
        goto label_1e5098;
    }
    ctx->pc = 0x1E5090u;
    SET_GPR_U32(ctx, 31, 0x1E5098u);
    ctx->pc = 0x1E5094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5090u;
    // 0x1e5094: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E5090u, 0x1E5098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5098u;
label_1e5098:
    // 0x1e5098: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1e509c:
    if (ctx->pc == 0x1E509Cu) {
        ctx->pc = 0x1E509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5098u;
        // 0x1e509c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50A0u;
        goto label_1e50a0;
    }
    ctx->pc = 0x1E5098u;
    {
        const bool branch_taken_0x1e5098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E509Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5098u;
        // 0x1e509c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e5098) {
            ctx->pc = 0x1E5118u;
            return;
        }
    }
    ctx->pc = 0x1E50A0u;
label_1e50a0:
    // 0x1e50a0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e50a0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e50a4:
    // 0x1e50a4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1e50a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1e50a8:
    // 0x1e50a8: 0xc04444c  jal         func_111130
label_1e50ac:
    if (ctx->pc == 0x1E50ACu) {
        ctx->pc = 0x1E50ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50A8u;
        // 0x1e50ac: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50B0u;
        goto label_1e50b0;
    }
    ctx->pc = 0x1E50A8u;
    SET_GPR_U32(ctx, 31, 0x1E50B0u);
    ctx->pc = 0x1E50ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50A8u;
    // 0x1e50ac: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E50A8u, 0x1E50B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50B0u;
label_1e50b0:
    // 0x1e50b0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e50b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e50b4:
    // 0x1e50b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e50b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e50b8:
    // 0x1e50b8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e50b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e50bc:
    // 0x1e50bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e50bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e50c0:
    // 0x1e50c0: 0xc043f36  jal         func_10FCD8
label_1e50c4:
    if (ctx->pc == 0x1E50C4u) {
        ctx->pc = 0x1E50C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50C0u;
        // 0x1e50c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50C8u;
        goto label_1e50c8;
    }
    ctx->pc = 0x1E50C0u;
    SET_GPR_U32(ctx, 31, 0x1E50C8u);
    ctx->pc = 0x1E50C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50C0u;
    // 0x1e50c4: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E50C0u, 0x1E50C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50C8u;
label_1e50c8:
    // 0x1e50c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e50c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e50cc:
    // 0x1e50cc: 0x10000011  b           . + 4 + (0x11 << 2)
label_1e50d0:
    if (ctx->pc == 0x1E50D0u) {
        ctx->pc = 0x1E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50CCu;
        // 0x1e50d0: 0xae23094c  sw          $v1, 0x94C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50D4u;
        goto label_1e50d4;
    }
    ctx->pc = 0x1E50CCu;
    {
        const bool branch_taken_0x1e50cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E50D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50CCu;
        // 0x1e50d0: 0xae23094c  sw          $v1, 0x94C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2380), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50cc) {
            ctx->pc = 0x1E5114u;
            return;
        }
    }
    ctx->pc = 0x1E50D4u;
label_1e50d4:
    // 0x1e50d4: 0x8e220948  lw          $v0, 0x948($s1)
    ctx->pc = 0x1e50d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2376)));
label_1e50d8:
    // 0x1e50d8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1e50dc:
    if (ctx->pc == 0x1E50DCu) {
        ctx->pc = 0x1E50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50D8u;
        // 0x1e50dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50E0u;
        goto label_1e50e0;
    }
    ctx->pc = 0x1E50D8u;
    {
        const bool branch_taken_0x1e50d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1E50DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50D8u;
        // 0x1e50dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e50d8) {
            ctx->pc = 0x1E510Cu;
            goto label_1e510c;
        }
    }
    ctx->pc = 0x1E50E0u;
label_1e50e0:
    // 0x1e50e0: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x1e50e0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_1e50e4:
    // 0x1e50e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1e50e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1e50e8:
    // 0x1e50e8: 0xc04444c  jal         func_111130
label_1e50ec:
    if (ctx->pc == 0x1E50ECu) {
        ctx->pc = 0x1E50ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E50E8u;
        // 0x1e50ec: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E50F0u;
        goto label_1e50f0;
    }
    ctx->pc = 0x1E50E8u;
    SET_GPR_U32(ctx, 31, 0x1E50F0u);
    ctx->pc = 0x1E50ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E50E8u;
    // 0x1e50ec: 0x8e04aa84  lw          $a0, -0x557C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111130u, 0x1E50E8u, 0x1E50F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E50F0u;
label_1e50f0:
    // 0x1e50f0: 0x8e04aa84  lw          $a0, -0x557C($s0)
    ctx->pc = 0x1e50f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294945412)));
label_1e50f4:
    // 0x1e50f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1e50f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1e50f8:
    // 0x1e50f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1e50f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e50fc:
    // 0x1e50fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1e50fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1e5100:
    // 0x1e5100: 0xc043f36  jal         func_10FCD8
label_1e5104:
    if (ctx->pc == 0x1E5104u) {
        ctx->pc = 0x1E5104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E5100u;
        // 0x1e5104: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1E5108u;
        goto label_1e5108;
    }
    ctx->pc = 0x1E5100u;
    SET_GPR_U32(ctx, 31, 0x1E5108u);
    ctx->pc = 0x1E5104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E5100u;
    // 0x1e5104: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10FCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10FCD8u, 0x1E5100u, 0x1E5108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E5108u;
label_1e5108:
    // 0x1e5108: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e5108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e510c:
    // 0x1e510c: 0xae20094c  sw          $zero, 0x94C($s1)
    ctx->pc = 0x1e510cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2380), GPR_U32(ctx, 0));
label_1e5110:
    // 0x1e5110: 0xae220950  sw          $v0, 0x950($s1)
    ctx->pc = 0x1e5110u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2384), GPR_U32(ctx, 2));
    ctx->pc = 0x1e5114u;
}
