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

// Function: sub_0031EAF0
// Address: 0x31eaf0 - 0x31ec68
void sub_0031EAF0_0x31eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031EAF0_0x31eaf0");
#endif

    switch (ctx->pc) {
        case 0x31eaf0u: goto label_31eaf0;
        case 0x31eaf4u: goto label_31eaf4;
        case 0x31eaf8u: goto label_31eaf8;
        case 0x31eafcu: goto label_31eafc;
        case 0x31eb00u: goto label_31eb00;
        case 0x31eb04u: goto label_31eb04;
        case 0x31eb08u: goto label_31eb08;
        case 0x31eb0cu: goto label_31eb0c;
        case 0x31eb10u: goto label_31eb10;
        case 0x31eb14u: goto label_31eb14;
        case 0x31eb18u: goto label_31eb18;
        case 0x31eb1cu: goto label_31eb1c;
        case 0x31eb20u: goto label_31eb20;
        case 0x31eb24u: goto label_31eb24;
        case 0x31eb28u: goto label_31eb28;
        case 0x31eb2cu: goto label_31eb2c;
        case 0x31eb30u: goto label_31eb30;
        case 0x31eb34u: goto label_31eb34;
        case 0x31eb38u: goto label_31eb38;
        case 0x31eb3cu: goto label_31eb3c;
        case 0x31eb40u: goto label_31eb40;
        case 0x31eb44u: goto label_31eb44;
        case 0x31eb48u: goto label_31eb48;
        case 0x31eb4cu: goto label_31eb4c;
        case 0x31eb50u: goto label_31eb50;
        case 0x31eb54u: goto label_31eb54;
        case 0x31eb58u: goto label_31eb58;
        case 0x31eb5cu: goto label_31eb5c;
        case 0x31eb60u: goto label_31eb60;
        case 0x31eb64u: goto label_31eb64;
        case 0x31eb68u: goto label_31eb68;
        case 0x31eb6cu: goto label_31eb6c;
        case 0x31eb70u: goto label_31eb70;
        case 0x31eb74u: goto label_31eb74;
        case 0x31eb78u: goto label_31eb78;
        case 0x31eb7cu: goto label_31eb7c;
        case 0x31eb80u: goto label_31eb80;
        case 0x31eb84u: goto label_31eb84;
        case 0x31eb88u: goto label_31eb88;
        case 0x31eb8cu: goto label_31eb8c;
        case 0x31eb90u: goto label_31eb90;
        case 0x31eb94u: goto label_31eb94;
        case 0x31eb98u: goto label_31eb98;
        case 0x31eb9cu: goto label_31eb9c;
        case 0x31eba0u: goto label_31eba0;
        case 0x31eba4u: goto label_31eba4;
        case 0x31eba8u: goto label_31eba8;
        case 0x31ebacu: goto label_31ebac;
        case 0x31ebb0u: goto label_31ebb0;
        case 0x31ebb4u: goto label_31ebb4;
        case 0x31ebb8u: goto label_31ebb8;
        case 0x31ebbcu: goto label_31ebbc;
        case 0x31ebc0u: goto label_31ebc0;
        case 0x31ebc4u: goto label_31ebc4;
        case 0x31ebc8u: goto label_31ebc8;
        case 0x31ebccu: goto label_31ebcc;
        case 0x31ebd0u: goto label_31ebd0;
        case 0x31ebd4u: goto label_31ebd4;
        case 0x31ebd8u: goto label_31ebd8;
        case 0x31ebdcu: goto label_31ebdc;
        case 0x31ebe0u: goto label_31ebe0;
        case 0x31ebe4u: goto label_31ebe4;
        case 0x31ebe8u: goto label_31ebe8;
        case 0x31ebecu: goto label_31ebec;
        case 0x31ebf0u: goto label_31ebf0;
        case 0x31ebf4u: goto label_31ebf4;
        case 0x31ebf8u: goto label_31ebf8;
        case 0x31ebfcu: goto label_31ebfc;
        case 0x31ec00u: goto label_31ec00;
        case 0x31ec04u: goto label_31ec04;
        case 0x31ec08u: goto label_31ec08;
        case 0x31ec0cu: goto label_31ec0c;
        case 0x31ec10u: goto label_31ec10;
        case 0x31ec14u: goto label_31ec14;
        case 0x31ec18u: goto label_31ec18;
        case 0x31ec1cu: goto label_31ec1c;
        case 0x31ec20u: goto label_31ec20;
        case 0x31ec24u: goto label_31ec24;
        case 0x31ec28u: goto label_31ec28;
        case 0x31ec2cu: goto label_31ec2c;
        case 0x31ec30u: goto label_31ec30;
        case 0x31ec34u: goto label_31ec34;
        case 0x31ec38u: goto label_31ec38;
        case 0x31ec3cu: goto label_31ec3c;
        case 0x31ec40u: goto label_31ec40;
        case 0x31ec44u: goto label_31ec44;
        case 0x31ec48u: goto label_31ec48;
        case 0x31ec4cu: goto label_31ec4c;
        case 0x31ec50u: goto label_31ec50;
        case 0x31ec54u: goto label_31ec54;
        case 0x31ec58u: goto label_31ec58;
        case 0x31ec5cu: goto label_31ec5c;
        case 0x31ec60u: goto label_31ec60;
        case 0x31ec64u: goto label_31ec64;
        default: break;
    }

    ctx->pc = 0x31eaf0u;

label_31eaf0:
    // 0x31eaf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_31eaf4:
    // 0x31eaf4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x31eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_31eaf8:
    // 0x31eaf8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x31eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_31eafc:
    // 0x31eafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x31eafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31eb00:
    // 0x31eb00: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x31eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_31eb04:
    // 0x31eb04: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x31eb04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31eb08:
    // 0x31eb08: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x31eb08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_31eb0c:
    // 0x31eb0c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x31eb0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31eb10:
    // 0x31eb10: 0xc08a61a  jal         func_229868
label_31eb14:
    if (ctx->pc == 0x31EB14u) {
        ctx->pc = 0x31EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB10u;
        // 0x31eb14: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB18u;
        goto label_31eb18;
    }
    ctx->pc = 0x31EB10u;
    SET_GPR_U32(ctx, 31, 0x31EB18u);
    ctx->pc = 0x31EB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB10u;
    // 0x31eb14: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31EB10u, 0x31EB18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB18u;
label_31eb18:
    // 0x31eb18: 0x10400056  beqz        $v0, . + 4 + (0x56 << 2)
label_31eb1c:
    if (ctx->pc == 0x31EB1Cu) {
        ctx->pc = 0x31EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB18u;
        // 0x31eb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB20u;
        goto label_31eb20;
    }
    ctx->pc = 0x31EB18u;
    {
        const bool branch_taken_0x31eb18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB18u;
        // 0x31eb1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb18) {
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EB20u;
label_31eb20:
    // 0x31eb20: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x31eb20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_31eb24:
    // 0x31eb24: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x31eb24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_31eb28:
    // 0x31eb28: 0x2c830017  sltiu       $v1, $a0, 0x17
    ctx->pc = 0x31eb28u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)23) ? 1 : 0);
label_31eb2c:
    // 0x31eb2c: 0x10600050  beqz        $v1, . + 4 + (0x50 << 2)
label_31eb30:
    if (ctx->pc == 0x31EB30u) {
        ctx->pc = 0x31EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB2Cu;
        // 0x31eb30: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB34u;
        goto label_31eb34;
    }
    ctx->pc = 0x31EB2Cu;
    {
        const bool branch_taken_0x31eb2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB2Cu;
        // 0x31eb30: 0x3c020057  lui         $v0, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)87 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb2c) {
            ctx->pc = 0x31EC70u;
            return;
        }
    }
    ctx->pc = 0x31EB34u;
label_31eb34:
    // 0x31eb34: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x31eb34u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_31eb38:
    // 0x31eb38: 0x24422cd0  addiu       $v0, $v0, 0x2CD0
    ctx->pc = 0x31eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11472));
label_31eb3c:
    // 0x31eb3c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31eb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31eb40:
    // 0x31eb40: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31eb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31eb44:
    // 0x31eb44: 0x800008  jr          $a0
label_31eb48:
    if (ctx->pc == 0x31EB48u) {
        ctx->pc = 0x31EB4Cu;
        goto label_31eb4c;
    }
    ctx->pc = 0x31EB44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31EB4Cu: goto label_31eb4c;
            case 0x31EB5Cu: goto label_31eb5c;
            case 0x31EB74u: goto label_31eb74;
            case 0x31EB80u: goto label_31eb80;
            case 0x31EBC0u: goto label_31ebc0;
            case 0x31EBE0u: goto label_31ebe0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EB44u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31EB4Cu;
label_31eb4c:
    // 0x31eb4c: 0xc0c793c  jal         func_31E4F0
label_31eb50:
    if (ctx->pc == 0x31EB50u) {
        ctx->pc = 0x31EB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB4Cu;
        // 0x31eb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB54u;
        goto label_31eb54;
    }
    ctx->pc = 0x31EB4Cu;
    SET_GPR_U32(ctx, 31, 0x31EB54u);
    ctx->pc = 0x31EB50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB4Cu;
    // 0x31eb50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E4F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E4F0u, 0x31EB4Cu, 0x31EB54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB54u;
label_31eb54:
    // 0x31eb54: 0x10000047  b           . + 4 + (0x47 << 2)
label_31eb58:
    if (ctx->pc == 0x31EB58u) {
        ctx->pc = 0x31EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB54u;
        // 0x31eb58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB5Cu;
        goto label_31eb5c;
    }
    ctx->pc = 0x31EB54u;
    {
        const bool branch_taken_0x31eb54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB54u;
        // 0x31eb58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb54) {
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EB5Cu;
label_31eb5c:
    // 0x31eb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x31eb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_31eb60:
    // 0x31eb60: 0xc0c7988  jal         func_31E620
label_31eb64:
    if (ctx->pc == 0x31EB64u) {
        ctx->pc = 0x31EB64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB60u;
        // 0x31eb64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB68u;
        goto label_31eb68;
    }
    ctx->pc = 0x31EB60u;
    SET_GPR_U32(ctx, 31, 0x31EB68u);
    ctx->pc = 0x31EB64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB60u;
    // 0x31eb64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E620u, 0x31EB60u, 0x31EB68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB68u;
label_31eb68:
    // 0x31eb68: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31eb6c:
    // 0x31eb6c: 0x10000016  b           . + 4 + (0x16 << 2)
label_31eb70:
    if (ctx->pc == 0x31EB70u) {
        ctx->pc = 0x31EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB6Cu;
        // 0x31eb70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB74u;
        goto label_31eb74;
    }
    ctx->pc = 0x31EB6Cu;
    {
        const bool branch_taken_0x31eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB6Cu;
        // 0x31eb70: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb6c) {
            ctx->pc = 0x31EBC8u;
            goto label_31ebc8;
        }
    }
    ctx->pc = 0x31EB74u;
label_31eb74:
    // 0x31eb74: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31eb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31eb78:
    // 0x31eb78: 0x10000013  b           . + 4 + (0x13 << 2)
label_31eb7c:
    if (ctx->pc == 0x31EB7Cu) {
        ctx->pc = 0x31EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB78u;
        // 0x31eb7c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB80u;
        goto label_31eb80;
    }
    ctx->pc = 0x31EB78u;
    {
        const bool branch_taken_0x31eb78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EB7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB78u;
        // 0x31eb7c: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eb78) {
            ctx->pc = 0x31EBC8u;
            goto label_31ebc8;
        }
    }
    ctx->pc = 0x31EB80u;
label_31eb80:
    // 0x31eb80: 0xc08a61a  jal         func_229868
label_31eb84:
    if (ctx->pc == 0x31EB84u) {
        ctx->pc = 0x31EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB80u;
        // 0x31eb84: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB88u;
        goto label_31eb88;
    }
    ctx->pc = 0x31EB80u;
    SET_GPR_U32(ctx, 31, 0x31EB88u);
    ctx->pc = 0x31EB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB80u;
    // 0x31eb84: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x31EB80u, 0x31EB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB88u;
label_31eb88:
    // 0x31eb88: 0x5040003a  beql        $v0, $zero, . + 4 + (0x3A << 2)
label_31eb8c:
    if (ctx->pc == 0x31EB8Cu) {
        ctx->pc = 0x31EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB88u;
        // 0x31eb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB90u;
        goto label_31eb90;
    }
    ctx->pc = 0x31EB88u;
    {
        const bool branch_taken_0x31eb88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31eb88) {
            ctx->pc = 0x31EB8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31EB88u;
            // 0x31eb8c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EB90u;
label_31eb90:
    // 0x31eb90: 0xc087502  jal         func_21D408
label_31eb94:
    if (ctx->pc == 0x31EB94u) {
        ctx->pc = 0x31EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EB90u;
        // 0x31eb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EB98u;
        goto label_31eb98;
    }
    ctx->pc = 0x31EB90u;
    SET_GPR_U32(ctx, 31, 0x31EB98u);
    ctx->pc = 0x31EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EB90u;
    // 0x31eb94: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x31EB90u, 0x31EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EB98u;
label_31eb98:
    // 0x31eb98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x31eb98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31eb9c:
    // 0x31eb9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x31eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_31eba0:
    // 0x31eba0: 0x8c82020c  lw          $v0, 0x20C($a0)
    ctx->pc = 0x31eba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 524)));
label_31eba4:
    // 0x31eba4: 0x14430033  bne         $v0, $v1, . + 4 + (0x33 << 2)
label_31eba8:
    if (ctx->pc == 0x31EBA8u) {
        ctx->pc = 0x31EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBA4u;
        // 0x31eba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBACu;
        goto label_31ebac;
    }
    ctx->pc = 0x31EBA4u;
    {
        const bool branch_taken_0x31eba4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBA4u;
        // 0x31eba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31eba4) {
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EBACu;
label_31ebac:
    // 0x31ebac: 0xc0a3032  jal         func_28C0C8
label_31ebb0:
    if (ctx->pc == 0x31EBB0u) {
        ctx->pc = 0x31EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBACu;
        // 0x31ebb0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBB4u;
        goto label_31ebb4;
    }
    ctx->pc = 0x31EBACu;
    SET_GPR_U32(ctx, 31, 0x31EBB4u);
    ctx->pc = 0x31EBB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EBACu;
    // 0x31ebb0: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C0C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C0C8u, 0x31EBACu, 0x31EBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBB4u;
label_31ebb4:
    // 0x31ebb4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31ebb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31ebb8:
    // 0x31ebb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_31ebbc:
    if (ctx->pc == 0x31EBBCu) {
        ctx->pc = 0x31EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBB8u;
        // 0x31ebbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBC0u;
        goto label_31ebc0;
    }
    ctx->pc = 0x31EBB8u;
    {
        const bool branch_taken_0x31ebb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBB8u;
        // 0x31ebbc: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebb8) {
            ctx->pc = 0x31EBC8u;
            goto label_31ebc8;
        }
    }
    ctx->pc = 0x31EBC0u;
label_31ebc0:
    // 0x31ebc0: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31ebc4:
    // 0x31ebc4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x31ebc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31ebc8:
    // 0x31ebc8: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31ebc8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31ebcc:
    // 0x31ebcc: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31ebccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31ebd0:
    // 0x31ebd0: 0x60f809  jalr        $v1
label_31ebd4:
    if (ctx->pc == 0x31EBD4u) {
        ctx->pc = 0x31EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBD0u;
        // 0x31ebd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBD8u;
        goto label_31ebd8;
    }
    ctx->pc = 0x31EBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31EBD8u);
        ctx->pc = 0x31EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBD0u;
        // 0x31ebd4: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EBD0u, 0x31EBD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EBD8u;
label_31ebd8:
    // 0x31ebd8: 0x10000026  b           . + 4 + (0x26 << 2)
label_31ebdc:
    if (ctx->pc == 0x31EBDCu) {
        ctx->pc = 0x31EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBD8u;
        // 0x31ebdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBE0u;
        goto label_31ebe0;
    }
    ctx->pc = 0x31EBD8u;
    {
        const bool branch_taken_0x31ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBD8u;
        // 0x31ebdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebd8) {
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EBE0u;
label_31ebe0:
    // 0x31ebe0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31ebe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ebe4:
    // 0x31ebe4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x31ebe4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31ebe8:
    // 0x31ebe8: 0xc0c79dc  jal         func_31E770
label_31ebec:
    if (ctx->pc == 0x31EBECu) {
        ctx->pc = 0x31EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBE8u;
        // 0x31ebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBF0u;
        goto label_31ebf0;
    }
    ctx->pc = 0x31EBE8u;
    SET_GPR_U32(ctx, 31, 0x31EBF0u);
    ctx->pc = 0x31EBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EBE8u;
    // 0x31ebec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E770u, 0x31EBE8u, 0x31EBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBF0u;
label_31ebf0:
    // 0x31ebf0: 0xc0e57ce  jal         func_395F38
label_31ebf4:
    if (ctx->pc == 0x31EBF4u) {
        ctx->pc = 0x31EBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBF0u;
        // 0x31ebf4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EBF8u;
        goto label_31ebf8;
    }
    ctx->pc = 0x31EBF0u;
    SET_GPR_U32(ctx, 31, 0x31EBF8u);
    ctx->pc = 0x31EBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EBF0u;
    // 0x31ebf4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x395F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x395F38u, 0x31EBF0u, 0x31EBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EBF8u;
label_31ebf8:
    // 0x31ebf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x31ebf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31ebfc:
    // 0x31ebfc: 0x1220001c  beqz        $s1, . + 4 + (0x1C << 2)
label_31ec00:
    if (ctx->pc == 0x31EC00u) {
        ctx->pc = 0x31EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBFCu;
        // 0x31ec00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC04u;
        goto label_31ec04;
    }
    ctx->pc = 0x31EBFCu;
    {
        const bool branch_taken_0x31ebfc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EBFCu;
        // 0x31ec00: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ebfc) {
            ctx->pc = 0x31EC70u;
            return;
        }
    }
    ctx->pc = 0x31EC04u;
label_31ec04:
    // 0x31ec04: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31ec04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ec08:
    // 0x31ec08: 0x8c432c7c  lw          $v1, 0x2C7C($v0)
    ctx->pc = 0x31ec08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11388)));
label_31ec0c:
    // 0x31ec0c: 0xc0e63d8  jal         func_398F60
label_31ec10:
    if (ctx->pc == 0x31EC10u) {
        ctx->pc = 0x31EC10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC0Cu;
        // 0x31ec10: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC14u;
        goto label_31ec14;
    }
    ctx->pc = 0x31EC0Cu;
    SET_GPR_U32(ctx, 31, 0x31EC14u);
    ctx->pc = 0x31EC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31EC0Cu;
    // 0x31ec10: 0x8c640840  lw          $a0, 0x840($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 2112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x398F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x398F60u, 0x31EC0Cu, 0x31EC14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31EC14u;
label_31ec14:
    // 0x31ec14: 0x8e030030  lw          $v1, 0x30($s0)
    ctx->pc = 0x31ec14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_31ec18:
    // 0x31ec18: 0x14430016  bne         $v0, $v1, . + 4 + (0x16 << 2)
label_31ec1c:
    if (ctx->pc == 0x31EC1Cu) {
        ctx->pc = 0x31EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC18u;
        // 0x31ec1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC20u;
        goto label_31ec20;
    }
    ctx->pc = 0x31EC18u;
    {
        const bool branch_taken_0x31ec18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x31EC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC18u;
        // 0x31ec1c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec18) {
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EC20u;
label_31ec20:
    // 0x31ec20: 0x9222010d  lbu         $v0, 0x10D($s1)
    ctx->pc = 0x31ec20u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 269)));
label_31ec24:
    // 0x31ec24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_31ec28:
    if (ctx->pc == 0x31EC28u) {
        ctx->pc = 0x31EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC24u;
        // 0x31ec28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC2Cu;
        goto label_31ec2c;
    }
    ctx->pc = 0x31EC24u;
    {
        const bool branch_taken_0x31ec24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC24u;
        // 0x31ec28: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec24) {
            ctx->pc = 0x31EC38u;
            goto label_31ec38;
        }
    }
    ctx->pc = 0x31EC2Cu;
label_31ec2c:
    // 0x31ec2c: 0x9222010e  lbu         $v0, 0x10E($s1)
    ctx->pc = 0x31ec2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 270)));
label_31ec30:
    // 0x31ec30: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_31ec34:
    if (ctx->pc == 0x31EC34u) {
        ctx->pc = 0x31EC38u;
        goto label_31ec38;
    }
    ctx->pc = 0x31EC30u;
    {
        const bool branch_taken_0x31ec30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31ec30) {
            ctx->pc = 0x31EC3Cu;
            goto label_31ec3c;
        }
    }
    ctx->pc = 0x31EC38u;
label_31ec38:
    // 0x31ec38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x31ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_31ec3c:
    // 0x31ec3c: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_31ec40:
    if (ctx->pc == 0x31EC40u) {
        ctx->pc = 0x31EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC3Cu;
        // 0x31ec40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC44u;
        goto label_31ec44;
    }
    ctx->pc = 0x31EC3Cu;
    {
        const bool branch_taken_0x31ec3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31EC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC3Cu;
        // 0x31ec40: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec3c) {
            ctx->pc = 0x31EC74u;
            return;
        }
    }
    ctx->pc = 0x31EC44u;
label_31ec44:
    // 0x31ec44: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x31ec44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_31ec48:
    // 0x31ec48: 0x12220006  beq         $s1, $v0, . + 4 + (0x6 << 2)
label_31ec4c:
    if (ctx->pc == 0x31EC4Cu) {
        ctx->pc = 0x31EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC48u;
        // 0x31ec4c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC50u;
        goto label_31ec50;
    }
    ctx->pc = 0x31EC48u;
    {
        const bool branch_taken_0x31ec48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x31EC4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC48u;
        // 0x31ec4c: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ec48) {
            ctx->pc = 0x31EC64u;
            goto label_31ec64;
        }
    }
    ctx->pc = 0x31EC50u;
label_31ec50:
    // 0x31ec50: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x31ec50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_31ec54:
    // 0x31ec54: 0x84440050  lh          $a0, 0x50($v0)
    ctx->pc = 0x31ec54u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_31ec58:
    // 0x31ec58: 0x8c430054  lw          $v1, 0x54($v0)
    ctx->pc = 0x31ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_31ec5c:
    // 0x31ec5c: 0x60f809  jalr        $v1
label_31ec60:
    if (ctx->pc == 0x31EC60u) {
        ctx->pc = 0x31EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC5Cu;
        // 0x31ec60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31EC64u;
        goto label_31ec64;
    }
    ctx->pc = 0x31EC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x31EC64u);
        ctx->pc = 0x31EC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31EC5Cu;
        // 0x31ec60: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31EC5Cu, 0x31EC64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31EC64u;
label_31ec64:
    // 0x31ec64: 0xae11003c  sw          $s1, 0x3C($s0)
    ctx->pc = 0x31ec64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 17));
    ctx->pc = 0x31ec68u;
}
