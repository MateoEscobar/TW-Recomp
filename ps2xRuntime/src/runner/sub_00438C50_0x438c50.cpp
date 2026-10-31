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

// Function: sub_00438C50
// Address: 0x438c50 - 0x439380
void sub_00438C50_0x438c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00438C50_0x438c50");
#endif

    switch (ctx->pc) {
        case 0x438c98u: goto label_438c98;
        case 0x438d88u: goto label_438d88;
        case 0x438fe0u: goto label_438fe0;
        case 0x439068u: goto label_439068;
        case 0x439090u: goto label_439090;
        case 0x4390a0u: goto label_4390a0;
        case 0x4390b8u: goto label_4390b8;
        case 0x439128u: goto label_439128;
        case 0x439140u: goto label_439140;
        case 0x439168u: goto label_439168;
        case 0x43921cu: goto label_43921c;
        case 0x439284u: goto label_439284;
        case 0x43935cu: goto label_43935c;
        default: break;
    }

    ctx->pc = 0x438c50u;

    // 0x438c50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x438c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x438c54: 0x24a50013  addiu       $a1, $a1, 0x13
    ctx->pc = 0x438c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19));
    // 0x438c58: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x438c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x438c5c: 0x2ca2001f  sltiu       $v0, $a1, 0x1F
    ctx->pc = 0x438c5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
    // 0x438c60: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x438c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x438c64: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x438c64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438c68: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x438c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x438c6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x438c6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x438c70: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x438c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x438c74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x438C74u;
    {
        const bool branch_taken_0x438c74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438C74u;
        // 0x438c78: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438c74) {
            ctx->pc = 0x438C8Cu;
            goto label_438c8c;
        }
    }
    ctx->pc = 0x438C7Cu;
    // 0x438c7c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x438c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x438c80: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x438c80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x438c84: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x438C84u;
    {
        const bool branch_taken_0x438c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438C84u;
        // 0x438c88: 0xa28824  and         $s1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438c84) {
            ctx->pc = 0x438C90u;
            goto label_438c90;
        }
    }
    ctx->pc = 0x438C8Cu;
label_438c8c:
    // 0x438c8c: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x438c8cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_438c90:
    // 0x438c90: 0xc10cfce  jal         func_433F38
    ctx->pc = 0x438C90u;
    SET_GPR_U32(ctx, 31, 0x438C98u);
    ctx->pc = 0x438C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x438C90u;
    // 0x438c94: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F38u, 0x438C90u, 0x438C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x438C98u;
label_438c98:
    // 0x438c98: 0x2e2201f8  sltiu       $v0, $s1, 0x1F8
    ctx->pc = 0x438c98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)504) ? 1 : 0);
    // 0x438c9c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x438C9Cu;
    {
        const bool branch_taken_0x438c9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438C9Cu;
        // 0x438ca0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438c9c) {
            ctx->pc = 0x438CF8u;
            goto label_438cf8;
        }
    }
    ctx->pc = 0x438CA4u;
    // 0x438ca4: 0x1150c2  srl         $t2, $s1, 3
    ctx->pc = 0x438ca4u;
    SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
    // 0x438ca8: 0x24436d90  addiu       $v1, $v0, 0x6D90
    ctx->pc = 0x438ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x438cac: 0x2234821  addu        $t1, $s1, $v1
    ctx->pc = 0x438cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x438cb0: 0x8d30000c  lw          $s0, 0xC($t1)
    ctx->pc = 0x438cb0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    // 0x438cb4: 0x1209000e  beq         $s0, $t1, . + 4 + (0xE << 2)
    ctx->pc = 0x438CB4u;
    {
        const bool branch_taken_0x438cb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 9));
        ctx->pc = 0x438CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438CB4u;
        // 0x438cb8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438cb4) {
            ctx->pc = 0x438CF0u;
            goto label_438cf0;
        }
    }
    ctx->pc = 0x438CBCu;
    // 0x438cbc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x438cbcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x438cc0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x438cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x438cc4: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x438cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x438cc8: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x438cc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x438ccc: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x438cccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x438cd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x438cd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438cd4: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x438cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x438cd8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x438cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x438cdc: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x438cdcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x438ce0: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x438ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x438ce4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x438ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x438ce8: 0x10000199  b           . + 4 + (0x199 << 2)
    ctx->pc = 0x438CE8u;
    {
        const bool branch_taken_0x438ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438CE8u;
        // 0x438cec: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438ce8) {
            ctx->pc = 0x439350u;
            goto label_439350;
        }
    }
    ctx->pc = 0x438CF0u;
label_438cf0:
    // 0x438cf0: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x438CF0u;
    {
        const bool branch_taken_0x438cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438CF0u;
        // 0x438cf4: 0x254a0002  addiu       $t2, $t2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438cf0) {
            ctx->pc = 0x438DE8u;
            goto label_438de8;
        }
    }
    ctx->pc = 0x438CF8u;
label_438cf8:
    // 0x438cf8: 0x112242  srl         $a0, $s1, 9
    ctx->pc = 0x438cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 17), 9));
    // 0x438cfc: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438CFCu;
    {
        const bool branch_taken_0x438cfc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x438D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438CFCu;
        // 0x438d00: 0x2c820005  sltiu       $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438cfc) {
            ctx->pc = 0x438D0Cu;
            goto label_438d0c;
        }
    }
    ctx->pc = 0x438D04u;
    // 0x438d04: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x438D04u;
    {
        const bool branch_taken_0x438d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D04u;
        // 0x438d08: 0x1150c2  srl         $t2, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d04) {
            ctx->pc = 0x438D68u;
            goto label_438d68;
        }
    }
    ctx->pc = 0x438D0Cu;
label_438d0c:
    // 0x438d0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438D0Cu;
    {
        const bool branch_taken_0x438d0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D0Cu;
        // 0x438d10: 0x111182  srl         $v0, $s1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d0c) {
            ctx->pc = 0x438D1Cu;
            goto label_438d1c;
        }
    }
    ctx->pc = 0x438D14u;
    // 0x438d14: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x438D14u;
    {
        const bool branch_taken_0x438d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D14u;
        // 0x438d18: 0x244a0038  addiu       $t2, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d14) {
            ctx->pc = 0x438D68u;
            goto label_438d68;
        }
    }
    ctx->pc = 0x438D1Cu;
label_438d1c:
    // 0x438d1c: 0x2c820015  sltiu       $v0, $a0, 0x15
    ctx->pc = 0x438d1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x438d20: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x438D20u;
    {
        const bool branch_taken_0x438d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D20u;
        // 0x438d24: 0x248a005b  addiu       $t2, $a0, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 4), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d20) {
            ctx->pc = 0x438D68u;
            goto label_438d68;
        }
    }
    ctx->pc = 0x438D28u;
    // 0x438d28: 0x2c820055  sltiu       $v0, $a0, 0x55
    ctx->pc = 0x438d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x438d2c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438D2Cu;
    {
        const bool branch_taken_0x438d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D2Cu;
        // 0x438d30: 0x111302  srl         $v0, $s1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d2c) {
            ctx->pc = 0x438D3Cu;
            goto label_438d3c;
        }
    }
    ctx->pc = 0x438D34u;
    // 0x438d34: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x438D34u;
    {
        const bool branch_taken_0x438d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D34u;
        // 0x438d38: 0x244a006e  addiu       $t2, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d34) {
            ctx->pc = 0x438D68u;
            goto label_438d68;
        }
    }
    ctx->pc = 0x438D3Cu;
label_438d3c:
    // 0x438d3c: 0x2c820155  sltiu       $v0, $a0, 0x155
    ctx->pc = 0x438d3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x438d40: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438D40u;
    {
        const bool branch_taken_0x438d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D40u;
        // 0x438d44: 0x1113c2  srl         $v0, $s1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d40) {
            ctx->pc = 0x438D50u;
            goto label_438d50;
        }
    }
    ctx->pc = 0x438D48u;
    // 0x438d48: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x438D48u;
    {
        const bool branch_taken_0x438d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D48u;
        // 0x438d4c: 0x244a0077  addiu       $t2, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d48) {
            ctx->pc = 0x438D68u;
            goto label_438d68;
        }
    }
    ctx->pc = 0x438D50u;
label_438d50:
    // 0x438d50: 0x2c820555  sltiu       $v0, $a0, 0x555
    ctx->pc = 0x438d50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x438d54: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438D54u;
    {
        const bool branch_taken_0x438d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D54u;
        // 0x438d58: 0x111482  srl         $v0, $s1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d54) {
            ctx->pc = 0x438D64u;
            goto label_438d64;
        }
    }
    ctx->pc = 0x438D5Cu;
    // 0x438d5c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x438D5Cu;
    {
        const bool branch_taken_0x438d5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D5Cu;
        // 0x438d60: 0x244a007c  addiu       $t2, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d5c) {
            ctx->pc = 0x438D68u;
            goto label_438d68;
        }
    }
    ctx->pc = 0x438D64u;
label_438d64:
    // 0x438d64: 0x240a007e  addiu       $t2, $zero, 0x7E
    ctx->pc = 0x438d64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_438d68:
    // 0x438d68: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x438d68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x438d6c: 0xa20c0  sll         $a0, $t2, 3
    ctx->pc = 0x438d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x438d70: 0x24436d90  addiu       $v1, $v0, 0x6D90
    ctx->pc = 0x438d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x438d74: 0x834021  addu        $t0, $a0, $v1
    ctx->pc = 0x438d74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x438d78: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x438d78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
    // 0x438d7c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x438D7Cu;
    {
        const bool branch_taken_0x438d7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438D80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438D7Cu;
        // 0x438d80: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438d7c) {
            ctx->pc = 0x438D94u;
            goto label_438d94;
        }
    }
    ctx->pc = 0x438D84u;
    // 0x438d84: 0x0  nop
    ctx->pc = 0x438d84u;
    // NOP
label_438d88:
    // 0x438d88: 0x4e30140  bgezl       $a3, . + 4 + (0x140 << 2)
    ctx->pc = 0x438D88u;
    {
        const bool branch_taken_0x438d88 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x438d88) {
            ctx->pc = 0x438D8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438D88u;
            // 0x438d8c: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x43928Cu;
            goto label_43928c;
        }
    }
    ctx->pc = 0x438D90u;
    // 0x438d90: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x438d90u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_438d94:
    // 0x438d94: 0x52080014  beql        $s0, $t0, . + 4 + (0x14 << 2)
    ctx->pc = 0x438D94u;
    {
        const bool branch_taken_0x438d94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        if (branch_taken_0x438d94) {
            ctx->pc = 0x438D98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438D94u;
            // 0x438d98: 0x254a0001  addiu       $t2, $t2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438DE8u;
            goto label_438de8;
        }
    }
    ctx->pc = 0x438D9Cu;
    // 0x438d9c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x438d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x438da0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x438da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x438da4: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x438da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x438da8: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x438da8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x438dac: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x438dacu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x438db0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x438DB0u;
    {
        const bool branch_taken_0x438db0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x438DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438DB0u;
        // 0x438db4: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438db0) {
            ctx->pc = 0x438DC8u;
            goto label_438dc8;
        }
    }
    ctx->pc = 0x438DB8u;
    // 0x438db8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x438db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438dbc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x438dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x438dc0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x438DC0u;
    {
        const bool branch_taken_0x438dc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438DC0u;
        // 0x438dc4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438dc0) {
            ctx->pc = 0x438DD4u;
            goto label_438dd4;
        }
    }
    ctx->pc = 0x438DC8u;
label_438dc8:
    // 0x438dc8: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x438dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x438dcc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x438dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438dd0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x438dd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_438dd4:
    // 0x438dd4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x438dd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x438dd8: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
    ctx->pc = 0x438DD8u;
    {
        const bool branch_taken_0x438dd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438dd8) {
            ctx->pc = 0x438D88u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438d88;
        }
    }
    ctx->pc = 0x438DE0u;
    // 0x438de0: 0x254affff  addiu       $t2, $t2, -0x1
    ctx->pc = 0x438de0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967295));
    // 0x438de4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x438de4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_438de8:
    // 0x438de8: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x438de8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x438dec: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x438decu;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438df0: 0x24426d98  addiu       $v0, $v0, 0x6D98
    ctx->pc = 0x438df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28056));
    // 0x438df4: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x438df4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x516DA0u));
    // 0x438df8: 0x12020086  beq         $s0, $v0, . + 4 + (0x86 << 2)
    ctx->pc = 0x438DF8u;
    {
        const bool branch_taken_0x438df8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x438DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438DF8u;
        // 0x438dfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438df8) {
            ctx->pc = 0x439014u;
            goto label_439014;
        }
    }
    ctx->pc = 0x438E00u;
    // 0x438e00: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x438e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x438e04: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x438e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x438e08: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x438e08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x438e0c: 0x432824  and         $a1, $v0, $v1
    ctx->pc = 0x438e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x438e10: 0xb1202b  sltu        $a0, $a1, $s1
    ctx->pc = 0x438e10u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x438e14: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x438E14u;
    {
        const bool branch_taken_0x438e14 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x438E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438E14u;
        // 0x438e18: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e14) {
            ctx->pc = 0x438E2Cu;
            goto label_438e2c;
        }
    }
    ctx->pc = 0x438E1Cu;
    // 0x438e1c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x438e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438e20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x438e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x438e24: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x438E24u;
    {
        const bool branch_taken_0x438e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438E24u;
        // 0x438e28: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e24) {
            ctx->pc = 0x438E38u;
            goto label_438e38;
        }
    }
    ctx->pc = 0x438E2Cu;
label_438e2c:
    // 0x438e2c: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x438e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x438e30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x438e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438e34: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x438e34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_438e38:
    // 0x438e38: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x438e38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x438e3c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x438E3Cu;
    {
        const bool branch_taken_0x438e3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438E3Cu;
        // 0x438e40: 0x25c46d98  addiu       $a0, $t6, 0x6D98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 14), 28056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e3c) {
            ctx->pc = 0x438E90u;
            goto label_438e90;
        }
    }
    ctx->pc = 0x438E44u;
    // 0x438e44: 0x36220001  ori         $v0, $s1, 0x1
    ctx->pc = 0x438e44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x438e48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x438e48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438e4c: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x438e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x438e50: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x438e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x438e54: 0x25c56d98  addiu       $a1, $t6, 0x6D98
    ctx->pc = 0x438e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 14), 28056));
    // 0x438e58: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x438e58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x438e5c: 0xaca8000c  sw          $t0, 0xC($a1)
    ctx->pc = 0x438e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 8));
    // 0x438e60: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x438e60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x438e64: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x438e64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x438e68: 0xaca80008  sw          $t0, 0x8($a1)
    ctx->pc = 0x438e68u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 8));
    // 0x438e6c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x438e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x438e70: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x438e70u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x438e74: 0x1023021  addu        $a2, $t0, $v0
    ctx->pc = 0x438e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x438e78: 0xad050008  sw          $a1, 0x8($t0)
    ctx->pc = 0x438e78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 5));
    // 0x438e7c: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x438e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x438e80: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x438e80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438e84: 0xad05000c  sw          $a1, 0xC($t0)
    ctx->pc = 0x438e84u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 5));
    // 0x438e88: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x438E88u;
    {
        const bool branch_taken_0x438e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438E88u;
        // 0x438e8c: 0xacc20000  sw          $v0, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e88) {
            ctx->pc = 0x439354u;
            goto label_439354;
        }
    }
    ctx->pc = 0x438E90u;
label_438e90:
    // 0x438e90: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x438e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
    // 0x438e94: 0x4e00006  bltz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x438E94u;
    {
        const bool branch_taken_0x438e94 = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x438E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438E94u;
        // 0x438e98: 0xac840008  sw          $a0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438e94) {
            ctx->pc = 0x438EB0u;
            goto label_438eb0;
        }
    }
    ctx->pc = 0x438E9Cu;
    // 0x438e9c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x438e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x438ea0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x438ea0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x438ea4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x438ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x438ea8: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x438EA8u;
    {
        const bool branch_taken_0x438ea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438EA8u;
        // 0x438eac: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438ea8) {
            ctx->pc = 0x439350u;
            goto label_439350;
        }
    }
    ctx->pc = 0x438EB0u;
label_438eb0:
    // 0x438eb0: 0x2ca20200  sltiu       $v0, $a1, 0x200
    ctx->pc = 0x438eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)512) ? 1 : 0);
    // 0x438eb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x438EB4u;
    {
        const bool branch_taken_0x438eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438EB4u;
        // 0x438eb8: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438eb4) {
            ctx->pc = 0x438F00u;
            goto label_438f00;
        }
    }
    ctx->pc = 0x438EBCu;
    // 0x438ebc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x438ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x438ec0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x438ec0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x438ec4: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x438ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x438ec8: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x438ec8u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x438ecc: 0x2485fff8  addiu       $a1, $a0, -0x8
    ctx->pc = 0x438eccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967288));
    // 0x438ed0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x438ed0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x438ed4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x438ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438ed8: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x438ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x438edc: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x438edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x438ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x438ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x438ee4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x438ee4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x438ee8: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x438ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x438eec: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x438eecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x438ef0: 0x654021  addu        $t0, $v1, $a1
    ctx->pc = 0x438ef0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x438ef4: 0xaca40004  sw          $a0, 0x4($a1)
    ctx->pc = 0x438ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 4));
    // 0x438ef8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x438EF8u;
    {
        const bool branch_taken_0x438ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438EF8u;
        // 0x438efc: 0x8d060008  lw          $a2, 0x8($t0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438ef8) {
            ctx->pc = 0x439000u;
            goto label_439000;
        }
    }
    ctx->pc = 0x438F00u;
label_438f00:
    // 0x438f00: 0x51a42  srl         $v1, $a1, 9
    ctx->pc = 0x438f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 9));
    // 0x438f04: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x438F04u;
    {
        const bool branch_taken_0x438f04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x438F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F04u;
        // 0x438f08: 0x2c620005  sltiu       $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f04) {
            ctx->pc = 0x438F14u;
            goto label_438f14;
        }
    }
    ctx->pc = 0x438F0Cu;
    // 0x438f0c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x438F0Cu;
    {
        const bool branch_taken_0x438f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F0Cu;
        // 0x438f10: 0x538c2  srl         $a3, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f0c) {
            ctx->pc = 0x438F70u;
            goto label_438f70;
        }
    }
    ctx->pc = 0x438F14u;
label_438f14:
    // 0x438f14: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438F14u;
    {
        const bool branch_taken_0x438f14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F14u;
        // 0x438f18: 0x51182  srl         $v0, $a1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f14) {
            ctx->pc = 0x438F24u;
            goto label_438f24;
        }
    }
    ctx->pc = 0x438F1Cu;
    // 0x438f1c: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x438F1Cu;
    {
        const bool branch_taken_0x438f1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F1Cu;
        // 0x438f20: 0x24470038  addiu       $a3, $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 56));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f1c) {
            ctx->pc = 0x438F70u;
            goto label_438f70;
        }
    }
    ctx->pc = 0x438F24u;
label_438f24:
    // 0x438f24: 0x2c620015  sltiu       $v0, $v1, 0x15
    ctx->pc = 0x438f24u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x438f28: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x438F28u;
    {
        const bool branch_taken_0x438f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x438F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F28u;
        // 0x438f2c: 0x2467005b  addiu       $a3, $v1, 0x5B (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 91));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f28) {
            ctx->pc = 0x438F70u;
            goto label_438f70;
        }
    }
    ctx->pc = 0x438F30u;
    // 0x438f30: 0x2c620055  sltiu       $v0, $v1, 0x55
    ctx->pc = 0x438f30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)85) ? 1 : 0);
    // 0x438f34: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438F34u;
    {
        const bool branch_taken_0x438f34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F34u;
        // 0x438f38: 0x51302  srl         $v0, $a1, 12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f34) {
            ctx->pc = 0x438F44u;
            goto label_438f44;
        }
    }
    ctx->pc = 0x438F3Cu;
    // 0x438f3c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x438F3Cu;
    {
        const bool branch_taken_0x438f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F3Cu;
        // 0x438f40: 0x2447006e  addiu       $a3, $v0, 0x6E (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 110));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f3c) {
            ctx->pc = 0x438F70u;
            goto label_438f70;
        }
    }
    ctx->pc = 0x438F44u;
label_438f44:
    // 0x438f44: 0x2c620155  sltiu       $v0, $v1, 0x155
    ctx->pc = 0x438f44u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)341) ? 1 : 0);
    // 0x438f48: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438F48u;
    {
        const bool branch_taken_0x438f48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F48u;
        // 0x438f4c: 0x513c2  srl         $v0, $a1, 15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f48) {
            ctx->pc = 0x438F58u;
            goto label_438f58;
        }
    }
    ctx->pc = 0x438F50u;
    // 0x438f50: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x438F50u;
    {
        const bool branch_taken_0x438f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F50u;
        // 0x438f54: 0x24470077  addiu       $a3, $v0, 0x77 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 119));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f50) {
            ctx->pc = 0x438F70u;
            goto label_438f70;
        }
    }
    ctx->pc = 0x438F58u;
label_438f58:
    // 0x438f58: 0x2c620555  sltiu       $v0, $v1, 0x555
    ctx->pc = 0x438f58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1365) ? 1 : 0);
    // 0x438f5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x438F5Cu;
    {
        const bool branch_taken_0x438f5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F5Cu;
        // 0x438f60: 0x51482  srl         $v0, $a1, 18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f5c) {
            ctx->pc = 0x438F6Cu;
            goto label_438f6c;
        }
    }
    ctx->pc = 0x438F64u;
    // 0x438f64: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x438F64u;
    {
        const bool branch_taken_0x438f64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438F64u;
        // 0x438f68: 0x2447007c  addiu       $a3, $v0, 0x7C (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 124));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438f64) {
            ctx->pc = 0x438F70u;
            goto label_438f70;
        }
    }
    ctx->pc = 0x438F6Cu;
label_438f6c:
    // 0x438f6c: 0x2407007e  addiu       $a3, $zero, 0x7E
    ctx->pc = 0x438f6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 126));
label_438f70:
    // 0x438f70: 0x710c0  sll         $v0, $a3, 3
    ctx->pc = 0x438f70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x438f74: 0x26896d90  addiu       $t1, $s4, 0x6D90
    ctx->pc = 0x438f74u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
    // 0x438f78: 0x494021  addu        $t0, $v0, $t1
    ctx->pc = 0x438f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x438f7c: 0x8d060008  lw          $a2, 0x8($t0)
    ctx->pc = 0x438f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x438f80: 0x54c8000e  bnel        $a2, $t0, . + 4 + (0xE << 2)
    ctx->pc = 0x438F80u;
    {
        const bool branch_taken_0x438f80 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 8));
        if (branch_taken_0x438f80) {
            ctx->pc = 0x438F84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438F80u;
            // 0x438f84: 0x8cc30004  lw          $v1, 0x4($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438FBCu;
            goto label_438fbc;
        }
    }
    ctx->pc = 0x438F88u;
    // 0x438f88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x438f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x438f8c: 0x24e30003  addiu       $v1, $a3, 0x3
    ctx->pc = 0x438f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 3));
    // 0x438f90: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x438f90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x438f94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x438f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x438f98: 0xe2180b  movn        $v1, $a3, $v0
    ctx->pc = 0x438f98u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 7));
    // 0x438f9c: 0x8d250004  lw          $a1, 0x4($t1)
    ctx->pc = 0x438f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x438fa0: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x438fa0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x438fa4: 0x642014  dsllv       $a0, $a0, $v1
    ctx->pc = 0x438fa4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 3) & 0x3F));
    // 0x438fa8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x438fa8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x438fac: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x438facu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
    // 0x438fb0: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x438fb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x438fb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x438FB4u;
    {
        const bool branch_taken_0x438fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x438FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x438FB4u;
        // 0x438fb8: 0xad250004  sw          $a1, 0x4($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x438fb4) {
            ctx->pc = 0x439000u;
            goto label_439000;
        }
    }
    ctx->pc = 0x438FBCu;
label_438fbc:
    // 0x438fbc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x438fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x438fc0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x438fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x438fc4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x438fc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x438fc8: 0xa3182b  sltu        $v1, $a1, $v1
    ctx->pc = 0x438fc8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x438fcc: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x438FCCu;
    {
        const bool branch_taken_0x438fcc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x438fcc) {
            ctx->pc = 0x438FD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438FCCu;
            // 0x438fd0: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439000u;
            goto label_439000;
        }
    }
    ctx->pc = 0x438FD4u;
    // 0x438fd4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x438fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x438fd8: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x438fd8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x438fdc: 0x8cc60008  lw          $a2, 0x8($a2)
    ctx->pc = 0x438fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_438fe0:
    // 0x438fe0: 0x50c80007  beql        $a2, $t0, . + 4 + (0x7 << 2)
    ctx->pc = 0x438FE0u;
    {
        const bool branch_taken_0x438fe0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 8));
        if (branch_taken_0x438fe0) {
            ctx->pc = 0x438FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438FE0u;
            // 0x438fe4: 0x8cc8000c  lw          $t0, 0xC($a2) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x439000u;
            goto label_439000;
        }
    }
    ctx->pc = 0x438FE8u;
    // 0x438fe8: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x438fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x438fec: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x438fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x438ff0: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x438ff0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x438ff4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x438FF4u;
    {
        const bool branch_taken_0x438ff4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x438ff4) {
            ctx->pc = 0x438FF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x438FF4u;
            // 0x438ff8: 0x8cc60008  lw          $a2, 0x8($a2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x438FE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_438fe0;
        }
    }
    ctx->pc = 0x438FFCu;
    // 0x438ffc: 0x8cc8000c  lw          $t0, 0xC($a2)
    ctx->pc = 0x438ffcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 12)));
label_439000:
    // 0x439000: 0xae08000c  sw          $t0, 0xC($s0)
    ctx->pc = 0x439000u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 8));
    // 0x439004: 0xae060008  sw          $a2, 0x8($s0)
    ctx->pc = 0x439004u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 6));
    // 0x439008: 0xad100008  sw          $s0, 0x8($t0)
    ctx->pc = 0x439008u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 16));
    // 0x43900c: 0xacd0000c  sw          $s0, 0xC($a2)
    ctx->pc = 0x43900cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 16));
    // 0x439010: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x439010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_439014:
    // 0x439014: 0x25440003  addiu       $a0, $t2, 0x3
    ctx->pc = 0x439014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
    // 0x439018: 0x4a102a  slt         $v0, $v0, $t2
    ctx->pc = 0x439018u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
    // 0x43901c: 0x26836d90  addiu       $v1, $s4, 0x6D90
    ctx->pc = 0x43901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
    // 0x439020: 0x142200b  movn        $a0, $t2, $v0
    ctx->pc = 0x439020u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 10));
    // 0x439024: 0x9c650004  lwu         $a1, 0x4($v1)
    ctx->pc = 0x439024u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x439028: 0x42083  sra         $a0, $a0, 2
    ctx->pc = 0x439028u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 2));
    // 0x43902c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x43902cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x439030: 0x823014  dsllv       $a2, $v0, $a0
    ctx->pc = 0x439030u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (GPR_U32(ctx, 4) & 0x3F));
    // 0x439034: 0xa6182b  sltu        $v1, $a1, $a2
    ctx->pc = 0x439034u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x439038: 0x1460005b  bnez        $v1, . + 4 + (0x5B << 2)
    ctx->pc = 0x439038u;
    {
        const bool branch_taken_0x439038 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x43903Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439038u;
        // 0x43903c: 0x26836d90  addiu       $v1, $s4, 0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439038) {
            ctx->pc = 0x4391A8u;
            goto label_4391a8;
        }
    }
    ctx->pc = 0x439040u;
    // 0x439040: 0xc51024  and         $v0, $a2, $a1
    ctx->pc = 0x439040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x439044: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x439044u;
    {
        const bool branch_taken_0x439044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439044u;
        // 0x439048: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439044) {
            ctx->pc = 0x439084u;
            goto label_439084;
        }
    }
    ctx->pc = 0x43904Cu;
    // 0x43904c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x43904cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x439050: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x439050u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x439054: 0x1421024  and         $v0, $t2, $v0
    ctx->pc = 0x439054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & GPR_U64(ctx, 2));
    // 0x439058: 0xc51824  and         $v1, $a2, $a1
    ctx->pc = 0x439058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
    // 0x43905c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x43905Cu;
    {
        const bool branch_taken_0x43905c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x439060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43905Cu;
        // 0x439060: 0x244a0004  addiu       $t2, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43905c) {
            ctx->pc = 0x439080u;
            goto label_439080;
        }
    }
    ctx->pc = 0x439064u;
    // 0x439064: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x439064u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_439068:
    // 0x439068: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x439068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x43906c: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x43906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x439070: 0x0  nop
    ctx->pc = 0x439070u;
    // NOP
    // 0x439074: 0x0  nop
    ctx->pc = 0x439074u;
    // NOP
    // 0x439078: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439078u;
    {
        const bool branch_taken_0x439078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43907Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439078u;
        // 0x43907c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439078) {
            ctx->pc = 0x439068u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439068;
        }
    }
    ctx->pc = 0x439080u;
label_439080:
    // 0x439080: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x439080u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_439084:
    // 0x439084: 0x244c6d90  addiu       $t4, $v0, 0x6D90
    ctx->pc = 0x439084u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 2), 28048));
    // 0x439088: 0x180682d  daddu       $t5, $t4, $zero
    ctx->pc = 0x439088u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43908c: 0xa10c0  sll         $v0, $t2, 3
    ctx->pc = 0x43908cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
label_439090:
    // 0x439090: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x439090u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439094: 0x4c4821  addu        $t1, $v0, $t4
    ctx->pc = 0x439094u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 12)));
    // 0x439098: 0x120402d  daddu       $t0, $t1, $zero
    ctx->pc = 0x439098u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43909c: 0x8d10000c  lw          $s0, 0xC($t0)
    ctx->pc = 0x43909cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_4390a0:
    // 0x4390a0: 0x12080019  beq         $s0, $t0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4390A0u;
    {
        const bool branch_taken_0x4390a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 8));
        ctx->pc = 0x4390A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4390A0u;
        // 0x4390a4: 0x2942003f  slti        $v0, $t2, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4390a0) {
            ctx->pc = 0x439108u;
            goto label_439108;
        }
    }
    ctx->pc = 0x4390A8u;
    // 0x4390a8: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x4390a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x4390ac: 0x3484fffc  ori         $a0, $a0, 0xFFFC
    ctx->pc = 0x4390acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65532);
    // 0x4390b0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4390b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4390b4: 0x0  nop
    ctx->pc = 0x4390b4u;
    // NOP
label_4390b8:
    // 0x4390b8: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x4390b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x4390bc: 0xb1182b  sltu        $v1, $a1, $s1
    ctx->pc = 0x4390bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4390c0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x4390C0u;
    {
        const bool branch_taken_0x4390c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4390C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4390C0u;
        // 0x4390c4: 0x2251023  subu        $v0, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4390c0) {
            ctx->pc = 0x4390D8u;
            goto label_4390d8;
        }
    }
    ctx->pc = 0x4390C8u;
    // 0x4390c8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4390c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4390cc: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4390ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4390d0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4390D0u;
    {
        const bool branch_taken_0x4390d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4390D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4390D0u;
        // 0x4390d4: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4390d0) {
            ctx->pc = 0x4390E4u;
            goto label_4390e4;
        }
    }
    ctx->pc = 0x4390D8u;
label_4390d8:
    // 0x4390d8: 0xb11023  subu        $v0, $a1, $s1
    ctx->pc = 0x4390d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
    // 0x4390dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4390dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4390e0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x4390e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_4390e4:
    // 0x4390e4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x4390e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x4390e8: 0x50400070  beql        $v0, $zero, . + 4 + (0x70 << 2)
    ctx->pc = 0x4390E8u;
    {
        const bool branch_taken_0x4390e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4390e8) {
            ctx->pc = 0x4390ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4390E8u;
            // 0x4390ec: 0x8e08000c  lw          $t0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4392ACu;
            goto label_4392ac;
        }
    }
    ctx->pc = 0x4390F0u;
    // 0x4390f0: 0x4e10084  bgez        $a3, . + 4 + (0x84 << 2)
    ctx->pc = 0x4390F0u;
    {
        const bool branch_taken_0x4390f0 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x4390F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4390F0u;
        // 0x4390f4: 0x2051821  addu        $v1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4390f0) {
            ctx->pc = 0x439304u;
            goto label_439304;
        }
    }
    ctx->pc = 0x4390F8u;
    // 0x4390f8: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x4390f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4390fc: 0x5608ffee  bnel        $s0, $t0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x4390FCu;
    {
        const bool branch_taken_0x4390fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 8));
        if (branch_taken_0x4390fc) {
            ctx->pc = 0x439100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4390FCu;
            // 0x439100: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4390B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4390b8;
        }
    }
    ctx->pc = 0x439104u;
    // 0x439104: 0x2942003f  slti        $v0, $t2, 0x3F
    ctx->pc = 0x439104u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 10) < (int64_t)(int32_t)63) ? 1 : 0);
label_439108:
    // 0x439108: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x439108u;
    {
        const bool branch_taken_0x439108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43910Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439108u;
        // 0x43910c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439108) {
            ctx->pc = 0x439118u;
            goto label_439118;
        }
    }
    ctx->pc = 0x439110u;
    // 0x439110: 0x25080008  addiu       $t0, $t0, 0x8
    ctx->pc = 0x439110u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
    // 0x439114: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x439114u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_439118:
    // 0x439118: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x439118u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x43911c: 0x31420003  andi        $v0, $t2, 0x3
    ctx->pc = 0x43911cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)3);
    // 0x439120: 0x5440ffdf  bnel        $v0, $zero, . + 4 + (-0x21 << 2)
    ctx->pc = 0x439120u;
    {
        const bool branch_taken_0x439120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x439120) {
            ctx->pc = 0x439124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x439120u;
            // 0x439124: 0x8d10000c  lw          $s0, 0xC($t0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4390A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4390a0;
        }
    }
    ctx->pc = 0x439128u;
label_439128:
    // 0x439128: 0x31620003  andi        $v0, $t3, 0x3
    ctx->pc = 0x439128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)3);
    // 0x43912c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x43912Cu;
    {
        const bool branch_taken_0x43912c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43912Cu;
        // 0x439130: 0x2529fff8  addiu       $t1, $t1, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43912c) {
            ctx->pc = 0x439188u;
            goto label_439188;
        }
    }
    ctx->pc = 0x439134u;
    // 0x439134: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x439134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x439138: 0x1049fffb  beq         $v0, $t1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439138u;
    {
        const bool branch_taken_0x439138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        ctx->pc = 0x43913Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439138u;
        // 0x43913c: 0x256bffff  addiu       $t3, $t3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439138) {
            ctx->pc = 0x439128u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439128;
        }
    }
    ctx->pc = 0x439140u;
label_439140:
    // 0x439140: 0x9d830004  lwu         $v1, 0x4($t4)
    ctx->pc = 0x439140u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x439144: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x439144u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x439148: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x439148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x43914c: 0x54400016  bnel        $v0, $zero, . + 4 + (0x16 << 2)
    ctx->pc = 0x43914Cu;
    {
        const bool branch_taken_0x43914c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x43914c) {
            ctx->pc = 0x439150u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x43914Cu;
            // 0x439150: 0x26836d90  addiu       $v1, $s4, 0x6D90 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4391A8u;
            goto label_4391a8;
        }
    }
    ctx->pc = 0x439154u;
    // 0x439154: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x439154u;
    {
        const bool branch_taken_0x439154 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x439158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439154u;
        // 0x439158: 0xc31024  and         $v0, $a2, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439154) {
            ctx->pc = 0x4391A4u;
            goto label_4391a4;
        }
    }
    ctx->pc = 0x43915Cu;
    // 0x43915c: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
    ctx->pc = 0x43915Cu;
    {
        const bool branch_taken_0x43915c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43915Cu;
        // 0x439160: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43915c) {
            ctx->pc = 0x439090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439090;
        }
    }
    ctx->pc = 0x439164u;
    // 0x439164: 0x9da30004  lwu         $v1, 0x4($t5)
    ctx->pc = 0x439164u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 13), 4)));
label_439168:
    // 0x439168: 0x63078  dsll        $a2, $a2, 1
    ctx->pc = 0x439168u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 1);
    // 0x43916c: 0xc31024  and         $v0, $a2, $v1
    ctx->pc = 0x43916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x439170: 0x0  nop
    ctx->pc = 0x439170u;
    // NOP
    // 0x439174: 0x0  nop
    ctx->pc = 0x439174u;
    // NOP
    // 0x439178: 0x1040fffb  beqz        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x439178u;
    {
        const bool branch_taken_0x439178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x43917Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439178u;
        // 0x43917c: 0x254a0004  addiu       $t2, $t2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439178) {
            ctx->pc = 0x439168u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439168;
        }
    }
    ctx->pc = 0x439180u;
    // 0x439180: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
    ctx->pc = 0x439180u;
    {
        const bool branch_taken_0x439180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439180u;
        // 0x439184: 0xa10c0  sll         $v0, $t2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439180) {
            ctx->pc = 0x439090u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439090;
        }
    }
    ctx->pc = 0x439188u;
label_439188:
    // 0x439188: 0x8d830004  lw          $v1, 0x4($t4)
    ctx->pc = 0x439188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x43918c: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x43918cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
    // 0x439190: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x439190u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x439194: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x439194u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x439198: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x439198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x43919c: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x43919Cu;
    {
        const bool branch_taken_0x43919c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4391A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43919Cu;
        // 0x4391a0: 0xad830004  sw          $v1, 0x4($t4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 12), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43919c) {
            ctx->pc = 0x439140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_439140;
        }
    }
    ctx->pc = 0x4391A4u;
label_4391a4:
    // 0x4391a4: 0x26836d90  addiu       $v1, $s4, 0x6D90
    ctx->pc = 0x4391a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
label_4391a8:
    // 0x4391a8: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4391a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4391ac: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x4391acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x4391b0: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x4391b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
    // 0x4391b4: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x4391b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4391b8: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x4391b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x4391bc: 0x51202b  sltu        $a0, $v0, $s1
    ctx->pc = 0x4391bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x4391c0: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x4391C0u;
    {
        const bool branch_taken_0x4391c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x4391c0) {
            ctx->pc = 0x4391C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4391C0u;
            // 0x4391c4: 0x511023  subu        $v0, $v0, $s1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4391DCu;
            goto label_4391dc;
        }
    }
    ctx->pc = 0x4391C8u;
    // 0x4391c8: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x4391c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4391cc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4391ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4391d0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x4391d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x4391d4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4391D4u;
    {
        const bool branch_taken_0x4391d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4391D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4391D4u;
        // 0x4391d8: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4391d4) {
            ctx->pc = 0x4391E4u;
            goto label_4391e4;
        }
    }
    ctx->pc = 0x4391DCu;
label_4391dc:
    // 0x4391dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4391dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4391e0: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x4391e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_4391e4:
    // 0x4391e4: 0x26926d90  addiu       $s2, $s4, 0x6D90
    ctx->pc = 0x4391e4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
    // 0x4391e8: 0x3c10ffff  lui         $s0, 0xFFFF
    ctx->pc = 0x4391e8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)65535 << 16));
    // 0x4391ec: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x4391ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x4391f0: 0x3610fffc  ori         $s0, $s0, 0xFFFC
    ctx->pc = 0x4391f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | (uint64_t)(uint16_t)65532);
    // 0x4391f4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4391f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4391f8: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x4391f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
    // 0x4391fc: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x4391fcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x439200: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x439200u;
    {
        const bool branch_taken_0x439200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439200u;
        // 0x439204: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439200) {
            ctx->pc = 0x439214u;
            goto label_439214;
        }
    }
    ctx->pc = 0x439208u;
    // 0x439208: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x439208u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x43920c: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x43920Cu;
    {
        const bool branch_taken_0x43920c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43920Cu;
        // 0x439210: 0x26866d90  addiu       $a2, $s4, 0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43920c) {
            ctx->pc = 0x439328u;
            goto label_439328;
        }
    }
    ctx->pc = 0x439214u;
label_439214:
    // 0x439214: 0xc10e27a  jal         func_4389E8
    ctx->pc = 0x439214u;
    SET_GPR_U32(ctx, 31, 0x43921Cu);
    ctx->pc = 0x439218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x439214u;
    // 0x439218: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4389E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4389E8u, 0x439214u, 0x43921Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43921Cu;
label_43921c:
    // 0x43921c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x43921cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x439220: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x439220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x439224: 0x701824  and         $v1, $v1, $s0
    ctx->pc = 0x439224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 16));
    // 0x439228: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x439228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x43922c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x43922Cu;
    {
        const bool branch_taken_0x43922c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43922Cu;
        // 0x439230: 0x2231023  subu        $v0, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43922c) {
            ctx->pc = 0x439244u;
            goto label_439244;
        }
    }
    ctx->pc = 0x439234u;
    // 0x439234: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x439234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x439238: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x439238u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x43923c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x43923Cu;
    {
        const bool branch_taken_0x43923c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43923Cu;
        // 0x439240: 0x2382f  dsubu       $a3, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x43923c) {
            ctx->pc = 0x439250u;
            goto label_439250;
        }
    }
    ctx->pc = 0x439244u;
label_439244:
    // 0x439244: 0x711023  subu        $v0, $v1, $s1
    ctx->pc = 0x439244u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x439248: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x439248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x43924c: 0x2383e  dsrl32      $a3, $v0, 0
    ctx->pc = 0x43924cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) >> (32 + 0));
label_439250:
    // 0x439250: 0x26826d90  addiu       $v0, $s4, 0x6D90
    ctx->pc = 0x439250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
    // 0x439254: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x439254u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x439258: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x439258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x43925c: 0x3463fffc  ori         $v1, $v1, 0xFFFC
    ctx->pc = 0x43925cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65532);
    // 0x439260: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x439260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x439264: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x439264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x439268: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x439268u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x43926c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x43926Cu;
    {
        const bool branch_taken_0x43926c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x439270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x43926Cu;
        // 0x439270: 0x28e20010  slti        $v0, $a3, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x43926c) {
            ctx->pc = 0x43927Cu;
            goto label_43927c;
        }
    }
    ctx->pc = 0x439274u;
    // 0x439274: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x439274u;
    {
        const bool branch_taken_0x439274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x439278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439274u;
        // 0x439278: 0x26866d90  addiu       $a2, $s4, 0x6D90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 28048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439274) {
            ctx->pc = 0x439328u;
            goto label_439328;
        }
    }
    ctx->pc = 0x43927Cu;
label_43927c:
    // 0x43927c: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x43927Cu;
    SET_GPR_U32(ctx, 31, 0x439284u);
    ctx->pc = 0x439280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43927Cu;
    // 0x439280: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x43927Cu, 0x439284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x439284u;
label_439284:
    // 0x439284: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x439284u;
    {
        const bool branch_taken_0x439284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439284u;
        // 0x439288: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439284) {
            ctx->pc = 0x439360u;
            goto label_439360;
        }
    }
    ctx->pc = 0x43928Cu;
label_43928c:
    // 0x43928c: 0x2051821  addu        $v1, $s0, $a1
    ctx->pc = 0x43928cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x439290: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x439290u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x439294: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x439294u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439298: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x439298u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x43929c: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x43929cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x4392a0: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x4392a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x4392a4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x4392A4u;
    {
        const bool branch_taken_0x4392a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4392A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4392A4u;
        // 0x4392a8: 0x34420001  ori         $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4392a4) {
            ctx->pc = 0x439350u;
            goto label_439350;
        }
    }
    ctx->pc = 0x4392ACu;
label_4392ac:
    // 0x4392ac: 0x36240001  ori         $a0, $s1, 0x1
    ctx->pc = 0x4392acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x4392b0: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x4392b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x4392b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4392b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4392b8: 0xae040004  sw          $a0, 0x4($s0)
    ctx->pc = 0x4392b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 4));
    // 0x4392bc: 0x25c36d98  addiu       $v1, $t6, 0x6D98
    ctx->pc = 0x4392bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 14), 28056));
    // 0x4392c0: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x4392c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x4392c4: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x4392c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x4392c8: 0xad060008  sw          $a2, 0x8($t0)
    ctx->pc = 0x4392c8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
    // 0x4392cc: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x4392ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x4392d0: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x4392d0u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x4392d4: 0x2114021  addu        $t0, $s0, $s1
    ctx->pc = 0x4392d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x4392d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x4392d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x4392dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x4392dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x4392e0: 0xac68000c  sw          $t0, 0xC($v1)
    ctx->pc = 0x4392e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 8));
    // 0x4392e4: 0x1053021  addu        $a2, $t0, $a1
    ctx->pc = 0x4392e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x4392e8: 0xac680008  sw          $t0, 0x8($v1)
    ctx->pc = 0x4392e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 8));
    // 0x4392ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4392ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4392f0: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x4392f0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
    // 0x4392f4: 0xad030008  sw          $v1, 0x8($t0)
    ctx->pc = 0x4392f4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 3));
    // 0x4392f8: 0xad03000c  sw          $v1, 0xC($t0)
    ctx->pc = 0x4392f8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 3));
    // 0x4392fc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x4392FCu;
    {
        const bool branch_taken_0x4392fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4392FCu;
        // 0x439300: 0xacc50000  sw          $a1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4392fc) {
            ctx->pc = 0x439354u;
            goto label_439354;
        }
    }
    ctx->pc = 0x439304u;
label_439304:
    // 0x439304: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x439304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x439308: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x439308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x43930c: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x43930cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x439310: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x439310u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x439314: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x439314u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x439318: 0x8e060008  lw          $a2, 0x8($s0)
    ctx->pc = 0x439318u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x43931c: 0xacc8000c  sw          $t0, 0xC($a2)
    ctx->pc = 0x43931cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 8));
    // 0x439320: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x439320u;
    {
        const bool branch_taken_0x439320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x439324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439320u;
        // 0x439324: 0xad060008  sw          $a2, 0x8($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x439320) {
            ctx->pc = 0x439354u;
            goto label_439354;
        }
    }
    ctx->pc = 0x439328u;
label_439328:
    // 0x439328: 0x36250001  ori         $a1, $s1, 0x1
    ctx->pc = 0x439328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)1);
    // 0x43932c: 0x8cd00008  lw          $s0, 0x8($a2)
    ctx->pc = 0x43932cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x439330: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x439330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x439334: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x439334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x439338: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x439338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x43933c: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x43933cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
    // 0x439340: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x439340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x439344: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x439344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x439348: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x439348u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x43934c: 0xacc30008  sw          $v1, 0x8($a2)
    ctx->pc = 0x43934cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 3));
label_439350:
    // 0x439350: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x439350u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_439354:
    // 0x439354: 0xc10cfe6  jal         func_433F98
    ctx->pc = 0x439354u;
    SET_GPR_U32(ctx, 31, 0x43935Cu);
    ctx->pc = 0x433F98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x433F98u, 0x439354u, 0x43935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x43935Cu;
label_43935c:
    // 0x43935c: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x43935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_439360:
    // 0x439360: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x439360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x439364: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x439364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x439368: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x439368u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x43936c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x43936cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x439370: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x439370u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x439374: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x439374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x439378: 0x3e00008  jr          $ra
    ctx->pc = 0x439378u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x43937Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x439378u;
        // 0x43937c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x439378u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x439380u;
}
