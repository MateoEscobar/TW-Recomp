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

// Function: sub_0028FBB0
// Address: 0x28fbb0 - 0x28fe28
void sub_0028FBB0_0x28fbb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028FBB0_0x28fbb0");
#endif

    switch (ctx->pc) {
        case 0x28fbd4u: goto label_28fbd4;
        case 0x28fbf4u: goto label_28fbf4;
        case 0x28fbfcu: goto label_28fbfc;
        case 0x28fc04u: goto label_28fc04;
        case 0x28fc0cu: goto label_28fc0c;
        case 0x28fc44u: goto label_28fc44;
        case 0x28fc64u: goto label_28fc64;
        case 0x28fc98u: goto label_28fc98;
        case 0x28fcbcu: goto label_28fcbc;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fcd8u: goto label_28fcd8;
        case 0x28fd0cu: goto label_28fd0c;
        case 0x28fd18u: goto label_28fd18;
        case 0x28fd20u: goto label_28fd20;
        case 0x28fd40u: goto label_28fd40;
        case 0x28fd68u: goto label_28fd68;
        case 0x28fd78u: goto label_28fd78;
        case 0x28fd9cu: goto label_28fd9c;
        case 0x28fdb4u: goto label_28fdb4;
        case 0x28fdccu: goto label_28fdcc;
        case 0x28fde4u: goto label_28fde4;
        case 0x28fdecu: goto label_28fdec;
        case 0x28fdf8u: goto label_28fdf8;
        default: break;
    }

    ctx->pc = 0x28fbb0u;

    // 0x28fbb0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28fbb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28fbb4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x28fbb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x28fbb8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28fbb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fbbc: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x28fbbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x28fbc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28fbc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28fbc4: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x28fbc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x28fbc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x28fbc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x28fbcc: 0xc0a2b06  jal         func_28AC18
    ctx->pc = 0x28FBCCu;
    SET_GPR_U32(ctx, 31, 0x28FBD4u);
    ctx->pc = 0x28FBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBCCu;
    // 0x28fbd0: 0xe7b40050  swc1        $f20, 0x50($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AC18u, 0x28FBCCu, 0x28FBD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBD4u;
label_28fbd4:
    // 0x28fbd4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x28fbd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x28fbd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28fbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fbdc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FBDCu;
    {
        const bool branch_taken_0x28fbdc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x28FBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FBDCu;
        // 0x28fbe0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fbdc) {
            ctx->pc = 0x28FBECu;
            goto label_28fbec;
        }
    }
    ctx->pc = 0x28FBE4u;
    // 0x28fbe4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FBE4u;
    {
        const bool branch_taken_0x28fbe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fbe4) {
            ctx->pc = 0x28FBF4u;
            goto label_28fbf4;
        }
    }
    ctx->pc = 0x28FBECu;
label_28fbec:
    // 0x28fbec: 0xc0a3ffe  jal         func_28FFF8
    ctx->pc = 0x28FBECu;
    SET_GPR_U32(ctx, 31, 0x28FBF4u);
    ctx->pc = 0x28FBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBECu;
    // 0x28fbf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FFF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FFF8u, 0x28FBECu, 0x28FBF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBF4u;
label_28fbf4:
    // 0x28fbf4: 0xc0a4838  jal         func_2920E0
    ctx->pc = 0x28FBF4u;
    SET_GPR_U32(ctx, 31, 0x28FBFCu);
    ctx->pc = 0x28FBF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBF4u;
    // 0x28fbf8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2920E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2920E0u, 0x28FBF4u, 0x28FBFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FBFCu;
label_28fbfc:
    // 0x28fbfc: 0xc0a2efc  jal         func_28BBF0
    ctx->pc = 0x28FBFCu;
    SET_GPR_U32(ctx, 31, 0x28FC04u);
    ctx->pc = 0x28FC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FBFCu;
    // 0x28fc00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BBF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BBF0u, 0x28FBFCu, 0x28FC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC04u;
label_28fc04:
    // 0x28fc04: 0xc089fe4  jal         func_227F90
    ctx->pc = 0x28FC04u;
    SET_GPR_U32(ctx, 31, 0x28FC0Cu);
    ctx->pc = 0x28FC08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC04u;
    // 0x28fc08: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227F90u, 0x28FC04u, 0x28FC0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC0Cu;
label_28fc0c:
    // 0x28fc0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28fc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fc10: 0x1044000e  beq         $v0, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x28FC10u;
    {
        const bool branch_taken_0x28fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x28FC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC10u;
        // 0x28fc14: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc10) {
            ctx->pc = 0x28FC4Cu;
            goto label_28fc4c;
        }
    }
    ctx->pc = 0x28FC18u;
    // 0x28fc18: 0x8e23020c  lw          $v1, 0x20C($s1)
    ctx->pc = 0x28fc18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 524)));
    // 0x28fc1c: 0x906200d4  lbu         $v0, 0xD4($v1)
    ctx->pc = 0x28fc1cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 212)));
    // 0x28fc20: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28fc20u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28fc24: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28FC24u;
    {
        const bool branch_taken_0x28fc24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x28FC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC24u;
        // 0x28fc28: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc24) {
            ctx->pc = 0x28FC4Cu;
            goto label_28fc4c;
        }
    }
    ctx->pc = 0x28FC2Cu;
    // 0x28fc2c: 0x9222000a  lbu         $v0, 0xA($s1)
    ctx->pc = 0x28fc2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 10)));
    // 0x28fc30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x28fc30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x28fc34: 0x14440009  bne         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28FC34u;
    {
        const bool branch_taken_0x28fc34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x28fc34) {
            ctx->pc = 0x28FC5Cu;
            goto label_28fc5c;
        }
    }
    ctx->pc = 0x28FC3Cu;
    // 0x28fc3c: 0xc089f4a  jal         func_227D28
    ctx->pc = 0x28FC3Cu;
    SET_GPR_U32(ctx, 31, 0x28FC44u);
    ctx->pc = 0x28FC40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC3Cu;
    // 0x28fc40: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x227D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x227D28u, 0x28FC3Cu, 0x28FC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC44u;
label_28fc44:
    // 0x28fc44: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FC44u;
    {
        const bool branch_taken_0x28fc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC44u;
        // 0x28fc48: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc44) {
            ctx->pc = 0x28FC5Cu;
            goto label_28fc5c;
        }
    }
    ctx->pc = 0x28FC4Cu;
label_28fc4c:
    // 0x28fc4c: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x28fc4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294948660)));
    // 0x28fc50: 0x8c640048  lw          $a0, 0x48($v1)
    ctx->pc = 0x28fc50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x28fc54: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x28FC54u;
    {
        const bool branch_taken_0x28fc54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC54u;
        // 0x28fc58: 0xae240030  sw          $a0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc54) {
            ctx->pc = 0x28FE08u;
            goto label_28fe08;
        }
    }
    ctx->pc = 0x28FC5Cu;
label_28fc5c:
    // 0x28fc5c: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28FC5Cu;
    SET_GPR_U32(ctx, 31, 0x28FC64u);
    ctx->pc = 0x28FC60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC5Cu;
    // 0x28fc60: 0x26240124  addiu       $a0, $s1, 0x124 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28FC5Cu, 0x28FC64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC64u;
label_28fc64:
    // 0x28fc64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28fc64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fc68: 0x12400019  beqz        $s2, . + 4 + (0x19 << 2)
    ctx->pc = 0x28FC68u;
    {
        const bool branch_taken_0x28fc68 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC68u;
        // 0x28fc6c: 0x2402002c  addiu       $v0, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc68) {
            ctx->pc = 0x28FCD0u;
            goto label_28fcd0;
        }
    }
    ctx->pc = 0x28FC70u;
    // 0x28fc70: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28fc74: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28FC74u;
    {
        const bool branch_taken_0x28fc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fc74) {
            ctx->pc = 0x28FC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FC74u;
            // 0x28fc78: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FC7Cu;
            goto label_28fc7c;
        }
    }
    ctx->pc = 0x28FC7Cu;
label_28fc7c:
    // 0x28fc7c: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28fc7cu;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28fc80: 0x1810  mfhi        $v1
    ctx->pc = 0x28fc80u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28fc84: 0x14600012  bnez        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x28FC84u;
    {
        const bool branch_taken_0x28fc84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FC84u;
        // 0x28fc88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc84) {
            ctx->pc = 0x28FCD0u;
            goto label_28fcd0;
        }
    }
    ctx->pc = 0x28FC8Cu;
    // 0x28fc8c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x28fc8cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fc90: 0xc0a2fc0  jal         func_28BF00
    ctx->pc = 0x28FC90u;
    SET_GPR_U32(ctx, 31, 0x28FC98u);
    ctx->pc = 0x28FC94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FC90u;
    // 0x28fc94: 0xc634012c  lwc1        $f20, 0x12C($s1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BF00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BF00u, 0x28FC90u, 0x28FC98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FC98u;
label_28fc98:
    // 0x28fc98: 0x3c014110  lui         $at, 0x4110
    ctx->pc = 0x28fc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16656 << 16));
    // 0x28fc9c: 0x44817000  mtc1        $at, $f14
    ctx->pc = 0x28fc9cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x28fca0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fca4: 0x3c014080  lui         $at, 0x4080
    ctx->pc = 0x28fca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16512 << 16));
    // 0x28fca8: 0x44817800  mtc1        $at, $f15
    ctx->pc = 0x28fca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
    // 0x28fcac: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28fcacu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x28fcb0: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x28fcb0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
    // 0x28fcb4: 0xc0888fa  jal         func_2223E8
    ctx->pc = 0x28FCB4u;
    SET_GPR_U32(ctx, 31, 0x28FCBCu);
    ctx->pc = 0x28FCB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCB4u;
    // 0x28fcb8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2223E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2223E8u, 0x28FCB4u, 0x28FCBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCBCu;
label_28fcbc:
    // 0x28fcbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FCBCu;
    {
        const bool branch_taken_0x28fcbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FCC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCBCu;
        // 0x28fcc0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcbc) {
            ctx->pc = 0x28FCD0u;
            goto label_28fcd0;
        }
    }
    ctx->pc = 0x28FCC4u;
    // 0x28fcc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28fcc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fcc8: 0xc0a3050  jal         func_28C140
    ctx->pc = 0x28FCC8u;
    SET_GPR_U32(ctx, 31, 0x28FCD0u);
    ctx->pc = 0x28FCCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCC8u;
    // 0x28fccc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28C140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C140u, 0x28FCC8u, 0x28FCD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCD0u;
label_28fcd0:
    // 0x28fcd0: 0xc0a3fc2  jal         func_28FF08
    ctx->pc = 0x28FCD0u;
    SET_GPR_U32(ctx, 31, 0x28FCD8u);
    ctx->pc = 0x28FCD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FCD0u;
    // 0x28fcd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FF08u, 0x28FCD0u, 0x28FCD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FCD8u;
label_28fcd8:
    // 0x28fcd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28fcdc: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x28FCDCu;
    {
        const bool branch_taken_0x28fcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FCDCu;
        // 0x28fce0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fcdc) {
            ctx->pc = 0x28FD10u;
            goto label_28fd10;
        }
    }
    ctx->pc = 0x28FCE4u;
    // 0x28fce4: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x28fce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x28fce8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x28fce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x28fcec: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x28FCECu;
    {
        const bool branch_taken_0x28fcec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fcec) {
            ctx->pc = 0x28FCF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FCECu;
            // 0x28fcf0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FCF4u;
            goto label_28fcf4;
        }
    }
    ctx->pc = 0x28FCF4u;
label_28fcf4:
    // 0x28fcf4: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x28fcf4u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x28fcf8: 0x1810  mfhi        $v1
    ctx->pc = 0x28fcf8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x28fcfc: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FCFCu;
    {
        const bool branch_taken_0x28fcfc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fcfc) {
            ctx->pc = 0x28FD00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FCFCu;
            // 0x28fd00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FD10u;
            goto label_28fd10;
        }
    }
    ctx->pc = 0x28FD04u;
    // 0x28fd04: 0xc0a2e92  jal         func_28BA48
    ctx->pc = 0x28FD04u;
    SET_GPR_U32(ctx, 31, 0x28FD0Cu);
    ctx->pc = 0x28FD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD04u;
    // 0x28fd08: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28BA48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28BA48u, 0x28FD04u, 0x28FD0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD0Cu;
label_28fd0c:
    // 0x28fd0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28fd0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28fd10:
    // 0x28fd10: 0xc0a3e86  jal         func_28FA18
    ctx->pc = 0x28FD10u;
    SET_GPR_U32(ctx, 31, 0x28FD18u);
    ctx->pc = 0x28FD14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD10u;
    // 0x28fd14: 0x3c130051  lui         $s3, 0x51 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)81 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FA18u, 0x28FD10u, 0x28FD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD18u;
label_28fd18:
    // 0x28fd18: 0xc0a3cac  jal         func_28F2B0
    ctx->pc = 0x28FD18u;
    SET_GPR_U32(ctx, 31, 0x28FD20u);
    ctx->pc = 0x28FD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD18u;
    // 0x28fd1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28F2B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28F2B0u, 0x28FD18u, 0x28FD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD20u;
label_28fd20:
    // 0x28fd20: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28fd20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28fd24: 0x1443001b  bne         $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x28FD24u;
    {
        const bool branch_taken_0x28fd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28fd24) {
            ctx->pc = 0x28FD94u;
            goto label_28fd94;
        }
    }
    ctx->pc = 0x28FD2Cu;
    // 0x28fd2c: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28fd2cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x28fd30: 0x4400018  bltz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x28FD30u;
    {
        const bool branch_taken_0x28fd30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28FD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD30u;
        // 0x28fd34: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd30) {
            ctx->pc = 0x28FD94u;
            goto label_28fd94;
        }
    }
    ctx->pc = 0x28FD38u;
    // 0x28fd38: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x28fd38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x28fd3c: 0x24120002  addiu       $s2, $zero, 0x2
    ctx->pc = 0x28fd3cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28fd40:
    // 0x28fd40: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x28fd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
    // 0x28fd44: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x28fd44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x28fd48: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FD48u;
    {
        const bool branch_taken_0x28fd48 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD48u;
        // 0x28fd4c: 0x21080  sll         $v0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd48) {
            ctx->pc = 0x28FD5Cu;
            goto label_28fd5c;
        }
    }
    ctx->pc = 0x28FD50u;
    // 0x28fd50: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x28fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x28fd54: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28FD54u;
    {
        const bool branch_taken_0x28fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD54u;
        // 0x28fd58: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd54) {
            ctx->pc = 0x28FD60u;
            goto label_28fd60;
        }
    }
    ctx->pc = 0x28FD5Cu;
label_28fd5c:
    // 0x28fd5c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28fd5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fd60:
    // 0x28fd60: 0xc0a7bb6  jal         func_29EED8
    ctx->pc = 0x28FD60u;
    SET_GPR_U32(ctx, 31, 0x28FD68u);
    ctx->pc = 0x29EED8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29EED8u, 0x28FD60u, 0x28FD68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD68u;
label_28fd68:
    // 0x28fd68: 0x14520005  bne         $v0, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FD68u;
    {
        const bool branch_taken_0x28fd68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x28fd68) {
            ctx->pc = 0x28FD80u;
            goto label_28fd80;
        }
    }
    ctx->pc = 0x28FD70u;
    // 0x28fd70: 0xc0a35f6  jal         func_28D7D8
    ctx->pc = 0x28FD70u;
    SET_GPR_U32(ctx, 31, 0x28FD78u);
    ctx->pc = 0x28FD74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD70u;
    // 0x28fd74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D7D8u, 0x28FD70u, 0x28FD78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD78u;
label_28fd78:
    // 0x28fd78: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28FD78u;
    {
        const bool branch_taken_0x28fd78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD78u;
        // 0x28fd7c: 0x8222002c  lb          $v0, 0x2C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd78) {
            ctx->pc = 0x28FD8Cu;
            goto label_28fd8c;
        }
    }
    ctx->pc = 0x28FD80u;
label_28fd80:
    // 0x28fd80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28FD80u;
    {
        const bool branch_taken_0x28fd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fd80) {
            ctx->pc = 0x28FD94u;
            goto label_28fd94;
        }
    }
    ctx->pc = 0x28FD88u;
    // 0x28fd88: 0x8222002c  lb          $v0, 0x2C($s1)
    ctx->pc = 0x28fd88u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
label_28fd8c:
    // 0x28fd8c: 0x441ffec  bgez        $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x28FD8Cu;
    {
        const bool branch_taken_0x28fd8c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28FD90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FD8Cu;
        // 0x28fd90: 0x9223002c  lbu         $v1, 0x2C($s1) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fd8c) {
            ctx->pc = 0x28FD40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_28fd40;
        }
    }
    ctx->pc = 0x28FD94u;
label_28fd94:
    // 0x28fd94: 0xc0a3f8a  jal         func_28FE28
    ctx->pc = 0x28FD94u;
    SET_GPR_U32(ctx, 31, 0x28FD9Cu);
    ctx->pc = 0x28FD98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FD94u;
    // 0x28fd98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28FE28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FE28u, 0x28FD94u, 0x28FD9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FD9Cu;
label_28fd9c:
    // 0x28fd9c: 0x922202d8  lbu         $v0, 0x2D8($s1)
    ctx->pc = 0x28fd9cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 728)));
    // 0x28fda0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28FDA0u;
    {
        const bool branch_taken_0x28fda0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDA0u;
        // 0x28fda4: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fda0) {
            ctx->pc = 0x28FDFCu;
            goto label_28fdfc;
        }
    }
    ctx->pc = 0x28FDA8u;
    // 0x28fda8: 0x8c44489c  lw          $a0, 0x489C($v0)
    ctx->pc = 0x28fda8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18588)));
    // 0x28fdac: 0xc0e409a  jal         func_390268
    ctx->pc = 0x28FDACu;
    SET_GPR_U32(ctx, 31, 0x28FDB4u);
    ctx->pc = 0x28FDB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDACu;
    // 0x28fdb0: 0x24840228  addiu       $a0, $a0, 0x228 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x28FDACu, 0x28FDB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDB4u;
label_28fdb4:
    // 0x28fdb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28fdb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fdb8: 0x52000010  beql        $s0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x28FDB8u;
    {
        const bool branch_taken_0x28fdb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fdb8) {
            ctx->pc = 0x28FDBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x28FDB8u;
            // 0x28fdbc: 0xa22002d8  sb          $zero, 0x2D8($s1) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 17), 728), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x28FDFCu;
            goto label_28fdfc;
        }
    }
    ctx->pc = 0x28FDC0u;
    // 0x28fdc0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x28fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28fdc4: 0xc08a200  jal         func_228800
    ctx->pc = 0x28FDC4u;
    SET_GPR_U32(ctx, 31, 0x28FDCCu);
    ctx->pc = 0x28FDC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDC4u;
    // 0x28fdc8: 0x8c4400cc  lw          $a0, 0xCC($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x28FDC4u, 0x28FDCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDCCu;
label_28fdcc:
    // 0x28fdcc: 0x9043011b  lbu         $v1, 0x11B($v0)
    ctx->pc = 0x28fdccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 283)));
    // 0x28fdd0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x28fdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28fdd4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28FDD4u;
    {
        const bool branch_taken_0x28fdd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x28FDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FDD4u;
        // 0x28fdd8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fdd4) {
            ctx->pc = 0x28FDE4u;
            goto label_28fde4;
        }
    }
    ctx->pc = 0x28FDDCu;
    // 0x28fddc: 0xc0a33ae  jal         func_28CEB8
    ctx->pc = 0x28FDDCu;
    SET_GPR_U32(ctx, 31, 0x28FDE4u);
    ctx->pc = 0x28FDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDDCu;
    // 0x28fde0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28CEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28CEB8u, 0x28FDDCu, 0x28FDE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDE4u;
label_28fde4:
    // 0x28fde4: 0xc087502  jal         func_21D408
    ctx->pc = 0x28FDE4u;
    SET_GPR_U32(ctx, 31, 0x28FDECu);
    ctx->pc = 0x28FDE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDE4u;
    // 0x28fde8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x28FDE4u, 0x28FDECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDECu;
label_28fdec:
    // 0x28fdec: 0x8c44020c  lw          $a0, 0x20C($v0)
    ctx->pc = 0x28fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    // 0x28fdf0: 0xc0598c2  jal         func_166308
    ctx->pc = 0x28FDF0u;
    SET_GPR_U32(ctx, 31, 0x28FDF8u);
    ctx->pc = 0x28FDF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x28FDF0u;
    // 0x28fdf4: 0x8e250000  lw          $a1, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x166308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x166308u, 0x28FDF0u, 0x28FDF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FDF8u;
label_28fdf8:
    // 0x28fdf8: 0xa22002d8  sb          $zero, 0x2D8($s1)
    ctx->pc = 0x28fdf8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 728), (uint8_t)GPR_U32(ctx, 0));
label_28fdfc:
    // 0x28fdfc: 0x8e62b734  lw          $v0, -0x48CC($s3)
    ctx->pc = 0x28fdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294948660)));
    // 0x28fe00: 0x8c430048  lw          $v1, 0x48($v0)
    ctx->pc = 0x28fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
    // 0x28fe04: 0xae230030  sw          $v1, 0x30($s1)
    ctx->pc = 0x28fe04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
label_28fe08:
    // 0x28fe08: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x28fe08u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fe0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x28fe0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fe10: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28fe10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28fe14: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x28fe14u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28fe18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x28fe18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28fe1c: 0xc7b40050  lwc1        $f20, 0x50($sp)
    ctx->pc = 0x28fe1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28fe20: 0x3e00008  jr          $ra
    ctx->pc = 0x28FE20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FE24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x28FE20u;
        // 0x28fe24: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FE20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FE28u;
}
