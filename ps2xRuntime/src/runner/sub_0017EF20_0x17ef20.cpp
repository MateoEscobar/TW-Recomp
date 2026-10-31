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

// Function: sub_0017EF20
// Address: 0x17ef20 - 0x17f160
void sub_0017EF20_0x17ef20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017EF20_0x17ef20");
#endif

    switch (ctx->pc) {
        case 0x17ef44u: goto label_17ef44;
        case 0x17f114u: goto label_17f114;
        case 0x17f124u: goto label_17f124;
        case 0x17f138u: goto label_17f138;
        case 0x17f150u: goto label_17f150;
        default: break;
    }

    ctx->pc = 0x17ef20u;

    // 0x17ef20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x17ef20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x17ef24: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x17ef24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x17ef28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17ef28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17ef2c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17ef2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ef30: 0x16000006  bnez        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EF30u;
    {
        const bool branch_taken_0x17ef30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF30u;
        // 0x17ef34: 0x8fac0070  lw          $t4, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef30) {
            ctx->pc = 0x17EF4Cu;
            goto label_17ef4c;
        }
    }
    ctx->pc = 0x17EF38u;
    // 0x17ef38: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ef38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ef3c: 0x15820006  bne         $t4, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x17EF3Cu;
    {
        const bool branch_taken_0x17ef3c = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x17EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF3Cu;
        // 0x17ef40: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef3c) {
            ctx->pc = 0x17EF58u;
            goto label_17ef58;
        }
    }
    ctx->pc = 0x17EF44u;
label_17ef44:
    // 0x17ef44: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x17EF44u;
    {
        const bool branch_taken_0x17ef44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF44u;
        // 0x17ef48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef44) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17EF4Cu;
label_17ef4c:
    // 0x17ef4c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x17ef4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x17ef50: 0x11820027  beq         $t4, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x17EF50u;
    {
        const bool branch_taken_0x17ef50 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 2));
        ctx->pc = 0x17EF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF50u;
        // 0x17ef54: 0x2ca20004  sltiu       $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef50) {
            ctx->pc = 0x17EFF0u;
            goto label_17eff0;
        }
    }
    ctx->pc = 0x17EF58u;
label_17ef58:
    // 0x17ef58: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x17EF58u;
    {
        const bool branch_taken_0x17ef58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF58u;
        // 0x17ef5c: 0x2d220004  sltiu       $v0, $t1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef58) {
            ctx->pc = 0x17EF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ef44;
        }
    }
    ctx->pc = 0x17EF60u;
    // 0x17ef60: 0x1040fff8  beqz        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x17EF60u;
    {
        const bool branch_taken_0x17ef60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF60u;
        // 0x17ef64: 0x2d420021  sltiu       $v0, $t2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef60) {
            ctx->pc = 0x17EF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ef44;
        }
    }
    ctx->pc = 0x17EF68u;
    // 0x17ef68: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
    ctx->pc = 0x17EF68u;
    {
        const bool branch_taken_0x17ef68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF68u;
        // 0x17ef6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef68) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17EF70u;
    // 0x17ef70: 0x1160000d  beqz        $t3, . + 4 + (0xD << 2)
    ctx->pc = 0x17EF70u;
    {
        const bool branch_taken_0x17ef70 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF70u;
        // 0x17ef74: 0x2d620007  sltiu       $v0, $t3, 0x7 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef70) {
            ctx->pc = 0x17EFA8u;
            goto label_17efa8;
        }
    }
    ctx->pc = 0x17EF78u;
    // 0x17ef78: 0x10400075  beqz        $v0, . + 4 + (0x75 << 2)
    ctx->pc = 0x17EF78u;
    {
        const bool branch_taken_0x17ef78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EF78u;
        // 0x17ef7c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ef78) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17EF80u;
    // 0x17ef80: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17ef80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17ef84: 0x0  nop
    ctx->pc = 0x17ef84u;
    // NOP
    // 0x17ef88: 0x46007834  c.lt.s      $f15, $f0
    ctx->pc = 0x17ef88u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[15], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef8c: 0x0  nop
    ctx->pc = 0x17ef8cu;
    // NOP
    // 0x17ef90: 0x45030070  bc1tl       . + 4 + (0x70 << 2)
    ctx->pc = 0x17EF90u;
    {
        const bool branch_taken_0x17ef90 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17ef90) {
            ctx->pc = 0x17EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EF90u;
            // 0x17ef94: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F154u;
            goto label_17f154;
        }
    }
    ctx->pc = 0x17EF98u;
    // 0x17ef98: 0x46008034  c.lt.s      $f16, $f0
    ctx->pc = 0x17ef98u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[16], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17ef9c: 0x0  nop
    ctx->pc = 0x17ef9cu;
    // NOP
    // 0x17efa0: 0x4503006c  bc1tl       . + 4 + (0x6C << 2)
    ctx->pc = 0x17EFA0u;
    {
        const bool branch_taken_0x17efa0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x17efa0) {
            ctx->pc = 0x17EFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17EFA0u;
            // 0x17efa4: 0x7bb00060  lq          $s0, 0x60($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F154u;
            goto label_17f154;
        }
    }
    ctx->pc = 0x17EFA8u;
label_17efa8:
    // 0x17efa8: 0x2ca20002  sltiu       $v0, $a1, 0x2
    ctx->pc = 0x17efa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x17efac: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EFACu;
    {
        const bool branch_taken_0x17efac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17EFB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFACu;
        // 0x17efb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efac) {
            ctx->pc = 0x17EFD0u;
            goto label_17efd0;
        }
    }
    ctx->pc = 0x17EFB4u;
    // 0x17efb4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17efb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17efb8: 0x0  nop
    ctx->pc = 0x17efb8u;
    // NOP
    // 0x17efbc: 0x46006034  c.lt.s      $f12, $f0
    ctx->pc = 0x17efbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[12], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17efc0: 0x0  nop
    ctx->pc = 0x17efc0u;
    // NOP
    // 0x17efc4: 0x45010062  bc1t        . + 4 + (0x62 << 2)
    ctx->pc = 0x17EFC4u;
    {
        const bool branch_taken_0x17efc4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EFC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFC4u;
        // 0x17efc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efc4) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17EFCCu;
    // 0x17efcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17efccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17efd0:
    // 0x17efd0: 0x14a2000a  bne         $a1, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x17EFD0u;
    {
        const bool branch_taken_0x17efd0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x17efd0) {
            ctx->pc = 0x17EFFCu;
            goto label_17effc;
        }
    }
    ctx->pc = 0x17EFD8u;
    // 0x17efd8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17efd8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17efdc: 0x0  nop
    ctx->pc = 0x17efdcu;
    // NOP
    // 0x17efe0: 0x46006834  c.lt.s      $f13, $f0
    ctx->pc = 0x17efe0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[13], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x17efe4: 0x0  nop
    ctx->pc = 0x17efe4u;
    // NOP
    // 0x17efe8: 0x45010059  bc1t        . + 4 + (0x59 << 2)
    ctx->pc = 0x17EFE8u;
    {
        const bool branch_taken_0x17efe8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFE8u;
        // 0x17efec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17efe8) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17EFF0u;
label_17eff0:
    // 0x17eff0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x17eff0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x17eff4: 0x10a20008  beq         $a1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17EFF4u;
    {
        const bool branch_taken_0x17eff4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x17EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFF4u;
        // 0x17eff8: 0x24020081  addiu       $v0, $zero, 0x81 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 129));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17eff4) {
            ctx->pc = 0x17F018u;
            goto label_17f018;
        }
    }
    ctx->pc = 0x17EFFCu;
label_17effc:
    // 0x17effc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x17EFFCu;
    {
        const bool branch_taken_0x17effc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17EFFCu;
        // 0x17f000: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17effc) {
            ctx->pc = 0x17F014u;
            goto label_17f014;
        }
    }
    ctx->pc = 0x17F004u;
    // 0x17f004: 0x50a20004  beql        $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17F004u;
    {
        const bool branch_taken_0x17f004 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x17f004) {
            ctx->pc = 0x17F008u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17F004u;
            // 0x17f008: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17F018u;
            goto label_17f018;
        }
    }
    ctx->pc = 0x17F00Cu;
    // 0x17f00c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x17F00Cu;
    {
        const bool branch_taken_0x17f00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F00Cu;
        // 0x17f010: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f00c) {
            ctx->pc = 0x17F01Cu;
            goto label_17f01c;
        }
    }
    ctx->pc = 0x17F014u;
label_17f014:
    // 0x17f014: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x17f014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17f018:
    // 0x17f018: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x17f018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_17f01c:
    // 0x17f01c: 0x39820001  xori        $v0, $t4, 0x1
    ctx->pc = 0x17f01cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) ^ (uint64_t)(uint16_t)1);
    // 0x17f020: 0xafaa0048  sw          $t2, 0x48($sp)
    ctx->pc = 0x17f020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 10));
    // 0x17f024: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x17f024u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x17f028: 0xafa90044  sw          $t1, 0x44($sp)
    ctx->pc = 0x17f028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 9));
    // 0x17f02c: 0xa7a2004e  sh          $v0, 0x4E($sp)
    ctx->pc = 0x17f02cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 78), (uint16_t)GPR_U32(ctx, 2));
    // 0x17f030: 0x2563ffff  addiu       $v1, $t3, -0x1
    ctx->pc = 0x17f030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
    // 0x17f034: 0xe7ad0034  swc1        $f13, 0x34($sp)
    ctx->pc = 0x17f034u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x17f038: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x17f038u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x17f03c: 0xe7af003c  swc1        $f15, 0x3C($sp)
    ctx->pc = 0x17f03cu;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    // 0x17f040: 0xe7ae0038  swc1        $f14, 0x38($sp)
    ctx->pc = 0x17f040u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x17f044: 0xe7b00040  swc1        $f16, 0x40($sp)
    ctx->pc = 0x17f044u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x17f048: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x17f048u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x17f04c: 0x69040007  ldl         $a0, 0x7($t0)
    ctx->pc = 0x17f04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17f050: 0x6d040000  ldr         $a0, 0x0($t0)
    ctx->pc = 0x17f050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17f054: 0x6905000f  ldl         $a1, 0xF($t0)
    ctx->pc = 0x17f054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x17f058: 0x6d050008  ldr         $a1, 0x8($t0)
    ctx->pc = 0x17f058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x17f05c: 0xb3a40027  sdl         $a0, 0x27($sp)
    ctx->pc = 0x17f05cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f060: 0xb7a40020  sdr         $a0, 0x20($sp)
    ctx->pc = 0x17f060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f064: 0xb3a5002f  sdl         $a1, 0x2F($sp)
    ctx->pc = 0x17f064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f068: 0xb7a50028  sdr         $a1, 0x28($sp)
    ctx->pc = 0x17f068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f06c: 0x68e40007  ldl         $a0, 0x7($a3)
    ctx->pc = 0x17f06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x17f070: 0x6ce40000  ldr         $a0, 0x0($a3)
    ctx->pc = 0x17f070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x17f074: 0x8ce50008  lw          $a1, 0x8($a3)
    ctx->pc = 0x17f074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x17f078: 0xb3a40017  sdl         $a0, 0x17($sp)
    ctx->pc = 0x17f078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f07c: 0xb7a40010  sdr         $a0, 0x10($sp)
    ctx->pc = 0x17f07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f080: 0xafa50018  sw          $a1, 0x18($sp)
    ctx->pc = 0x17f080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 5));
    // 0x17f084: 0x68ca0007  ldl         $t2, 0x7($a2)
    ctx->pc = 0x17f084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
    // 0x17f088: 0x6cca0000  ldr         $t2, 0x0($a2)
    ctx->pc = 0x17f088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
    // 0x17f08c: 0x8cc40008  lw          $a0, 0x8($a2)
    ctx->pc = 0x17f08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x17f090: 0xb3aa000b  sdl         $t2, 0xB($sp)
    ctx->pc = 0x17f090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f094: 0xb7aa0004  sdr         $t2, 0x4($sp)
    ctx->pc = 0x17f094u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x17f098: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x17f098u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x17f09c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x17F09Cu;
    {
        const bool branch_taken_0x17f09c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F09Cu;
        // 0x17f0a0: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f09c) {
            ctx->pc = 0x17F0ECu;
            goto label_17f0ec;
        }
    }
    ctx->pc = 0x17F0A4u;
    // 0x17f0a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x17f0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x17f0a8: 0x244223a0  addiu       $v0, $v0, 0x23A0
    ctx->pc = 0x17f0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9120));
    // 0x17f0ac: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x17f0acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x17f0b0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x17f0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17f0b4: 0x800008  jr          $a0
    ctx->pc = 0x17F0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x17F0BCu: goto label_17f0bc;
            case 0x17F0C4u: goto label_17f0c4;
            case 0x17F0CCu: goto label_17f0cc;
            case 0x17F0D4u: goto label_17f0d4;
            case 0x17F0DCu: goto label_17f0dc;
            case 0x17F0E4u: goto label_17f0e4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F0B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x17F0BCu;
label_17f0bc:
    // 0x17f0bc: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x17F0BCu;
    {
        const bool branch_taken_0x17f0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0BCu;
        // 0x17f0c0: 0xa7a0004c  sh          $zero, 0x4C($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0bc) {
            ctx->pc = 0x17F0F4u;
            goto label_17f0f4;
        }
    }
    ctx->pc = 0x17F0C4u;
label_17f0c4:
    // 0x17f0c4: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x17F0C4u;
    {
        const bool branch_taken_0x17f0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0C4u;
        // 0x17f0c8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0c4) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0CCu;
label_17f0cc:
    // 0x17f0cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x17F0CCu;
    {
        const bool branch_taken_0x17f0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0CCu;
        // 0x17f0d0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0cc) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0D4u;
label_17f0d4:
    // 0x17f0d4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x17F0D4u;
    {
        const bool branch_taken_0x17f0d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0D4u;
        // 0x17f0d8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0d4) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0DCu;
label_17f0dc:
    // 0x17f0dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x17F0DCu;
    {
        const bool branch_taken_0x17f0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0DCu;
        // 0x17f0e0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0dc) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0E4u;
label_17f0e4:
    // 0x17f0e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17F0E4u;
    {
        const bool branch_taken_0x17f0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0E4u;
        // 0x17f0e8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0e4) {
            ctx->pc = 0x17F0F0u;
            goto label_17f0f0;
        }
    }
    ctx->pc = 0x17F0ECu;
label_17f0ec:
    // 0x17f0ec: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x17f0ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_17f0f0:
    // 0x17f0f0: 0xa7a2004c  sh          $v0, 0x4C($sp)
    ctx->pc = 0x17f0f0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 76), (uint16_t)GPR_U32(ctx, 2));
label_17f0f4:
    // 0x17f0f4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x17F0F4u;
    {
        const bool branch_taken_0x17f0f4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F0F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0F4u;
        // 0x17f0f8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0f4) {
            ctx->pc = 0x17F140u;
            goto label_17f140;
        }
    }
    ctx->pc = 0x17F0FCu;
    // 0x17f0fc: 0x15820007  bne         $t4, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x17F0FCu;
    {
        const bool branch_taken_0x17f0fc = (GPR_U64(ctx, 12) != GPR_U64(ctx, 2));
        ctx->pc = 0x17F100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F0FCu;
        // 0x17f100: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f0fc) {
            ctx->pc = 0x17F11Cu;
            goto label_17f11c;
        }
    }
    ctx->pc = 0x17F104u;
    // 0x17f104: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17f104u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17f108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17f108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f10c: 0xc05f566  jal         func_17D598
    ctx->pc = 0x17F10Cu;
    SET_GPR_U32(ctx, 31, 0x17F114u);
    ctx->pc = 0x17F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F10Cu;
    // 0x17f110: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D598u, 0x17F10Cu, 0x17F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F114u;
label_17f114:
    // 0x17f114: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x17F114u;
    {
        const bool branch_taken_0x17f114 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F114u;
        // 0x17f118: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f114) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17F11Cu;
label_17f11c:
    // 0x17f11c: 0xc05f210  jal         func_17C840
    ctx->pc = 0x17F11Cu;
    SET_GPR_U32(ctx, 31, 0x17F124u);
    ctx->pc = 0x17F120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F11Cu;
    // 0x17f120: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17C840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17C840u, 0x17F11Cu, 0x17F124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F124u;
label_17f124:
    // 0x17f124: 0x1040ff87  beqz        $v0, . + 4 + (-0x79 << 2)
    ctx->pc = 0x17F124u;
    {
        const bool branch_taken_0x17f124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F124u;
        // 0x17f128: 0x97a5004e  lhu         $a1, 0x4E($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 78)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f124) {
            ctx->pc = 0x17EF44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17ef44;
        }
    }
    ctx->pc = 0x17F12Cu;
    // 0x17f12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17f12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f130: 0xc05f2a4  jal         func_17CA90
    ctx->pc = 0x17F130u;
    SET_GPR_U32(ctx, 31, 0x17F138u);
    ctx->pc = 0x17F134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F130u;
    // 0x17f134: 0x5282b  sltu        $a1, $zero, $a1 (Delay Slot)
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    ctx->in_delay_slot = false;
    ctx->pc = 0x17CA90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17CA90u, 0x17F130u, 0x17F138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F138u;
label_17f138:
    // 0x17f138: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x17F138u;
    {
        const bool branch_taken_0x17f138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17F13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F138u;
        // 0x17f13c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17f138) {
            ctx->pc = 0x17F150u;
            goto label_17f150;
        }
    }
    ctx->pc = 0x17F140u;
label_17f140:
    // 0x17f140: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x17f140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x17f144: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x17f144u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17f148: 0xc05f55e  jal         func_17D578
    ctx->pc = 0x17F148u;
    SET_GPR_U32(ctx, 31, 0x17F150u);
    ctx->pc = 0x17F14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17F148u;
    // 0x17f14c: 0x8c44cce4  lw          $a0, -0x331C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954212)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17D578u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17D578u, 0x17F148u, 0x17F150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17F150u;
label_17f150:
    // 0x17f150: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x17f150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17f154:
    // 0x17f154: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17f154u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17f158: 0x3e00008  jr          $ra
    ctx->pc = 0x17F158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17F158u;
        // 0x17f15c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17F158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17F160u;
}
