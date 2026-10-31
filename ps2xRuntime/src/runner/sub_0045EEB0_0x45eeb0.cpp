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

// Function: sub_0045EEB0
// Address: 0x45eeb0 - 0x45f0a8
void sub_0045EEB0_0x45eeb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0045EEB0_0x45eeb0");
#endif

    ctx->pc = 0x45eeb0u;

    // 0x45eeb0: 0x8f838418  lw          $v1, -0x7BE8($gp)
    ctx->pc = 0x45eeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935576)));
    // 0x45eeb4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45eeb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45eeb8: 0x24420960  addiu       $v0, $v0, 0x960
    ctx->pc = 0x45eeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2400));
    // 0x45eebc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x45eebcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x45eec0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x45eec0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x45eec4: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x45eec4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x45eec8: 0x24850050  addiu       $a1, $a0, 0x50
    ctx->pc = 0x45eec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 80));
    // 0x45eecc: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x45eeccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x45eed0: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x45eed0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x45eed4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45EED4u;
    {
        const bool branch_taken_0x45eed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EED4u;
        // 0x45eed8: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eed4) {
            ctx->pc = 0x45EEFCu;
            goto label_45eefc;
        }
    }
    ctx->pc = 0x45EEDCu;
    // 0x45eedc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45eedcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45eee0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EEE0u;
    {
        const bool branch_taken_0x45eee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45eee0) {
            ctx->pc = 0x45EEE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45EEE0u;
            // 0x45eee4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45EEF4u;
            goto label_45eef4;
        }
    }
    ctx->pc = 0x45EEE8u;
    // 0x45eee8: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45eee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45eeec: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x45EEECu;
    {
        const bool branch_taken_0x45eeec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EEECu;
        // 0x45eef0: 0x24420778  addiu       $v0, $v0, 0x778 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eeec) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EEF4u;
label_45eef4:
    // 0x45eef4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x45EEF4u;
    {
        const bool branch_taken_0x45eef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EEF4u;
        // 0x45eef8: 0x244205e8  addiu       $v0, $v0, 0x5E8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eef4) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EEFCu;
label_45eefc:
    // 0x45eefc: 0x30628000  andi        $v0, $v1, 0x8000
    ctx->pc = 0x45eefcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32768);
    // 0x45ef00: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x45EF00u;
    {
        const bool branch_taken_0x45ef00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF00u;
        // 0x45ef04: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef00) {
            ctx->pc = 0x45EF1Cu;
            goto label_45ef1c;
        }
    }
    ctx->pc = 0x45EF08u;
    // 0x45ef08: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45ef08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ef0c: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x45EF0Cu;
    {
        const bool branch_taken_0x45ef0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF0Cu;
        // 0x45ef10: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef0c) {
            ctx->pc = 0x45EFACu;
            goto label_45efac;
        }
    }
    ctx->pc = 0x45EF14u;
    // 0x45ef14: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x45EF14u;
    {
        const bool branch_taken_0x45ef14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF14u;
        // 0x45ef18: 0x2442f278  addiu       $v0, $v0, -0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef14) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF1Cu;
label_45ef1c:
    // 0x45ef1c: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x45ef1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x45ef20: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x45EF20u;
    {
        const bool branch_taken_0x45ef20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF20u;
        // 0x45ef24: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef20) {
            ctx->pc = 0x45EF70u;
            goto label_45ef70;
        }
    }
    ctx->pc = 0x45EF28u;
    // 0x45ef28: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45EF28u;
    {
        const bool branch_taken_0x45ef28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF28u;
        // 0x45ef2c: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef28) {
            ctx->pc = 0x45EF50u;
            goto label_45ef50;
        }
    }
    ctx->pc = 0x45EF30u;
    // 0x45ef30: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45ef30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ef34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EF34u;
    {
        const bool branch_taken_0x45ef34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ef34) {
            ctx->pc = 0x45EF38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45EF34u;
            // 0x45ef38: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45EF48u;
            goto label_45ef48;
        }
    }
    ctx->pc = 0x45EF3Cu;
    // 0x45ef3c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45ef3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45ef40: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x45EF40u;
    {
        const bool branch_taken_0x45ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF40u;
        // 0x45ef44: 0x24420248  addiu       $v0, $v0, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef40) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF48u;
label_45ef48:
    // 0x45ef48: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x45EF48u;
    {
        const bool branch_taken_0x45ef48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF48u;
        // 0x45ef4c: 0x2442f950  addiu       $v0, $v0, -0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef48) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF50u;
label_45ef50:
    // 0x45ef50: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45ef50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ef54: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EF54u;
    {
        const bool branch_taken_0x45ef54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ef54) {
            ctx->pc = 0x45EF58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45EF54u;
            // 0x45ef58: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45EF68u;
            goto label_45ef68;
        }
    }
    ctx->pc = 0x45EF5Cu;
    // 0x45ef5c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45ef5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45ef60: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x45EF60u;
    {
        const bool branch_taken_0x45ef60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF60u;
        // 0x45ef64: 0x2442fc50  addiu       $v0, $v0, -0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef60) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF68u;
label_45ef68:
    // 0x45ef68: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x45EF68u;
    {
        const bool branch_taken_0x45ef68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF68u;
        // 0x45ef6c: 0x2442f4a8  addiu       $v0, $v0, -0xB58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964392));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef68) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF70u;
label_45ef70:
    // 0x45ef70: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x45EF70u;
    {
        const bool branch_taken_0x45ef70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF70u;
        // 0x45ef74: 0x3c020100  lui         $v0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef70) {
            ctx->pc = 0x45EF98u;
            goto label_45ef98;
        }
    }
    ctx->pc = 0x45EF78u;
    // 0x45ef78: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45ef78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ef7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EF7Cu;
    {
        const bool branch_taken_0x45ef7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x45ef7c) {
            ctx->pc = 0x45EF80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x45EF7Cu;
            // 0x45ef80: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x45EF90u;
            goto label_45ef90;
        }
    }
    ctx->pc = 0x45EF84u;
    // 0x45ef84: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45ef84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45ef88: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x45EF88u;
    {
        const bool branch_taken_0x45ef88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF88u;
        // 0x45ef8c: 0x2442ffa0  addiu       $v0, $v0, -0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967200));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef88) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF90u;
label_45ef90:
    // 0x45ef90: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x45EF90u;
    {
        const bool branch_taken_0x45ef90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF90u;
        // 0x45ef94: 0x2442f758  addiu       $v0, $v0, -0x8A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef90) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EF98u;
label_45ef98:
    // 0x45ef98: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45ef98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45ef9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45EF9Cu;
    {
        const bool branch_taken_0x45ef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EF9Cu;
        // 0x45efa0: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45ef9c) {
            ctx->pc = 0x45EFACu;
            goto label_45efac;
        }
    }
    ctx->pc = 0x45EFA4u;
    // 0x45efa4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x45EFA4u;
    {
        const bool branch_taken_0x45efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EFA4u;
        // 0x45efa8: 0x2442f278  addiu       $v0, $v0, -0xD88 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efa4) {
            ctx->pc = 0x45EFB4u;
            goto label_45efb4;
        }
    }
    ctx->pc = 0x45EFACu;
label_45efac:
    // 0x45efac: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45efacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45efb0: 0x2442f0a8  addiu       $v0, $v0, -0xF58
    ctx->pc = 0x45efb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963368));
label_45efb4:
    // 0x45efb4: 0xac820028  sw          $v0, 0x28($a0)
    ctx->pc = 0x45efb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 2));
    // 0x45efb8: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x45efb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x45efbc: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x45efbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
    // 0x45efc0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EFC0u;
    {
        const bool branch_taken_0x45efc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EFC0u;
        // 0x45efc4: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efc0) {
            ctx->pc = 0x45EFD4u;
            goto label_45efd4;
        }
    }
    ctx->pc = 0x45EFC8u;
    // 0x45efc8: 0x24420fc0  addiu       $v0, $v0, 0xFC0
    ctx->pc = 0x45efc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4032));
    // 0x45efcc: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x45EFCCu;
    {
        const bool branch_taken_0x45efcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EFCCu;
        // 0x45efd0: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efcc) {
            ctx->pc = 0x45F028u;
            goto label_45f028;
        }
    }
    ctx->pc = 0x45EFD4u;
label_45efd4:
    // 0x45efd4: 0x30620100  andi        $v0, $v1, 0x100
    ctx->pc = 0x45efd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x45efd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EFD8u;
    {
        const bool branch_taken_0x45efd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EFD8u;
        // 0x45efdc: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efd8) {
            ctx->pc = 0x45EFECu;
            goto label_45efec;
        }
    }
    ctx->pc = 0x45EFE0u;
    // 0x45efe0: 0x24421040  addiu       $v0, $v0, 0x1040
    ctx->pc = 0x45efe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4160));
    // 0x45efe4: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x45EFE4u;
    {
        const bool branch_taken_0x45efe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EFE4u;
        // 0x45efe8: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45efe4) {
            ctx->pc = 0x45F028u;
            goto label_45f028;
        }
    }
    ctx->pc = 0x45EFECu;
label_45efec:
    // 0x45efec: 0x3c020008  lui         $v0, 0x8
    ctx->pc = 0x45efecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8 << 16));
    // 0x45eff0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45eff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45eff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45EFF4u;
    {
        const bool branch_taken_0x45eff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45EFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45EFF4u;
        // 0x45eff8: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45eff4) {
            ctx->pc = 0x45F008u;
            goto label_45f008;
        }
    }
    ctx->pc = 0x45EFFCu;
    // 0x45effc: 0x244210c0  addiu       $v0, $v0, 0x10C0
    ctx->pc = 0x45effcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4288));
    // 0x45f000: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x45F000u;
    {
        const bool branch_taken_0x45f000 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F000u;
        // 0x45f004: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f000) {
            ctx->pc = 0x45F028u;
            goto label_45f028;
        }
    }
    ctx->pc = 0x45F008u;
label_45f008:
    // 0x45f008: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x45f008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
    // 0x45f00c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45f00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45f010: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45F010u;
    {
        const bool branch_taken_0x45f010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F010u;
        // 0x45f014: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f010) {
            ctx->pc = 0x45F024u;
            goto label_45f024;
        }
    }
    ctx->pc = 0x45F018u;
    // 0x45f018: 0x24421138  addiu       $v0, $v0, 0x1138
    ctx->pc = 0x45f018u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4408));
    // 0x45f01c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45F01Cu;
    {
        const bool branch_taken_0x45f01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F020u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F01Cu;
        // 0x45f020: 0xac82002c  sw          $v0, 0x2C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f01c) {
            ctx->pc = 0x45F028u;
            goto label_45f028;
        }
    }
    ctx->pc = 0x45F024u;
label_45f024:
    // 0x45f024: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x45f024u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_45f028:
    // 0x45f028: 0x8ca30058  lw          $v1, 0x58($a1)
    ctx->pc = 0x45f028u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x45f02c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x45f02cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x45f030: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45F030u;
    {
        const bool branch_taken_0x45f030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F030u;
        // 0x45f034: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f030) {
            ctx->pc = 0x45F040u;
            goto label_45f040;
        }
    }
    ctx->pc = 0x45F038u;
    // 0x45f038: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x45F038u;
    {
        const bool branch_taken_0x45f038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F038u;
        // 0x45f03c: 0x24420e58  addiu       $v0, $v0, 0xE58 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f038) {
            ctx->pc = 0x45F074u;
            goto label_45f074;
        }
    }
    ctx->pc = 0x45F040u;
label_45f040:
    // 0x45f040: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x45f040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
    // 0x45f044: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45F044u;
    {
        const bool branch_taken_0x45f044 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F044u;
        // 0x45f048: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f044) {
            ctx->pc = 0x45F054u;
            goto label_45f054;
        }
    }
    ctx->pc = 0x45F04Cu;
    // 0x45f04c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x45F04Cu;
    {
        const bool branch_taken_0x45f04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F04Cu;
        // 0x45f050: 0x24420ea8  addiu       $v0, $v0, 0xEA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f04c) {
            ctx->pc = 0x45F074u;
            goto label_45f074;
        }
    }
    ctx->pc = 0x45F054u;
label_45f054:
    // 0x45f054: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x45f054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x45f058: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x45f058u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x45f05c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x45F05Cu;
    {
        const bool branch_taken_0x45f05c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F05Cu;
        // 0x45f060: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f05c) {
            ctx->pc = 0x45F06Cu;
            goto label_45f06c;
        }
    }
    ctx->pc = 0x45F064u;
    // 0x45f064: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x45F064u;
    {
        const bool branch_taken_0x45f064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F064u;
        // 0x45f068: 0x24420f08  addiu       $v0, $v0, 0xF08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f064) {
            ctx->pc = 0x45F074u;
            goto label_45f074;
        }
    }
    ctx->pc = 0x45F06Cu;
label_45f06c:
    // 0x45f06c: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45f06cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45f070: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x45f070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
label_45f074:
    // 0x45f074: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x45f074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x45f078: 0x8ca20058  lw          $v0, 0x58($a1)
    ctx->pc = 0x45f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 88)));
    // 0x45f07c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x45f07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x45f080: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x45F080u;
    {
        const bool branch_taken_0x45f080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F080u;
        // 0x45f084: 0x3c020046  lui         $v0, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f080) {
            ctx->pc = 0x45F094u;
            goto label_45f094;
        }
    }
    ctx->pc = 0x45F088u;
    // 0x45f088: 0x244211b8  addiu       $v0, $v0, 0x11B8
    ctx->pc = 0x45f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4536));
    // 0x45f08c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x45F08Cu;
    {
        const bool branch_taken_0x45f08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x45F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F08Cu;
        // 0x45f090: 0xac820034  sw          $v0, 0x34($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x45f08c) {
            ctx->pc = 0x45F098u;
            goto label_45f098;
        }
    }
    ctx->pc = 0x45F094u;
label_45f094:
    // 0x45f094: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x45f094u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
label_45f098:
    // 0x45f098: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x45f098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x45f09c: 0x24421258  addiu       $v0, $v0, 0x1258
    ctx->pc = 0x45f09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4696));
    // 0x45f0a0: 0x3e00008  jr          $ra
    ctx->pc = 0x45F0A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x45F0A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x45F0A0u;
        // 0x45f0a4: 0xac820038  sw          $v0, 0x38($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x45F0A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x45F0A8u;
}
