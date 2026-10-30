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

// Function: sub_00174F40
// Address: 0x174f40 - 0x175080
void sub_00174F40_0x174f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00174F40_0x174f40");
#endif

    switch (ctx->pc) {
        case 0x174f40u: goto label_174f40;
        case 0x174f44u: goto label_174f44;
        case 0x174f48u: goto label_174f48;
        case 0x174f4cu: goto label_174f4c;
        case 0x174f50u: goto label_174f50;
        case 0x174f54u: goto label_174f54;
        case 0x174f58u: goto label_174f58;
        case 0x174f5cu: goto label_174f5c;
        case 0x174f60u: goto label_174f60;
        case 0x174f64u: goto label_174f64;
        case 0x174f68u: goto label_174f68;
        case 0x174f6cu: goto label_174f6c;
        case 0x174f70u: goto label_174f70;
        case 0x174f74u: goto label_174f74;
        case 0x174f78u: goto label_174f78;
        case 0x174f7cu: goto label_174f7c;
        case 0x174f80u: goto label_174f80;
        case 0x174f84u: goto label_174f84;
        case 0x174f88u: goto label_174f88;
        case 0x174f8cu: goto label_174f8c;
        case 0x174f90u: goto label_174f90;
        case 0x174f94u: goto label_174f94;
        case 0x174f98u: goto label_174f98;
        case 0x174f9cu: goto label_174f9c;
        case 0x174fa0u: goto label_174fa0;
        case 0x174fa4u: goto label_174fa4;
        case 0x174fa8u: goto label_174fa8;
        case 0x174facu: goto label_174fac;
        case 0x174fb0u: goto label_174fb0;
        case 0x174fb4u: goto label_174fb4;
        case 0x174fb8u: goto label_174fb8;
        case 0x174fbcu: goto label_174fbc;
        case 0x174fc0u: goto label_174fc0;
        case 0x174fc4u: goto label_174fc4;
        case 0x174fc8u: goto label_174fc8;
        case 0x174fccu: goto label_174fcc;
        case 0x174fd0u: goto label_174fd0;
        case 0x174fd4u: goto label_174fd4;
        case 0x174fd8u: goto label_174fd8;
        case 0x174fdcu: goto label_174fdc;
        case 0x174fe0u: goto label_174fe0;
        case 0x174fe4u: goto label_174fe4;
        case 0x174fe8u: goto label_174fe8;
        case 0x174fecu: goto label_174fec;
        case 0x174ff0u: goto label_174ff0;
        case 0x174ff4u: goto label_174ff4;
        case 0x174ff8u: goto label_174ff8;
        case 0x174ffcu: goto label_174ffc;
        case 0x175000u: goto label_175000;
        case 0x175004u: goto label_175004;
        case 0x175008u: goto label_175008;
        case 0x17500cu: goto label_17500c;
        case 0x175010u: goto label_175010;
        case 0x175014u: goto label_175014;
        case 0x175018u: goto label_175018;
        case 0x17501cu: goto label_17501c;
        case 0x175020u: goto label_175020;
        case 0x175024u: goto label_175024;
        case 0x175028u: goto label_175028;
        case 0x17502cu: goto label_17502c;
        case 0x175030u: goto label_175030;
        case 0x175034u: goto label_175034;
        case 0x175038u: goto label_175038;
        case 0x17503cu: goto label_17503c;
        case 0x175040u: goto label_175040;
        case 0x175044u: goto label_175044;
        case 0x175048u: goto label_175048;
        case 0x17504cu: goto label_17504c;
        case 0x175050u: goto label_175050;
        case 0x175054u: goto label_175054;
        case 0x175058u: goto label_175058;
        case 0x17505cu: goto label_17505c;
        case 0x175060u: goto label_175060;
        case 0x175064u: goto label_175064;
        case 0x175068u: goto label_175068;
        case 0x17506cu: goto label_17506c;
        case 0x175070u: goto label_175070;
        case 0x175074u: goto label_175074;
        case 0x175078u: goto label_175078;
        case 0x17507cu: goto label_17507c;
        default: break;
    }

    ctx->pc = 0x174f40u;

label_174f40:
    // 0x174f40: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x174f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_174f44:
    // 0x174f44: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x174f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_174f48:
    // 0x174f48: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x174f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_174f4c:
    // 0x174f4c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x174f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_174f50:
    // 0x174f50: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x174f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_174f54:
    // 0x174f54: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x174f54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_174f58:
    // 0x174f58: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x174f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_174f5c:
    // 0x174f5c: 0x24428a50  addiu       $v0, $v0, -0x75B0
    ctx->pc = 0x174f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937168));
label_174f60:
    // 0x174f60: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x174f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_174f64:
    // 0x174f64: 0x24638a78  addiu       $v1, $v1, -0x7588
    ctx->pc = 0x174f64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937208));
label_174f68:
    // 0x174f68: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x174f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_174f6c:
    // 0x174f6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x174f6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_174f70:
    // 0x174f70: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x174f70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_174f74:
    // 0x174f74: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174f74u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174f78:
    // 0x174f78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x174f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_174f7c:
    // 0x174f7c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x174f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_174f80:
    // 0x174f80: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x174f80u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_174f84:
    // 0x174f84: 0x1000000d  b           . + 4 + (0xD << 2)
label_174f88:
    if (ctx->pc == 0x174F88u) {
        ctx->pc = 0x174F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F84u;
        // 0x174f88: 0x3c150053  lui         $s5, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174F8Cu;
        goto label_174f8c;
    }
    ctx->pc = 0x174F84u;
    {
        const bool branch_taken_0x174f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174F84u;
        // 0x174f88: 0x3c150053  lui         $s5, 0x53 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)83 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174f84) {
            ctx->pc = 0x174FBCu;
            goto label_174fbc;
        }
    }
    ctx->pc = 0x174F8Cu;
label_174f8c:
    // 0x174f8c: 0x0  nop
    ctx->pc = 0x174f8cu;
    // NOP
label_174f90:
    // 0x174f90: 0x263002bc  addiu       $s0, $s1, 0x2BC
    ctx->pc = 0x174f90u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 700));
label_174f94:
    // 0x174f94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x174f94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_174f98:
    // 0x174f98: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174f98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174f9c:
    // 0x174f9c: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x174f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_174fa0:
    // 0x174fa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_174fa4:
    // 0x174fa4: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x174fa4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_174fa8:
    // 0x174fa8: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x174fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_174fac:
    // 0x174fac: 0x60f809  jalr        $v1
label_174fb0:
    if (ctx->pc == 0x174FB0u) {
        ctx->pc = 0x174FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FACu;
        // 0x174fb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FB4u;
        goto label_174fb4;
    }
    ctx->pc = 0x174FACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x174FB4u);
        ctx->pc = 0x174FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FACu;
        // 0x174fb0: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174FACu, 0x174FB4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x174FB4u;
label_174fb4:
    // 0x174fb4: 0xc041544  jal         func_105510
label_174fb8:
    if (ctx->pc == 0x174FB8u) {
        ctx->pc = 0x174FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FB4u;
        // 0x174fb8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FBCu;
        goto label_174fbc;
    }
    ctx->pc = 0x174FB4u;
    SET_GPR_U32(ctx, 31, 0x174FBCu);
    ctx->pc = 0x174FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FB4u;
    // 0x174fb8: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x174FB4u, 0x174FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FBCu;
label_174fbc:
    // 0x174fbc: 0xc05d45e  jal         func_175178
label_174fc0:
    if (ctx->pc == 0x174FC0u) {
        ctx->pc = 0x174FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FBCu;
        // 0x174fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FC4u;
        goto label_174fc4;
    }
    ctx->pc = 0x174FBCu;
    SET_GPR_U32(ctx, 31, 0x174FC4u);
    ctx->pc = 0x174FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x174FBCu;
    // 0x174fc0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175178u, 0x174FBCu, 0x174FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x174FC4u;
label_174fc4:
    // 0x174fc4: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x174fc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_174fc8:
    // 0x174fc8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_174fcc:
    if (ctx->pc == 0x174FCCu) {
        ctx->pc = 0x174FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FC8u;
        // 0x174fcc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FD0u;
        goto label_174fd0;
    }
    ctx->pc = 0x174FC8u;
    {
        const bool branch_taken_0x174fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x174FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FC8u;
        // 0x174fcc: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fc8) {
            ctx->pc = 0x174F90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174f90;
        }
    }
    ctx->pc = 0x174FD0u;
label_174fd0:
    // 0x174fd0: 0xa62002ac  sh          $zero, 0x2AC($s1)
    ctx->pc = 0x174fd0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 684), (uint16_t)GPR_U32(ctx, 0));
label_174fd4:
    // 0x174fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x174fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_174fd8:
    // 0x174fd8: 0x26330004  addiu       $s3, $s1, 0x4
    ctx->pc = 0x174fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_174fdc:
    // 0x174fdc: 0x1000000d  b           . + 4 + (0xD << 2)
label_174fe0:
    if (ctx->pc == 0x174FE0u) {
        ctx->pc = 0x174FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FDCu;
        // 0x174fe0: 0x32940001  andi        $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x174FE4u;
        goto label_174fe4;
    }
    ctx->pc = 0x174FDCu;
    {
        const bool branch_taken_0x174fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x174FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x174FDCu;
        // 0x174fe0: 0x32940001  andi        $s4, $s4, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x174fdc) {
            ctx->pc = 0x175014u;
            goto label_175014;
        }
    }
    ctx->pc = 0x174FE4u;
label_174fe4:
    // 0x174fe4: 0x0  nop
    ctx->pc = 0x174fe4u;
    // NOP
label_174fe8:
    // 0x174fe8: 0x26300304  addiu       $s0, $s1, 0x304
    ctx->pc = 0x174fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 772));
label_174fec:
    // 0x174fec: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x174fecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_174ff0:
    // 0x174ff0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x174ff0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_174ff4:
    // 0x174ff4: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x174ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_174ff8:
    // 0x174ff8: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x174ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_174ffc:
    // 0x174ffc: 0x84440080  lh          $a0, 0x80($v0)
    ctx->pc = 0x174ffcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 128)));
label_175000:
    // 0x175000: 0x8c430084  lw          $v1, 0x84($v0)
    ctx->pc = 0x175000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 132)));
label_175004:
    // 0x175004: 0x60f809  jalr        $v1
label_175008:
    if (ctx->pc == 0x175008u) {
        ctx->pc = 0x175008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175004u;
        // 0x175008: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17500Cu;
        goto label_17500c;
    }
    ctx->pc = 0x175004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x17500Cu);
        ctx->pc = 0x175008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175004u;
        // 0x175008: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175004u, 0x17500Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x17500Cu;
label_17500c:
    // 0x17500c: 0xc041544  jal         func_105510
label_175010:
    if (ctx->pc == 0x175010u) {
        ctx->pc = 0x175010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17500Cu;
        // 0x175010: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175014u;
        goto label_175014;
    }
    ctx->pc = 0x17500Cu;
    SET_GPR_U32(ctx, 31, 0x175014u);
    ctx->pc = 0x175010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17500Cu;
    // 0x175010: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105510u, 0x17500Cu, 0x175014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175014u;
label_175014:
    // 0x175014: 0xc05d610  jal         func_175840
label_175018:
    if (ctx->pc == 0x175018u) {
        ctx->pc = 0x175018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175014u;
        // 0x175018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17501Cu;
        goto label_17501c;
    }
    ctx->pc = 0x175014u;
    SET_GPR_U32(ctx, 31, 0x17501Cu);
    ctx->pc = 0x175018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175014u;
    // 0x175018: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x175840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x175840u, 0x175014u, 0x17501Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17501Cu;
label_17501c:
    // 0x17501c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x17501cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_175020:
    // 0x175020: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_175024:
    if (ctx->pc == 0x175024u) {
        ctx->pc = 0x175024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175020u;
        // 0x175024: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175028u;
        goto label_175028;
    }
    ctx->pc = 0x175020u;
    {
        const bool branch_taken_0x175020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x175024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175020u;
        // 0x175024: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x175020) {
            ctx->pc = 0x174FE8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_174fe8;
        }
    }
    ctx->pc = 0x175028u;
label_175028:
    // 0x175028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x175028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17502c:
    // 0x17502c: 0xa62002ae  sh          $zero, 0x2AE($s1)
    ctx->pc = 0x17502cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 686), (uint16_t)GPR_U32(ctx, 0));
label_175030:
    // 0x175030: 0xae2002b8  sw          $zero, 0x2B8($s1)
    ctx->pc = 0x175030u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 696), GPR_U32(ctx, 0));
label_175034:
    // 0x175034: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x175034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_175038:
    // 0x175038: 0xa62002b2  sh          $zero, 0x2B2($s1)
    ctx->pc = 0x175038u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 690), (uint16_t)GPR_U32(ctx, 0));
label_17503c:
    // 0x17503c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17503cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_175040:
    // 0x175040: 0xc05fdc2  jal         func_17F708
label_175044:
    if (ctx->pc == 0x175044u) {
        ctx->pc = 0x175044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175040u;
        // 0x175044: 0xae2202b4  sw          $v0, 0x2B4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175048u;
        goto label_175048;
    }
    ctx->pc = 0x175040u;
    SET_GPR_U32(ctx, 31, 0x175048u);
    ctx->pc = 0x175044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175040u;
    // 0x175044: 0xae2202b4  sw          $v0, 0x2B4($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 692), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F708u, 0x175040u, 0x175048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x175048u;
label_175048:
    // 0x175048: 0x26a24298  addiu       $v0, $s5, 0x4298
    ctx->pc = 0x175048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 17048));
label_17504c:
    // 0x17504c: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_175050:
    if (ctx->pc == 0x175050u) {
        ctx->pc = 0x175050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17504Cu;
        // 0x175050: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175054u;
        goto label_175054;
    }
    ctx->pc = 0x17504Cu;
    {
        const bool branch_taken_0x17504c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x175050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17504Cu;
        // 0x175050: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17504c) {
            ctx->pc = 0x17505Cu;
            goto label_17505c;
        }
    }
    ctx->pc = 0x175054u;
label_175054:
    // 0x175054: 0xc10b208  jal         func_42C820
label_175058:
    if (ctx->pc == 0x175058u) {
        ctx->pc = 0x175058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175054u;
        // 0x175058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x17505Cu;
        goto label_17505c;
    }
    ctx->pc = 0x175054u;
    SET_GPR_U32(ctx, 31, 0x17505Cu);
    ctx->pc = 0x175058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x175054u;
    // 0x175058: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x175054u, 0x17505Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17505Cu;
label_17505c:
    // 0x17505c: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17505cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_175060:
    // 0x175060: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x175060u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_175064:
    // 0x175064: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x175064u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_175068:
    // 0x175068: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x175068u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17506c:
    // 0x17506c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x17506cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_175070:
    // 0x175070: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x175070u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_175074:
    // 0x175074: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x175074u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_175078:
    // 0x175078: 0x3e00008  jr          $ra
label_17507c:
    if (ctx->pc == 0x17507Cu) {
        ctx->pc = 0x17507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175078u;
        // 0x17507c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x175080u;
        goto label_fallthrough_0x175078;
    }
    ctx->pc = 0x175078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17507Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x175078u;
        // 0x17507c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x175078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x175078:
    ctx->pc = 0x175080u;
}
