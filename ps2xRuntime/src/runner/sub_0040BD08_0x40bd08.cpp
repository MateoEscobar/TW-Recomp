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

// Function: sub_0040BD08
// Address: 0x40bd08 - 0x40bed8
void sub_0040BD08_0x40bd08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040BD08_0x40bd08");
#endif

    switch (ctx->pc) {
        case 0x40bd34u: goto label_40bd34;
        case 0x40bd48u: goto label_40bd48;
        case 0x40bd90u: goto label_40bd90;
        case 0x40bdacu: goto label_40bdac;
        case 0x40bdc8u: goto label_40bdc8;
        case 0x40bde0u: goto label_40bde0;
        case 0x40be04u: goto label_40be04;
        case 0x40be0cu: goto label_40be0c;
        case 0x40be18u: goto label_40be18;
        case 0x40be24u: goto label_40be24;
        case 0x40be30u: goto label_40be30;
        case 0x40be38u: goto label_40be38;
        case 0x40be48u: goto label_40be48;
        case 0x40be68u: goto label_40be68;
        case 0x40be70u: goto label_40be70;
        case 0x40be78u: goto label_40be78;
        case 0x40be80u: goto label_40be80;
        case 0x40be88u: goto label_40be88;
        case 0x40beb4u: goto label_40beb4;
        default: break;
    }

    ctx->pc = 0x40bd08u;

    // 0x40bd08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x40bd08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x40bd0c: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x40bd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x40bd10: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x40bd10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x40bd14: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x40bd14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bd18: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x40bd18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x40bd1c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40bd1cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bd20: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x40bd20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x40bd24: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x40bd24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x40bd28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x40bd28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x40bd2c: 0xc0c8d78  jal         func_3235E0
    ctx->pc = 0x40BD2Cu;
    SET_GPR_U32(ctx, 31, 0x40BD34u);
    ctx->pc = 0x40BD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BD2Cu;
    // 0x40bd30: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235E0u, 0x40BD2Cu, 0x40BD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BD34u;
label_40bd34:
    // 0x40bd34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40bd34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bd38: 0x1270000d  beq         $s3, $s0, . + 4 + (0xD << 2)
    ctx->pc = 0x40BD38u;
    {
        const bool branch_taken_0x40bd38 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        ctx->pc = 0x40BD3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD38u;
        // 0x40bd3c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd38) {
            ctx->pc = 0x40BD70u;
            goto label_40bd70;
        }
    }
    ctx->pc = 0x40BD40u;
    // 0x40bd40: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40BD40u;
    SET_GPR_U32(ctx, 31, 0x40BD48u);
    ctx->pc = 0x40BD44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BD40u;
    // 0x40bd44: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40BD40u, 0x40BD48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BD48u;
label_40bd48:
    // 0x40bd48: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x40bd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40bd4c: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x40BD4Cu;
    {
        const bool branch_taken_0x40bd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40BD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD4Cu;
        // 0x40bd50: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd4c) {
            ctx->pc = 0x40BD7Cu;
            goto label_40bd7c;
        }
    }
    ctx->pc = 0x40BD54u;
    // 0x40bd54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x40bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40bd58: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40BD58u;
    {
        const bool branch_taken_0x40bd58 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x40BD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD58u;
        // 0x40bd5c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd58) {
            ctx->pc = 0x40BD78u;
            goto label_40bd78;
        }
    }
    ctx->pc = 0x40BD60u;
    // 0x40bd60: 0x12620005  beq         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40BD60u;
    {
        const bool branch_taken_0x40bd60 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x40BD64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD60u;
        // 0x40bd64: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd60) {
            ctx->pc = 0x40BD78u;
            goto label_40bd78;
        }
    }
    ctx->pc = 0x40BD68u;
    // 0x40bd68: 0x12620004  beq         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x40BD68u;
    {
        const bool branch_taken_0x40bd68 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x40BD6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD68u;
        // 0x40bd6c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd68) {
            ctx->pc = 0x40BD7Cu;
            goto label_40bd7c;
        }
    }
    ctx->pc = 0x40BD70u;
label_40bd70:
    // 0x40bd70: 0x10000051  b           . + 4 + (0x51 << 2)
    ctx->pc = 0x40BD70u;
    {
        const bool branch_taken_0x40bd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD70u;
        // 0x40bd74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd70) {
            ctx->pc = 0x40BEB8u;
            goto label_40beb8;
        }
    }
    ctx->pc = 0x40BD78u;
label_40bd78:
    // 0x40bd78: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x40bd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_40bd7c:
    // 0x40bd7c: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40BD7Cu;
    {
        const bool branch_taken_0x40bd7c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x40BD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD7Cu;
        // 0x40bd80: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd7c) {
            ctx->pc = 0x40BD9Cu;
            goto label_40bd9c;
        }
    }
    ctx->pc = 0x40BD84u;
    // 0x40bd84: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40bd84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bd88: 0xc0c8d6e  jal         func_3235B8
    ctx->pc = 0x40BD88u;
    SET_GPR_U32(ctx, 31, 0x40BD90u);
    ctx->pc = 0x40BD8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BD88u;
    // 0x40bd8c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3235B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3235B8u, 0x40BD88u, 0x40BD90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BD90u;
label_40bd90:
    // 0x40bd90: 0x14400049  bnez        $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x40BD90u;
    {
        const bool branch_taken_0x40bd90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40BD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD90u;
        // 0x40bd94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd90) {
            ctx->pc = 0x40BEB8u;
            goto label_40beb8;
        }
    }
    ctx->pc = 0x40BD98u;
    // 0x40bd98: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x40bd98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40bd9c:
    // 0x40bd9c: 0x16620005  bne         $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40BD9Cu;
    {
        const bool branch_taken_0x40bd9c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x40BDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BD9Cu;
        // 0x40bda0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bd9c) {
            ctx->pc = 0x40BDB4u;
            goto label_40bdb4;
        }
    }
    ctx->pc = 0x40BDA4u;
    // 0x40bda4: 0xc0c8d5a  jal         func_323568
    ctx->pc = 0x40BDA4u;
    SET_GPR_U32(ctx, 31, 0x40BDACu);
    ctx->pc = 0x40BDA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BDA4u;
    // 0x40bda8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323568u, 0x40BDA4u, 0x40BDACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BDACu;
label_40bdac:
    // 0x40bdac: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
    ctx->pc = 0x40BDACu;
    {
        const bool branch_taken_0x40bdac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40BDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BDACu;
        // 0x40bdb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdac) {
            ctx->pc = 0x40BEB8u;
            goto label_40beb8;
        }
    }
    ctx->pc = 0x40BDB4u;
label_40bdb4:
    // 0x40bdb4: 0x16600007  bnez        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x40BDB4u;
    {
        const bool branch_taken_0x40bdb4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x40BDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BDB4u;
        // 0x40bdb8: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdb4) {
            ctx->pc = 0x40BDD4u;
            goto label_40bdd4;
        }
    }
    ctx->pc = 0x40BDBCu;
    // 0x40bdbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x40bdbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bdc0: 0xc0c8d2e  jal         func_3234B8
    ctx->pc = 0x40BDC0u;
    SET_GPR_U32(ctx, 31, 0x40BDC8u);
    ctx->pc = 0x40BDC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BDC0u;
    // 0x40bdc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3234B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3234B8u, 0x40BDC0u, 0x40BDC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BDC8u;
label_40bdc8:
    // 0x40bdc8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x40BDC8u;
    {
        const bool branch_taken_0x40bdc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BDCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BDC8u;
        // 0x40bdcc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdc8) {
            ctx->pc = 0x40BEB8u;
            goto label_40beb8;
        }
    }
    ctx->pc = 0x40BDD0u;
    // 0x40bdd0: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bdd0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40bdd4:
    // 0x40bdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40bdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bdd8: 0xc102f06  jal         func_40BC18
    ctx->pc = 0x40BDD8u;
    SET_GPR_U32(ctx, 31, 0x40BDE0u);
    ctx->pc = 0x40BDDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BDD8u;
    // 0x40bddc: 0x24a58420  addiu       $a1, $a1, -0x7BE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC18u, 0x40BDD8u, 0x40BDE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BDE0u;
label_40bde0:
    // 0x40bde0: 0x56620005  bnel        $s3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40BDE0u;
    {
        const bool branch_taken_0x40bde0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x40bde0) {
            ctx->pc = 0x40BDE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40BDE0u;
            // 0x40bde4: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40BDF8u;
            goto label_40bdf8;
        }
    }
    ctx->pc = 0x40BDE8u;
    // 0x40bde8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x40bde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x40bdec: 0x12020032  beq         $s0, $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x40BDECu;
    {
        const bool branch_taken_0x40bdec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x40BDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BDECu;
        // 0x40bdf0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40bdec) {
            ctx->pc = 0x40BEB8u;
            goto label_40beb8;
        }
    }
    ctx->pc = 0x40BDF4u;
    // 0x40bdf4: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40bdf4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40bdf8:
    // 0x40bdf8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40bdf8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40bdfc: 0xc102866  jal         func_40A198
    ctx->pc = 0x40BDFCu;
    SET_GPR_U32(ctx, 31, 0x40BE04u);
    ctx->pc = 0x40BE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BDFCu;
    // 0x40be00: 0x24a58428  addiu       $a1, $a1, -0x7BD8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40BDFCu, 0x40BE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE04u;
label_40be04:
    // 0x40be04: 0xc10b0b4  jal         func_42C2D0
    ctx->pc = 0x40BE04u;
    SET_GPR_U32(ctx, 31, 0x40BE0Cu);
    ctx->pc = 0x40BE08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE04u;
    // 0x40be08: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C2D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C2D0u, 0x40BE04u, 0x40BE0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE0Cu;
label_40be0c:
    // 0x40be0c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x40be0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be10: 0xc0c8e38  jal         func_3238E0
    ctx->pc = 0x40BE10u;
    SET_GPR_U32(ctx, 31, 0x40BE18u);
    ctx->pc = 0x40BE14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE10u;
    // 0x40be14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3238E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3238E0u, 0x40BE10u, 0x40BE18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE18u;
label_40be18:
    // 0x40be18: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40be18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be1c: 0xc0c8ed4  jal         func_323B50
    ctx->pc = 0x40BE1Cu;
    SET_GPR_U32(ctx, 31, 0x40BE24u);
    ctx->pc = 0x40BE20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE1Cu;
    // 0x40be20: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323B50u, 0x40BE1Cu, 0x40BE24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE24u;
label_40be24:
    // 0x40be24: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x40be24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x40be28: 0xc0c8da2  jal         func_323688
    ctx->pc = 0x40BE28u;
    SET_GPR_U32(ctx, 31, 0x40BE30u);
    ctx->pc = 0x40BE2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE28u;
    // 0x40be2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323688u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323688u, 0x40BE28u, 0x40BE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE30u;
label_40be30:
    // 0x40be30: 0xc10b0e2  jal         func_42C388
    ctx->pc = 0x40BE30u;
    SET_GPR_U32(ctx, 31, 0x40BE38u);
    ctx->pc = 0x40BE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE30u;
    // 0x40be34: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C388u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C388u, 0x40BE30u, 0x40BE38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE38u;
label_40be38:
    // 0x40be38: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x40be38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40be3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be40: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40BE40u;
    SET_GPR_U32(ctx, 31, 0x40BE48u);
    ctx->pc = 0x40BE44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE40u;
    // 0x40be44: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40BE40u, 0x40BE48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE48u;
label_40be48:
    // 0x40be48: 0x52200004  beql        $s1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x40BE48u;
    {
        const bool branch_taken_0x40be48 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x40be48) {
            ctx->pc = 0x40BE4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40BE48u;
            // 0x40be4c: 0x3c050059  lui         $a1, 0x59 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40BE5Cu;
            goto label_40be5c;
        }
    }
    ctx->pc = 0x40BE50u;
    // 0x40be50: 0x12300019  beq         $s1, $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x40BE50u;
    {
        const bool branch_taken_0x40be50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 16));
        ctx->pc = 0x40BE54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BE50u;
        // 0x40be54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40be50) {
            ctx->pc = 0x40BEB8u;
            goto label_40beb8;
        }
    }
    ctx->pc = 0x40BE58u;
    // 0x40be58: 0x3c050059  lui         $a1, 0x59
    ctx->pc = 0x40be58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)89 << 16));
label_40be5c:
    // 0x40be5c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40be5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be60: 0xc102866  jal         func_40A198
    ctx->pc = 0x40BE60u;
    SET_GPR_U32(ctx, 31, 0x40BE68u);
    ctx->pc = 0x40BE64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE60u;
    // 0x40be64: 0x24a58438  addiu       $a1, $a1, -0x7BC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40A198u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40A198u, 0x40BE60u, 0x40BE68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE68u;
label_40be68:
    // 0x40be68: 0xc0c8cc6  jal         func_323318
    ctx->pc = 0x40BE68u;
    SET_GPR_U32(ctx, 31, 0x40BE70u);
    ctx->pc = 0x40BE6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE68u;
    // 0x40be6c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323318u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323318u, 0x40BE68u, 0x40BE70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE70u;
label_40be70:
    // 0x40be70: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x40be70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be74: 0x0  nop
    ctx->pc = 0x40be74u;
    // NOP
label_40be78:
    // 0x40be78: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x40be78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be7c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x40be7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_40be80:
    // 0x40be80: 0xc102f24  jal         func_40BC90
    ctx->pc = 0x40BE80u;
    SET_GPR_U32(ctx, 31, 0x40BE88u);
    ctx->pc = 0x40BE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BE80u;
    // 0x40be84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40BC90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40BC90u, 0x40BE80u, 0x40BE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BE88u;
label_40be88:
    // 0x40be88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40be88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40be8c: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x40BE8Cu;
    {
        const bool branch_taken_0x40be8c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BE90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BE8Cu;
        // 0x40be90: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40be8c) {
            ctx->pc = 0x40BEACu;
            goto label_40beac;
        }
    }
    ctx->pc = 0x40BE94u;
    // 0x40be94: 0x12700005  beq         $s3, $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x40BE94u;
    {
        const bool branch_taken_0x40be94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 16));
        if (branch_taken_0x40be94) {
            ctx->pc = 0x40BEACu;
            goto label_40beac;
        }
    }
    ctx->pc = 0x40BE9Cu;
    // 0x40be9c: 0x1220fff8  beqz        $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x40BE9Cu;
    {
        const bool branch_taken_0x40be9c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40BEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BE9Cu;
        // 0x40bea0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40be9c) {
            ctx->pc = 0x40BE80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40be80;
        }
    }
    ctx->pc = 0x40BEA4u;
    // 0x40bea4: 0x1630fff4  bne         $s1, $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x40BEA4u;
    {
        const bool branch_taken_0x40bea4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 16));
        if (branch_taken_0x40bea4) {
            ctx->pc = 0x40BE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40be78;
        }
    }
    ctx->pc = 0x40BEACu;
label_40beac:
    // 0x40beac: 0xc0c8ccc  jal         func_323330
    ctx->pc = 0x40BEACu;
    SET_GPR_U32(ctx, 31, 0x40BEB4u);
    ctx->pc = 0x40BEB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40BEACu;
    // 0x40beb0: 0x2405fffe  addiu       $a1, $zero, -0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323330u, 0x40BEACu, 0x40BEB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40BEB4u;
label_40beb4:
    // 0x40beb4: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x40beb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_40beb8:
    // 0x40beb8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x40beb8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x40bebc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x40bebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x40bec0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x40bec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x40bec4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x40bec4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x40bec8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x40bec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x40becc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x40beccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x40bed0: 0x3e00008  jr          $ra
    ctx->pc = 0x40BED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40BED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40BED0u;
        // 0x40bed4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40BED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40BED8u;
}
