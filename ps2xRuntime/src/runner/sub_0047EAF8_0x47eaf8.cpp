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

// Function: sub_0047EAF8
// Address: 0x47eaf8 - 0x47ed58
void sub_0047EAF8_0x47eaf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047EAF8_0x47eaf8");
#endif

    switch (ctx->pc) {
        case 0x47eb7cu: goto label_47eb7c;
        case 0x47ec04u: goto label_47ec04;
        case 0x47ec18u: goto label_47ec18;
        case 0x47ec24u: goto label_47ec24;
        case 0x47ec4cu: goto label_47ec4c;
        case 0x47ec58u: goto label_47ec58;
        case 0x47ed28u: goto label_47ed28;
        case 0x47ed34u: goto label_47ed34;
        default: break;
    }

    ctx->pc = 0x47eaf8u;

    // 0x47eaf8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x47eaf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x47eafc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x47eafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x47eb00: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x47eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x47eb04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47eb04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47eb08: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x47eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x47eb0c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x47eb0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47eb10: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x47eb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x47eb14: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x47eb14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47eb18: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47EB18u;
    {
        const bool branch_taken_0x47eb18 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x47EB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB18u;
        // 0x47eb1c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb18) {
            ctx->pc = 0x47EB28u;
            goto label_47eb28;
        }
    }
    ctx->pc = 0x47EB20u;
    // 0x47eb20: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x47EB20u;
    {
        const bool branch_taken_0x47eb20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB20u;
        // 0x47eb24: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb20) {
            ctx->pc = 0x47ED38u;
            goto label_47ed38;
        }
    }
    ctx->pc = 0x47EB28u;
label_47eb28:
    // 0x47eb28: 0xae050020  sw          $a1, 0x20($s0)
    ctx->pc = 0x47eb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 5));
    // 0x47eb2c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x47eb2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x47eb30: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x47eb30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x47eb34: 0x10c30017  beq         $a2, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x47EB34u;
    {
        const bool branch_taken_0x47eb34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x47EB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB34u;
        // 0x47eb38: 0xae070004  sw          $a3, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb34) {
            ctx->pc = 0x47EB94u;
            goto label_47eb94;
        }
    }
    ctx->pc = 0x47EB3Cu;
    // 0x47eb3c: 0x2cc20003  sltiu       $v0, $a2, 0x3
    ctx->pc = 0x47eb3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x47eb40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47EB40u;
    {
        const bool branch_taken_0x47eb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB40u;
        // 0x47eb44: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb40) {
            ctx->pc = 0x47EB58u;
            goto label_47eb58;
        }
    }
    ctx->pc = 0x47EB48u;
    // 0x47eb48: 0x10c2000a  beq         $a2, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x47EB48u;
    {
        const bool branch_taken_0x47eb48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB48u;
        // 0x47eb4c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb48) {
            ctx->pc = 0x47EB74u;
            goto label_47eb74;
        }
    }
    ctx->pc = 0x47EB50u;
    // 0x47eb50: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x47EB50u;
    {
        const bool branch_taken_0x47eb50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47eb50) {
            ctx->pc = 0x47ED20u;
            goto label_47ed20;
        }
    }
    ctx->pc = 0x47EB58u;
label_47eb58:
    // 0x47eb58: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47eb5c: 0x10c20040  beq         $a2, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x47EB5Cu;
    {
        const bool branch_taken_0x47eb5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EB60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB5Cu;
        // 0x47eb60: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb5c) {
            ctx->pc = 0x47EC60u;
            goto label_47ec60;
        }
    }
    ctx->pc = 0x47EB64u;
    // 0x47eb64: 0x10c20060  beq         $a2, $v0, . + 4 + (0x60 << 2)
    ctx->pc = 0x47EB64u;
    {
        const bool branch_taken_0x47eb64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB64u;
        // 0x47eb68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb64) {
            ctx->pc = 0x47ECE8u;
            goto label_47ece8;
        }
    }
    ctx->pc = 0x47EB6Cu;
    // 0x47eb6c: 0x1000006c  b           . + 4 + (0x6C << 2)
    ctx->pc = 0x47EB6Cu;
    {
        const bool branch_taken_0x47eb6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB6Cu;
        // 0x47eb70: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb6c) {
            ctx->pc = 0x47ED20u;
            goto label_47ed20;
        }
    }
    ctx->pc = 0x47EB74u;
label_47eb74:
    // 0x47eb74: 0xc130644  jal         func_4C1910
    ctx->pc = 0x47EB74u;
    SET_GPR_U32(ctx, 31, 0x47EB7Cu);
    ctx->pc = 0x47EB78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EB74u;
    // 0x47eb78: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4C1910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1910u, 0x47EB74u, 0x47EB7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EB7Cu;
label_47eb7c:
    // 0x47eb7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x47eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47eb80: 0x1043006d  beq         $v0, $v1, . + 4 + (0x6D << 2)
    ctx->pc = 0x47EB80u;
    {
        const bool branch_taken_0x47eb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x47EB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB80u;
        // 0x47eb84: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb80) {
            ctx->pc = 0x47ED38u;
            goto label_47ed38;
        }
    }
    ctx->pc = 0x47EB88u;
    // 0x47eb88: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x47eb88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
    // 0x47eb8c: 0x10000069  b           . + 4 + (0x69 << 2)
    ctx->pc = 0x47EB8Cu;
    {
        const bool branch_taken_0x47eb8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB8Cu;
        // 0x47eb90: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb8c) {
            ctx->pc = 0x47ED34u;
            goto label_47ed34;
        }
    }
    ctx->pc = 0x47EB94u;
label_47eb94:
    // 0x47eb94: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x47eb94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47eb98: 0x10e60011  beq         $a3, $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x47EB98u;
    {
        const bool branch_taken_0x47eb98 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x47EB9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EB98u;
        // 0x47eb9c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eb98) {
            ctx->pc = 0x47EBE0u;
            goto label_47ebe0;
        }
    }
    ctx->pc = 0x47EBA0u;
    // 0x47eba0: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x47eba0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x47eba4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47EBA4u;
    {
        const bool branch_taken_0x47eba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EBA4u;
        // 0x47eba8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eba4) {
            ctx->pc = 0x47EBBCu;
            goto label_47ebbc;
        }
    }
    ctx->pc = 0x47EBACu;
    // 0x47ebac: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x47EBACu;
    {
        const bool branch_taken_0x47ebac = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EBACu;
        // 0x47ebb0: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ebac) {
            ctx->pc = 0x47EBD0u;
            goto label_47ebd0;
        }
    }
    ctx->pc = 0x47EBB4u;
    // 0x47ebb4: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x47EBB4u;
    {
        const bool branch_taken_0x47ebb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ebb4) {
            ctx->pc = 0x47EC10u;
            goto label_47ec10;
        }
    }
    ctx->pc = 0x47EBBCu;
label_47ebbc:
    // 0x47ebbc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x47ebbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x47ebc0: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x47EBC0u;
    {
        const bool branch_taken_0x47ebc0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EBC0u;
        // 0x47ebc4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ebc0) {
            ctx->pc = 0x47EBF0u;
            goto label_47ebf0;
        }
    }
    ctx->pc = 0x47EBC8u;
    // 0x47ebc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x47EBC8u;
    {
        const bool branch_taken_0x47ebc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EBC8u;
        // 0x47ebcc: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ebc8) {
            ctx->pc = 0x47EC0Cu;
            goto label_47ec0c;
        }
    }
    ctx->pc = 0x47EBD0u;
label_47ebd0:
    // 0x47ebd0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47ebd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47ebd4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47ebd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ebd8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x47EBD8u;
    {
        const bool branch_taken_0x47ebd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EBD8u;
        // 0x47ebdc: 0x24a56cd8  addiu       $a1, $a1, 0x6CD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ebd8) {
            ctx->pc = 0x47EBFCu;
            goto label_47ebfc;
        }
    }
    ctx->pc = 0x47EBE0u;
label_47ebe0:
    // 0x47ebe0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47ebe0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47ebe4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47ebe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ebe8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x47EBE8u;
    {
        const bool branch_taken_0x47ebe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EBECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EBE8u;
        // 0x47ebec: 0x24a56ce0  addiu       $a1, $a1, 0x6CE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27872));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ebe8) {
            ctx->pc = 0x47EBFCu;
            goto label_47ebfc;
        }
    }
    ctx->pc = 0x47EBF0u;
label_47ebf0:
    // 0x47ebf0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x47ebf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
    // 0x47ebf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47ebf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ebf8: 0x24a56ce8  addiu       $a1, $a1, 0x6CE8
    ctx->pc = 0x47ebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 27880));
label_47ebfc:
    // 0x47ebfc: 0xc130580  jal         func_4C1600
    ctx->pc = 0x47EBFCu;
    SET_GPR_U32(ctx, 31, 0x47EC04u);
    ctx->pc = 0x4C1600u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4C1600u, 0x47EBFCu, 0x47EC04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EC04u;
label_47ec04:
    // 0x47ec04: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x47EC04u;
    {
        const bool branch_taken_0x47ec04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC04u;
        // 0x47ec08: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec04) {
            ctx->pc = 0x47EC24u;
            goto label_47ec24;
        }
    }
    ctx->pc = 0x47EC0Cu;
label_47ec0c:
    // 0x47ec0c: 0x0  nop
    ctx->pc = 0x47ec0cu;
    // NOP
label_47ec10:
    // 0x47ec10: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47EC10u;
    SET_GPR_U32(ctx, 31, 0x47EC18u);
    ctx->pc = 0x47EC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EC10u;
    // 0x47ec14: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EC10u, 0x47EC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EC18u;
label_47ec18:
    // 0x47ec18: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47ec18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ec1c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47EC1Cu;
    SET_GPR_U32(ctx, 31, 0x47EC24u);
    ctx->pc = 0x47EC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EC1Cu;
    // 0x47ec20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47EC1Cu, 0x47EC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EC24u;
label_47ec24:
    // 0x47ec24: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x47EC24u;
    {
        const bool branch_taken_0x47ec24 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC24u;
        // 0x47ec28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec24) {
            ctx->pc = 0x47EC38u;
            goto label_47ec38;
        }
    }
    ctx->pc = 0x47EC2Cu;
    // 0x47ec2c: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x47ec2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x47ec30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x47EC30u;
    {
        const bool branch_taken_0x47ec30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC30u;
        // 0x47ec34: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec30) {
            ctx->pc = 0x47EC58u;
            goto label_47ec58;
        }
    }
    ctx->pc = 0x47EC38u;
label_47ec38:
    // 0x47ec38: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x47ec38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x47ec3c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x47ec3cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x47ec40: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x47ec40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x47ec44: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47EC44u;
    SET_GPR_U32(ctx, 31, 0x47EC4Cu);
    ctx->pc = 0x47EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EC44u;
    // 0x47ec48: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47EC44u, 0x47EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EC4Cu;
label_47ec4c:
    // 0x47ec4c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47ec4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ec50: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47EC50u;
    SET_GPR_U32(ctx, 31, 0x47EC58u);
    ctx->pc = 0x47EC54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47EC50u;
    // 0x47ec54: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47EC50u, 0x47EC58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47EC58u;
label_47ec58:
    // 0x47ec58: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x47EC58u;
    {
        const bool branch_taken_0x47ec58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC58u;
        // 0x47ec5c: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec58) {
            ctx->pc = 0x47ED34u;
            goto label_47ed34;
        }
    }
    ctx->pc = 0x47EC60u;
label_47ec60:
    // 0x47ec60: 0x10e30013  beq         $a3, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x47EC60u;
    {
        const bool branch_taken_0x47ec60 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x47EC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC60u;
        // 0x47ec64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec60) {
            ctx->pc = 0x47ECB0u;
            goto label_47ecb0;
        }
    }
    ctx->pc = 0x47EC68u;
    // 0x47ec68: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x47ec68u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x47ec6c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x47EC6Cu;
    {
        const bool branch_taken_0x47ec6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x47EC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC6Cu;
        // 0x47ec70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec6c) {
            ctx->pc = 0x47EC84u;
            goto label_47ec84;
        }
    }
    ctx->pc = 0x47EC74u;
    // 0x47ec74: 0x10e20007  beq         $a3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47EC74u;
    {
        const bool branch_taken_0x47ec74 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x47EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC74u;
        // 0x47ec78: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec74) {
            ctx->pc = 0x47EC94u;
            goto label_47ec94;
        }
    }
    ctx->pc = 0x47EC7Cu;
    // 0x47ec7c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x47EC7Cu;
    {
        const bool branch_taken_0x47ec7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ec7c) {
            ctx->pc = 0x47ED20u;
            goto label_47ed20;
        }
    }
    ctx->pc = 0x47EC84u;
label_47ec84:
    // 0x47ec84: 0x10e6000f  beq         $a3, $a2, . + 4 + (0xF << 2)
    ctx->pc = 0x47EC84u;
    {
        const bool branch_taken_0x47ec84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 6));
        ctx->pc = 0x47EC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47EC84u;
        // 0x47ec88: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ec84) {
            ctx->pc = 0x47ECC4u;
            goto label_47ecc4;
        }
    }
    ctx->pc = 0x47EC8Cu;
    // 0x47ec8c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x47EC8Cu;
    {
        const bool branch_taken_0x47ec8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47ec8c) {
            ctx->pc = 0x47ED20u;
            goto label_47ed20;
        }
    }
    ctx->pc = 0x47EC94u;
label_47ec94:
    // 0x47ec94: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47ec94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x47ec98: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x47ec98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ec9c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x47ec9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x47eca0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x47eca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x47eca4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x47eca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x47eca8: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x47ECA8u;
    {
        const bool branch_taken_0x47eca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ECACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ECA8u;
        // 0x47ecac: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47eca8) {
            ctx->pc = 0x47ED34u;
            goto label_47ed34;
        }
    }
    ctx->pc = 0x47ECB0u;
label_47ecb0:
    // 0x47ecb0: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x47ecb0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ecb4: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x47ecb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
    // 0x47ecb8: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x47ecb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x47ecbc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x47ECBCu;
    {
        const bool branch_taken_0x47ecbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ECC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ECBCu;
        // 0x47ecc0: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ecbc) {
            ctx->pc = 0x47ED34u;
            goto label_47ed34;
        }
    }
    ctx->pc = 0x47ECC4u;
label_47ecc4:
    // 0x47ecc4: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x47ecc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x47ecc8: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x47ecc8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47eccc: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x47ecccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x47ecd0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x47ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x47ecd4: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x47ecd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x47ecd8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x47ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x47ecdc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x47ECDCu;
    {
        const bool branch_taken_0x47ecdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ECE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ECDCu;
        // 0x47ece0: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ecdc) {
            ctx->pc = 0x47ED34u;
            goto label_47ed34;
        }
    }
    ctx->pc = 0x47ECE4u;
    // 0x47ece4: 0x0  nop
    ctx->pc = 0x47ece4u;
    // NOP
label_47ece8:
    // 0x47ece8: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x47ece8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x47ecec: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x47ececu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x47ecf0: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x47ecf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x47ecf4: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x47ecf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x47ecf8: 0x8a240013  lwl         $a0, 0x13($s1)
    ctx->pc = 0x47ecf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x47ecfc: 0x9a240010  lwr         $a0, 0x10($s1)
    ctx->pc = 0x47ecfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x47ed00: 0xb2020013  sdl         $v0, 0x13($s0)
    ctx->pc = 0x47ed00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47ed04: 0xb602000c  sdr         $v0, 0xC($s0)
    ctx->pc = 0x47ed04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47ed08: 0xb203001b  sdl         $v1, 0x1B($s0)
    ctx->pc = 0x47ed08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47ed0c: 0xb6030014  sdr         $v1, 0x14($s0)
    ctx->pc = 0x47ed0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x47ed10: 0xaa04001f  swl         $a0, 0x1F($s0)
    ctx->pc = 0x47ed10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x47ed14: 0xba04001c  swr         $a0, 0x1C($s0)
    ctx->pc = 0x47ed14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 28); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x47ed18: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x47ED18u;
    {
        const bool branch_taken_0x47ed18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x47ED1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED18u;
        // 0x47ed1c: 0x200902d  daddu       $s2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x47ed18) {
            ctx->pc = 0x47ED34u;
            goto label_47ed34;
        }
    }
    ctx->pc = 0x47ED20u;
label_47ed20:
    // 0x47ed20: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x47ED20u;
    SET_GPR_U32(ctx, 31, 0x47ED28u);
    ctx->pc = 0x47ED24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47ED20u;
    // 0x47ed24: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x47ED20u, 0x47ED28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ED28u;
label_47ed28:
    // 0x47ed28: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x47ed28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47ed2c: 0xc11f024  jal         func_47C090
    ctx->pc = 0x47ED2Cu;
    SET_GPR_U32(ctx, 31, 0x47ED34u);
    ctx->pc = 0x47ED30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x47ED2Cu;
    // 0x47ed30: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x47ED2Cu, 0x47ED34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47ED34u;
label_47ed34:
    // 0x47ed34: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x47ed34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_47ed38:
    // 0x47ed38: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x47ed38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47ed3c: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x47ed3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47ed40: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x47ed40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47ed44: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x47ed44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47ed48: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x47ed48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47ed4c: 0x3e00008  jr          $ra
    ctx->pc = 0x47ED4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47ED50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x47ED4Cu;
        // 0x47ed50: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47ED4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47ED54u;
    // 0x47ed54: 0x0  nop
    ctx->pc = 0x47ed54u;
    // NOP
    ctx->pc = 0x47ed58u;
}
