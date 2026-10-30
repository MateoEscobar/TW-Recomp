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

// Function: sub_0042BD58
// Address: 0x42bd58 - 0x42c000
void sub_0042BD58_0x42bd58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042BD58_0x42bd58");
#endif

    switch (ctx->pc) {
        case 0x42bd94u: goto label_42bd94;
        case 0x42bda4u: goto label_42bda4;
        case 0x42be70u: goto label_42be70;
        case 0x42be80u: goto label_42be80;
        case 0x42be90u: goto label_42be90;
        case 0x42bea0u: goto label_42bea0;
        case 0x42bf18u: goto label_42bf18;
        case 0x42bf70u: goto label_42bf70;
        case 0x42bfd4u: goto label_42bfd4;
        default: break;
    }

    ctx->pc = 0x42bd58u;

    // 0x42bd58: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x42bd58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x42bd5c: 0xffa40060  sd          $a0, 0x60($sp)
    ctx->pc = 0x42bd5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 4));
    // 0x42bd60: 0xffa50068  sd          $a1, 0x68($sp)
    ctx->pc = 0x42bd60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 5));
    // 0x42bd64: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x42bd64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x42bd68: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x42bd68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
    // 0x42bd6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x42bd6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42bd70: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x42bd70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
    // 0x42bd74: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x42bd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x42bd78: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x42bd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
    // 0x42bd7c: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x42bd7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
    // 0x42bd80: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x42bd80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x42bd84: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x42bd84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
    // 0x42bd88: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x42bd88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
    // 0x42bd8c: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42BD8Cu;
    SET_GPR_U32(ctx, 31, 0x42BD94u);
    ctx->pc = 0x42BD90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD8Cu;
    // 0x42bd90: 0xffb10080  sd          $s1, 0x80($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42BD8Cu, 0x42BD94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BD94u;
label_42bd94:
    // 0x42bd94: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x42bd94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x42bd98: 0x27a40068  addiu       $a0, $sp, 0x68
    ctx->pc = 0x42bd98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x42bd9c: 0xc10ae6e  jal         func_42B9B8
    ctx->pc = 0x42BD9Cu;
    SET_GPR_U32(ctx, 31, 0x42BDA4u);
    ctx->pc = 0x42BDA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BD9Cu;
    // 0x42bda0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42B9B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B9B8u, 0x42BD9Cu, 0x42BDA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BDA4u;
label_42bda4:
    // 0x42bda4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x42bda4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x42bda8: 0x2c820002  sltiu       $v0, $a0, 0x2
    ctx->pc = 0x42bda8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42bdac: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x42BDACu;
    {
        const bool branch_taken_0x42bdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDACu;
        // 0x42bdb0: 0x27b70040  addiu       $s7, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bdac) {
            ctx->pc = 0x42BE08u;
            goto label_42be08;
        }
    }
    ctx->pc = 0x42BDB4u;
    // 0x42bdb4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x42bdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x42bdb8: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x42bdb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x42bdbc: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
    ctx->pc = 0x42BDBCu;
    {
        const bool branch_taken_0x42bdbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x42bdbc) {
            ctx->pc = 0x42BDC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42BDBCu;
            // 0x42bdc0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42BE30u;
            goto label_42be30;
        }
    }
    ctx->pc = 0x42BDC4u;
    // 0x42bdc4: 0x38820004  xori        $v0, $a0, 0x4
    ctx->pc = 0x42bdc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)4);
    // 0x42bdc8: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42BDC8u;
    {
        const bool branch_taken_0x42bdc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDC8u;
        // 0x42bdcc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bdc8) {
            ctx->pc = 0x42BDE4u;
            goto label_42bde4;
        }
    }
    ctx->pc = 0x42BDD0u;
    // 0x42bdd0: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x42bdd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x42bdd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x42BDD4u;
    {
        const bool branch_taken_0x42bdd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDD4u;
        // 0x42bdd8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bdd4) {
            ctx->pc = 0x42BDF4u;
            goto label_42bdf4;
        }
    }
    ctx->pc = 0x42BDDCu;
    // 0x42bddc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x42BDDCu;
    {
        const bool branch_taken_0x42bddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDDCu;
        // 0x42bde0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bddc) {
            ctx->pc = 0x42BE10u;
            goto label_42be10;
        }
    }
    ctx->pc = 0x42BDE4u;
label_42bde4:
    // 0x42bde4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42BDE4u;
    {
        const bool branch_taken_0x42bde4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BDE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDE4u;
        // 0x42bde8: 0x38820002  xori        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bde4) {
            ctx->pc = 0x42BE00u;
            goto label_42be00;
        }
    }
    ctx->pc = 0x42BDECu;
    // 0x42bdec: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x42BDECu;
    {
        const bool branch_taken_0x42bdec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDECu;
        // 0x42bdf0: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bdec) {
            ctx->pc = 0x42BE30u;
            goto label_42be30;
        }
    }
    ctx->pc = 0x42BDF4u;
label_42bdf4:
    // 0x42bdf4: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x42bdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x42bdf8: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x42BDF8u;
    {
        const bool branch_taken_0x42bdf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BDF8u;
        // 0x42bdfc: 0x2444f288  addiu       $a0, $v0, -0xD78 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963848));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bdf8) {
            ctx->pc = 0x42BFCCu;
            goto label_42bfcc;
        }
    }
    ctx->pc = 0x42BE00u;
label_42be00:
    // 0x42be00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42BE00u;
    {
        const bool branch_taken_0x42be00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BE00u;
        // 0x42be04: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42be00) {
            ctx->pc = 0x42BE24u;
            goto label_42be24;
        }
    }
    ctx->pc = 0x42BE08u;
label_42be08:
    // 0x42be08: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x42be08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42be0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42be0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_42be10:
    // 0x42be10: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x42be10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x42be14: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x42be14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x42be18: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x42be18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42be1c: 0x1000006b  b           . + 4 + (0x6B << 2)
    ctx->pc = 0x42BE1Cu;
    {
        const bool branch_taken_0x42be1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BE1Cu;
        // 0x42be20: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42be1c) {
            ctx->pc = 0x42BFCCu;
            goto label_42bfcc;
        }
    }
    ctx->pc = 0x42BE24u;
label_42be24:
    // 0x42be24: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42BE24u;
    {
        const bool branch_taken_0x42be24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BE24u;
        // 0x42be28: 0xdfb30010  ld          $s3, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42be24) {
            ctx->pc = 0x42BE48u;
            goto label_42be48;
        }
    }
    ctx->pc = 0x42BE2Cu;
    // 0x42be2c: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x42be2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_42be30:
    // 0x42be30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42be30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be34: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x42be34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42be38: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x42be38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x42be3c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x42be3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x42be40: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x42BE40u;
    {
        const bool branch_taken_0x42be40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BE44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BE40u;
        // 0x42be44: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42be40) {
            ctx->pc = 0x42BFCCu;
            goto label_42bfcc;
        }
    }
    ctx->pc = 0x42BE48u;
label_42be48:
    // 0x42be48: 0x3c16ffff  lui         $s6, 0xFFFF
    ctx->pc = 0x42be48u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65535 << 16));
    // 0x42be4c: 0x16b03e  dsrl32      $s6, $s6, 0
    ctx->pc = 0x42be4cu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) >> (32 + 0));
    // 0x42be50: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x42be50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x42be54: 0x2768024  and         $s0, $s3, $s6
    ctx->pc = 0x42be54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) & GPR_U64(ctx, 22));
    // 0x42be58: 0x256a824  and         $s5, $s2, $s6
    ctx->pc = 0x42be58u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & GPR_U64(ctx, 22));
    // 0x42be5c: 0x13983e  dsrl32      $s3, $s3, 0
    ctx->pc = 0x42be5cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) >> (32 + 0));
    // 0x42be60: 0x12903e  dsrl32      $s2, $s2, 0
    ctx->pc = 0x42be60u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) >> (32 + 0));
    // 0x42be64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42be64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be68: 0xc10b602  jal         func_42D808
    ctx->pc = 0x42BE68u;
    SET_GPR_U32(ctx, 31, 0x42BE70u);
    ctx->pc = 0x42BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BE68u;
    // 0x42be6c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x42BE68u, 0x42BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BE70u;
label_42be70:
    // 0x42be70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x42be70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be74: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x42be74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be78: 0xc10b602  jal         func_42D808
    ctx->pc = 0x42BE78u;
    SET_GPR_U32(ctx, 31, 0x42BE80u);
    ctx->pc = 0x42BE7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BE78u;
    // 0x42be7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x42BE78u, 0x42BE80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BE80u;
label_42be80:
    // 0x42be80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x42be80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be84: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x42be84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be88: 0xc10b602  jal         func_42D808
    ctx->pc = 0x42BE88u;
    SET_GPR_U32(ctx, 31, 0x42BE90u);
    ctx->pc = 0x42BE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BE88u;
    // 0x42be8c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x42BE88u, 0x42BE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BE90u;
label_42be90:
    // 0x42be90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x42be90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x42be94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42be98: 0xc10b602  jal         func_42D808
    ctx->pc = 0x42BE98u;
    SET_GPR_U32(ctx, 31, 0x42BEA0u);
    ctx->pc = 0x42BE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42BE98u;
    // 0x42be9c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42D808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42D808u, 0x42BE98u, 0x42BEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BEA0u;
label_42bea0:
    // 0x42bea0: 0x230802d  daddu       $s0, $s1, $s0
    ctx->pc = 0x42bea0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x42bea4: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x42bea4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x42bea8: 0x10203c  dsll32      $a0, $s0, 0
    ctx->pc = 0x42bea8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 0));
    // 0x42beac: 0x211882b  sltu        $s1, $s0, $s1
    ctx->pc = 0x42beacu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42beb0: 0x284202d  daddu       $a0, $s4, $a0
    ctx->pc = 0x42beb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 4));
    // 0x42beb4: 0x10803e  dsrl32      $s0, $s0, 0
    ctx->pc = 0x42beb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) >> (32 + 0));
    // 0x42beb8: 0x8fa70028  lw          $a3, 0x28($sp)
    ctx->pc = 0x42beb8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x42bebc: 0x2168024  and         $s0, $s0, $s6
    ctx->pc = 0x42bebcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
    // 0x42bec0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x42bec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x42bec4: 0x11883c  dsll32      $s1, $s1, 0
    ctx->pc = 0x42bec4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << (32 + 0));
    // 0x42bec8: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x42bec8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x42becc: 0x94a02b  sltu        $s4, $a0, $s4
    ctx->pc = 0x42beccu;
    SET_GPR_U64(ctx, 20, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x42bed0: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x42bed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
    // 0x42bed4: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x42bed4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x42bed8: 0x661826  xor         $v1, $v1, $a2
    ctx->pc = 0x42bed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 6));
    // 0x42bedc: 0x2348825  or          $s1, $s1, $s4
    ctx->pc = 0x42bedcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 20));
    // 0x42bee0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x42bee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x42bee4: 0x230882d  daddu       $s1, $s1, $s0
    ctx->pc = 0x42bee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 16));
    // 0x42bee8: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x42bee8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x42beec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42beecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bef0: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x42bef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x42bef4: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x42bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x42bef8: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x42bef8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42befc: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x42BEFCu;
    {
        const bool branch_taken_0x42befc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BF00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BEFCu;
        // 0x42bf00: 0xafa50048  sw          $a1, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42befc) {
            ctx->pc = 0x42BF44u;
            goto label_42bf44;
        }
    }
    ctx->pc = 0x42BF04u;
    // 0x42bf04: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x42bf04u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x42bf08: 0x6343c  dsll32      $a2, $a2, 16
    ctx->pc = 0x42bf08u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 16));
    // 0x42bf0c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x42bf0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bf10: 0x318fa  dsrl        $v1, $v1, 3
    ctx->pc = 0x42bf10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> 3);
    // 0x42bf14: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x42bf14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
label_42bf18:
    // 0x42bf18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x42bf18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x42bf1c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x42bf1cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x42bf20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42BF20u;
    {
        const bool branch_taken_0x42bf20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF20u;
        // 0x42bf24: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bf20) {
            ctx->pc = 0x42BF30u;
            goto label_42bf30;
        }
    }
    ctx->pc = 0x42BF28u;
    // 0x42bf28: 0x4207a  dsrl        $a0, $a0, 1
    ctx->pc = 0x42bf28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> 1);
    // 0x42bf2c: 0x862025  or          $a0, $a0, $a2
    ctx->pc = 0x42bf2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 6));
label_42bf30:
    // 0x42bf30: 0x11887a  dsrl        $s1, $s1, 1
    ctx->pc = 0x42bf30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) >> 1);
    // 0x42bf34: 0x71102b  sltu        $v0, $v1, $s1
    ctx->pc = 0x42bf34u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42bf38: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x42BF38u;
    {
        const bool branch_taken_0x42bf38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BF3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF38u;
        // 0x42bf3c: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bf38) {
            ctx->pc = 0x42BF18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42bf18;
        }
    }
    ctx->pc = 0x42BF40u;
    // 0x42bf40: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x42bf40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
label_42bf44:
    // 0x42bf44: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x42bf44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bf48: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x42bf48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x42bf4c: 0x51102b  sltu        $v0, $v0, $s1
    ctx->pc = 0x42bf4cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42bf50: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x42BF50u;
    {
        const bool branch_taken_0x42bf50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x42BF54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF50u;
        // 0x42bf54: 0x322300ff  andi        $v1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bf50) {
            ctx->pc = 0x42BF98u;
            goto label_42bf98;
        }
    }
    ctx->pc = 0x42BF58u;
    // 0x42bf58: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x42bf58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x42bf5c: 0x34088000  ori         $t0, $zero, 0x8000
    ctx->pc = 0x42bf5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x42bf60: 0x8443c  dsll32      $t0, $t0, 16
    ctx->pc = 0x42bf60u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 16));
    // 0x42bf64: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x42bf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x42bf68: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x42bf68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x42bf6c: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x42bf6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
label_42bf70:
    // 0x42bf70: 0x118878  dsll        $s1, $s1, 1
    ctx->pc = 0x42bf70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 1);
    // 0x42bf74: 0x881824  and         $v1, $a0, $t0
    ctx->pc = 0x42bf74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 8));
    // 0x42bf78: 0x2271025  or          $v0, $s1, $a3
    ctx->pc = 0x42bf78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
    // 0x42bf7c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x42bf7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x42bf80: 0x43880b  movn        $s1, $v0, $v1
    ctx->pc = 0x42bf80u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
    // 0x42bf84: 0xd1102b  sltu        $v0, $a2, $s1
    ctx->pc = 0x42bf84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x42bf88: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x42BF88u;
    {
        const bool branch_taken_0x42bf88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BF8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BF88u;
        // 0x42bf8c: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bf88) {
            ctx->pc = 0x42BF70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_42bf70;
        }
    }
    ctx->pc = 0x42BF90u;
    // 0x42bf90: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x42bf90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x42bf94: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x42bf94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_42bf98:
    // 0x42bf98: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x42bf98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x42bf9c: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42BF9Cu;
    {
        const bool branch_taken_0x42bf9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42bf9c) {
            ctx->pc = 0x42BFA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42BF9Cu;
            // 0x42bfa0: 0xffb10050  sd          $s1, 0x50($sp) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42BFC0u;
            goto label_42bfc0;
        }
    }
    ctx->pc = 0x42BFA4u;
    // 0x42bfa4: 0x32220100  andi        $v0, $s1, 0x100
    ctx->pc = 0x42bfa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)256);
    // 0x42bfa8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x42BFA8u;
    {
        const bool branch_taken_0x42bfa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BFA8u;
        // 0x42bfac: 0x66220080  daddiu      $v0, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bfa8) {
            ctx->pc = 0x42BFB8u;
            goto label_42bfb8;
        }
    }
    ctx->pc = 0x42BFB0u;
    // 0x42bfb0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42BFB0u;
    {
        const bool branch_taken_0x42bfb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42BFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BFB0u;
        // 0x42bfb4: 0x66310080  daddiu      $s1, $s1, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 17, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42bfb0) {
            ctx->pc = 0x42BFBCu;
            goto label_42bfbc;
        }
    }
    ctx->pc = 0x42BFB8u;
label_42bfb8:
    // 0x42bfb8: 0x44880b  movn        $s1, $v0, $a0
    ctx->pc = 0x42bfb8u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 2));
label_42bfbc:
    // 0x42bfbc: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x42bfbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_42bfc0:
    // 0x42bfc0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x42bfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x42bfc4: 0xaee20000  sw          $v0, 0x0($s7)
    ctx->pc = 0x42bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 2));
    // 0x42bfc8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x42bfc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_42bfcc:
    // 0x42bfcc: 0xc10ae22  jal         func_42B888
    ctx->pc = 0x42BFCCu;
    SET_GPR_U32(ctx, 31, 0x42BFD4u);
    ctx->pc = 0x42B888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42B888u, 0x42BFCCu, 0x42BFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42BFD4u;
label_42bfd4:
    // 0x42bfd4: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x42bfd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x42bfd8: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x42bfd8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x42bfdc: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x42bfdcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x42bfe0: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x42bfe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x42bfe4: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x42bfe4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x42bfe8: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x42bfe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x42bfec: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x42bfecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x42bff0: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x42bff0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x42bff4: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x42bff4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x42bff8: 0x3e00008  jr          $ra
    ctx->pc = 0x42BFF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42BFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42BFF8u;
        // 0x42bffc: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42BFF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C000u;
}
