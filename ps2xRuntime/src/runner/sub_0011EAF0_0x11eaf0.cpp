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

// Function: sub_0011EAF0
// Address: 0x11eaf0 - 0x11ed60
void sub_0011EAF0_0x11eaf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011EAF0_0x11eaf0");
#endif

    switch (ctx->pc) {
        case 0x11eaf0u: goto label_11eaf0;
        case 0x11eaf4u: goto label_11eaf4;
        case 0x11eaf8u: goto label_11eaf8;
        case 0x11eafcu: goto label_11eafc;
        case 0x11eb00u: goto label_11eb00;
        case 0x11eb04u: goto label_11eb04;
        case 0x11eb08u: goto label_11eb08;
        case 0x11eb0cu: goto label_11eb0c;
        case 0x11eb10u: goto label_11eb10;
        case 0x11eb14u: goto label_11eb14;
        case 0x11eb18u: goto label_11eb18;
        case 0x11eb1cu: goto label_11eb1c;
        case 0x11eb20u: goto label_11eb20;
        case 0x11eb24u: goto label_11eb24;
        case 0x11eb28u: goto label_11eb28;
        case 0x11eb2cu: goto label_11eb2c;
        case 0x11eb30u: goto label_11eb30;
        case 0x11eb34u: goto label_11eb34;
        case 0x11eb38u: goto label_11eb38;
        case 0x11eb3cu: goto label_11eb3c;
        case 0x11eb40u: goto label_11eb40;
        case 0x11eb44u: goto label_11eb44;
        case 0x11eb48u: goto label_11eb48;
        case 0x11eb4cu: goto label_11eb4c;
        case 0x11eb50u: goto label_11eb50;
        case 0x11eb54u: goto label_11eb54;
        case 0x11eb58u: goto label_11eb58;
        case 0x11eb5cu: goto label_11eb5c;
        case 0x11eb60u: goto label_11eb60;
        case 0x11eb64u: goto label_11eb64;
        case 0x11eb68u: goto label_11eb68;
        case 0x11eb6cu: goto label_11eb6c;
        case 0x11eb70u: goto label_11eb70;
        case 0x11eb74u: goto label_11eb74;
        case 0x11eb78u: goto label_11eb78;
        case 0x11eb7cu: goto label_11eb7c;
        case 0x11eb80u: goto label_11eb80;
        case 0x11eb84u: goto label_11eb84;
        case 0x11eb88u: goto label_11eb88;
        case 0x11eb8cu: goto label_11eb8c;
        case 0x11eb90u: goto label_11eb90;
        case 0x11eb94u: goto label_11eb94;
        case 0x11eb98u: goto label_11eb98;
        case 0x11eb9cu: goto label_11eb9c;
        case 0x11eba0u: goto label_11eba0;
        case 0x11eba4u: goto label_11eba4;
        case 0x11eba8u: goto label_11eba8;
        case 0x11ebacu: goto label_11ebac;
        case 0x11ebb0u: goto label_11ebb0;
        case 0x11ebb4u: goto label_11ebb4;
        case 0x11ebb8u: goto label_11ebb8;
        case 0x11ebbcu: goto label_11ebbc;
        case 0x11ebc0u: goto label_11ebc0;
        case 0x11ebc4u: goto label_11ebc4;
        case 0x11ebc8u: goto label_11ebc8;
        case 0x11ebccu: goto label_11ebcc;
        case 0x11ebd0u: goto label_11ebd0;
        case 0x11ebd4u: goto label_11ebd4;
        case 0x11ebd8u: goto label_11ebd8;
        case 0x11ebdcu: goto label_11ebdc;
        case 0x11ebe0u: goto label_11ebe0;
        case 0x11ebe4u: goto label_11ebe4;
        case 0x11ebe8u: goto label_11ebe8;
        case 0x11ebecu: goto label_11ebec;
        case 0x11ebf0u: goto label_11ebf0;
        case 0x11ebf4u: goto label_11ebf4;
        case 0x11ebf8u: goto label_11ebf8;
        case 0x11ebfcu: goto label_11ebfc;
        case 0x11ec00u: goto label_11ec00;
        case 0x11ec04u: goto label_11ec04;
        case 0x11ec08u: goto label_11ec08;
        case 0x11ec0cu: goto label_11ec0c;
        case 0x11ec10u: goto label_11ec10;
        case 0x11ec14u: goto label_11ec14;
        case 0x11ec18u: goto label_11ec18;
        case 0x11ec1cu: goto label_11ec1c;
        case 0x11ec20u: goto label_11ec20;
        case 0x11ec24u: goto label_11ec24;
        case 0x11ec28u: goto label_11ec28;
        case 0x11ec2cu: goto label_11ec2c;
        case 0x11ec30u: goto label_11ec30;
        case 0x11ec34u: goto label_11ec34;
        case 0x11ec38u: goto label_11ec38;
        case 0x11ec3cu: goto label_11ec3c;
        case 0x11ec40u: goto label_11ec40;
        case 0x11ec44u: goto label_11ec44;
        case 0x11ec48u: goto label_11ec48;
        case 0x11ec4cu: goto label_11ec4c;
        case 0x11ec50u: goto label_11ec50;
        case 0x11ec54u: goto label_11ec54;
        case 0x11ec58u: goto label_11ec58;
        case 0x11ec5cu: goto label_11ec5c;
        case 0x11ec60u: goto label_11ec60;
        case 0x11ec64u: goto label_11ec64;
        case 0x11ec68u: goto label_11ec68;
        case 0x11ec6cu: goto label_11ec6c;
        case 0x11ec70u: goto label_11ec70;
        case 0x11ec74u: goto label_11ec74;
        case 0x11ec78u: goto label_11ec78;
        case 0x11ec7cu: goto label_11ec7c;
        case 0x11ec80u: goto label_11ec80;
        case 0x11ec84u: goto label_11ec84;
        case 0x11ec88u: goto label_11ec88;
        case 0x11ec8cu: goto label_11ec8c;
        case 0x11ec90u: goto label_11ec90;
        case 0x11ec94u: goto label_11ec94;
        case 0x11ec98u: goto label_11ec98;
        case 0x11ec9cu: goto label_11ec9c;
        case 0x11eca0u: goto label_11eca0;
        case 0x11eca4u: goto label_11eca4;
        case 0x11eca8u: goto label_11eca8;
        case 0x11ecacu: goto label_11ecac;
        case 0x11ecb0u: goto label_11ecb0;
        case 0x11ecb4u: goto label_11ecb4;
        case 0x11ecb8u: goto label_11ecb8;
        case 0x11ecbcu: goto label_11ecbc;
        case 0x11ecc0u: goto label_11ecc0;
        case 0x11ecc4u: goto label_11ecc4;
        case 0x11ecc8u: goto label_11ecc8;
        case 0x11ecccu: goto label_11eccc;
        case 0x11ecd0u: goto label_11ecd0;
        case 0x11ecd4u: goto label_11ecd4;
        case 0x11ecd8u: goto label_11ecd8;
        case 0x11ecdcu: goto label_11ecdc;
        case 0x11ece0u: goto label_11ece0;
        case 0x11ece4u: goto label_11ece4;
        case 0x11ece8u: goto label_11ece8;
        case 0x11ececu: goto label_11ecec;
        case 0x11ecf0u: goto label_11ecf0;
        case 0x11ecf4u: goto label_11ecf4;
        case 0x11ecf8u: goto label_11ecf8;
        case 0x11ecfcu: goto label_11ecfc;
        case 0x11ed00u: goto label_11ed00;
        case 0x11ed04u: goto label_11ed04;
        case 0x11ed08u: goto label_11ed08;
        case 0x11ed0cu: goto label_11ed0c;
        case 0x11ed10u: goto label_11ed10;
        case 0x11ed14u: goto label_11ed14;
        case 0x11ed18u: goto label_11ed18;
        case 0x11ed1cu: goto label_11ed1c;
        case 0x11ed20u: goto label_11ed20;
        case 0x11ed24u: goto label_11ed24;
        case 0x11ed28u: goto label_11ed28;
        case 0x11ed2cu: goto label_11ed2c;
        case 0x11ed30u: goto label_11ed30;
        case 0x11ed34u: goto label_11ed34;
        case 0x11ed38u: goto label_11ed38;
        case 0x11ed3cu: goto label_11ed3c;
        case 0x11ed40u: goto label_11ed40;
        case 0x11ed44u: goto label_11ed44;
        case 0x11ed48u: goto label_11ed48;
        case 0x11ed4cu: goto label_11ed4c;
        case 0x11ed50u: goto label_11ed50;
        case 0x11ed54u: goto label_11ed54;
        case 0x11ed58u: goto label_11ed58;
        case 0x11ed5cu: goto label_11ed5c;
        default: break;
    }

    ctx->pc = 0x11eaf0u;

label_11eaf0:
    // 0x11eaf0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11eaf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_11eaf4:
    // 0x11eaf4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x11eaf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_11eaf8:
    // 0x11eaf8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x11eaf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_11eafc:
    // 0x11eafc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11eafcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11eb00:
    // 0x11eb00: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x11eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_11eb04:
    // 0x11eb04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x11eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_11eb08:
    // 0x11eb08: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x11eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_11eb0c:
    // 0x11eb0c: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x11eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_11eb10:
    // 0x11eb10: 0x6000089  bltz        $s0, . + 4 + (0x89 << 2)
label_11eb14:
    if (ctx->pc == 0x11EB14u) {
        ctx->pc = 0x11EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB10u;
        // 0x11eb14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB18u;
        goto label_11eb18;
    }
    ctx->pc = 0x11EB10u;
    {
        const bool branch_taken_0x11eb10 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11EB14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB10u;
        // 0x11eb14: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb10) {
            ctx->pc = 0x11ED38u;
            goto label_11ed38;
        }
    }
    ctx->pc = 0x11EB18u;
label_11eb18:
    // 0x11eb18: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11eb18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11eb1c:
    // 0x11eb1c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x11eb1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11eb20:
    // 0x11eb20: 0x8c439158  lw          $v1, -0x6EA8($v0)
    ctx->pc = 0x11eb20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938968)));
label_11eb24:
    // 0x11eb24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x11eb24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eb28:
    // 0x11eb28: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_11eb2c:
    if (ctx->pc == 0x11EB2Cu) {
        ctx->pc = 0x11EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB28u;
        // 0x11eb2c: 0x24529158  addiu       $s2, $v0, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB30u;
        goto label_11eb30;
    }
    ctx->pc = 0x11EB28u;
    {
        const bool branch_taken_0x11eb28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB28u;
        // 0x11eb2c: 0x24529158  addiu       $s2, $v0, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb28) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11EB30u;
label_11eb30:
    // 0x11eb30: 0xc047e78  jal         func_11F9E0
label_11eb34:
    if (ctx->pc == 0x11EB34u) {
        ctx->pc = 0x11EB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB30u;
        // 0x11eb34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB38u;
        goto label_11eb38;
    }
    ctx->pc = 0x11EB30u;
    SET_GPR_U32(ctx, 31, 0x11EB38u);
    ctx->pc = 0x11EB34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB30u;
    // 0x11eb34: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F9E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F9E0u, 0x11EB30u, 0x11EB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB38u;
label_11eb38:
    // 0x11eb38: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11eb38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11eb3c:
    // 0x11eb3c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11eb3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eb40:
    // 0x11eb40: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11eb40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11eb44:
    // 0x11eb44: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11eb44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_11eb48:
    // 0x11eb48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_11eb4c:
    if (ctx->pc == 0x11EB4Cu) {
        ctx->pc = 0x11EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB48u;
        // 0x11eb4c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB50u;
        goto label_11eb50;
    }
    ctx->pc = 0x11EB48u;
    {
        const bool branch_taken_0x11eb48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB48u;
        // 0x11eb4c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb48) {
            ctx->pc = 0x11EB58u;
            goto label_11eb58;
        }
    }
    ctx->pc = 0x11EB50u;
label_11eb50:
    // 0x11eb50: 0xc04930a  jal         func_124C28
label_11eb54:
    if (ctx->pc == 0x11EB54u) {
        ctx->pc = 0x11EB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB50u;
        // 0x11eb54: 0x8e859158  lw          $a1, -0x6EA8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938968)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB58u;
        goto label_11eb58;
    }
    ctx->pc = 0x11EB50u;
    SET_GPR_U32(ctx, 31, 0x11EB58u);
    ctx->pc = 0x11EB54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB50u;
    // 0x11eb54: 0x8e859158  lw          $a1, -0x6EA8($s4) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938968)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x124C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x124C28u, 0x11EB50u, 0x11EB58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB58u;
label_11eb58:
    // 0x11eb58: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11eb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11eb5c:
    // 0x11eb5c: 0x8c439160  lw          $v1, -0x6EA0($v0)
    ctx->pc = 0x11eb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938976)));
label_11eb60:
    // 0x11eb60: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x11eb60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eb64:
    // 0x11eb64: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_11eb68:
    if (ctx->pc == 0x11EB68u) {
        ctx->pc = 0x11EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB64u;
        // 0x11eb68: 0x24529160  addiu       $s2, $v0, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB6Cu;
        goto label_11eb6c;
    }
    ctx->pc = 0x11EB64u;
    {
        const bool branch_taken_0x11eb64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB64u;
        // 0x11eb68: 0x24529160  addiu       $s2, $v0, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb64) {
            ctx->pc = 0x11EB98u;
            goto label_11eb98;
        }
    }
    ctx->pc = 0x11EB6Cu;
label_11eb6c:
    // 0x11eb6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11eb6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11eb70:
    // 0x11eb70: 0xc047eec  jal         func_11FBB0
label_11eb74:
    if (ctx->pc == 0x11EB74u) {
        ctx->pc = 0x11EB74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB70u;
        // 0x11eb74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB78u;
        goto label_11eb78;
    }
    ctx->pc = 0x11EB70u;
    SET_GPR_U32(ctx, 31, 0x11EB78u);
    ctx->pc = 0x11EB74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB70u;
    // 0x11eb74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FBB0u, 0x11EB70u, 0x11EB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB78u;
label_11eb78:
    // 0x11eb78: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11eb78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11eb7c:
    // 0x11eb7c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11eb7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eb80:
    // 0x11eb80: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11eb80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11eb84:
    // 0x11eb84: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11eb84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_11eb88:
    // 0x11eb88: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_11eb8c:
    if (ctx->pc == 0x11EB8Cu) {
        ctx->pc = 0x11EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB88u;
        // 0x11eb8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB90u;
        goto label_11eb90;
    }
    ctx->pc = 0x11EB88u;
    {
        const bool branch_taken_0x11eb88 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB88u;
        // 0x11eb8c: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eb88) {
            ctx->pc = 0x11EB98u;
            goto label_11eb98;
        }
    }
    ctx->pc = 0x11EB90u;
label_11eb90:
    // 0x11eb90: 0xc04ecd6  jal         func_13B358
label_11eb94:
    if (ctx->pc == 0x11EB94u) {
        ctx->pc = 0x11EB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EB90u;
        // 0x11eb94: 0x8ea59160  lw          $a1, -0x6EA0($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EB98u;
        goto label_11eb98;
    }
    ctx->pc = 0x11EB90u;
    SET_GPR_U32(ctx, 31, 0x11EB98u);
    ctx->pc = 0x11EB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EB90u;
    // 0x11eb94: 0x8ea59160  lw          $a1, -0x6EA0($s5) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294938976)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13B358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B358u, 0x11EB90u, 0x11EB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EB98u;
label_11eb98:
    // 0x11eb98: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x11eb98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
label_11eb9c:
    // 0x11eb9c: 0x8c439168  lw          $v1, -0x6E98($v0)
    ctx->pc = 0x11eb9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938984)));
label_11eba0:
    // 0x11eba0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11eba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11eba4:
    // 0x11eba4: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_11eba8:
    if (ctx->pc == 0x11EBA8u) {
        ctx->pc = 0x11EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBA4u;
        // 0x11eba8: 0x24529168  addiu       $s2, $v0, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EBACu;
        goto label_11ebac;
    }
    ctx->pc = 0x11EBA4u;
    {
        const bool branch_taken_0x11eba4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBA4u;
        // 0x11eba8: 0x24529168  addiu       $s2, $v0, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eba4) {
            ctx->pc = 0x11EBD8u;
            goto label_11ebd8;
        }
    }
    ctx->pc = 0x11EBACu;
label_11ebac:
    // 0x11ebac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11ebacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11ebb0:
    // 0x11ebb0: 0xc047fd4  jal         func_11FF50
label_11ebb4:
    if (ctx->pc == 0x11EBB4u) {
        ctx->pc = 0x11EBB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBB0u;
        // 0x11ebb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EBB8u;
        goto label_11ebb8;
    }
    ctx->pc = 0x11EBB0u;
    SET_GPR_U32(ctx, 31, 0x11EBB8u);
    ctx->pc = 0x11EBB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBB0u;
    // 0x11ebb4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FF50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF50u, 0x11EBB0u, 0x11EBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBB8u;
label_11ebb8:
    // 0x11ebb8: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x11ebb8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11ebbc:
    // 0x11ebbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11ebbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ebc0:
    // 0x11ebc0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x11ebc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11ebc4:
    // 0x11ebc4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x11ebc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_11ebc8:
    // 0x11ebc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_11ebcc:
    if (ctx->pc == 0x11EBCCu) {
        ctx->pc = 0x11EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBC8u;
        // 0x11ebcc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EBD0u;
        goto label_11ebd0;
    }
    ctx->pc = 0x11EBC8u;
    {
        const bool branch_taken_0x11ebc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBC8u;
        // 0x11ebcc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebc8) {
            ctx->pc = 0x11EBD8u;
            goto label_11ebd8;
        }
    }
    ctx->pc = 0x11EBD0u;
label_11ebd0:
    // 0x11ebd0: 0xc04d32a  jal         func_134CA8
label_11ebd4:
    if (ctx->pc == 0x11EBD4u) {
        ctx->pc = 0x11EBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBD0u;
        // 0x11ebd4: 0x8e659168  lw          $a1, -0x6E98($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938984)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EBD8u;
        goto label_11ebd8;
    }
    ctx->pc = 0x11EBD0u;
    SET_GPR_U32(ctx, 31, 0x11EBD8u);
    ctx->pc = 0x11EBD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EBD0u;
    // 0x11ebd4: 0x8e659168  lw          $a1, -0x6E98($s3) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294938984)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x134CA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134CA8u, 0x11EBD0u, 0x11EBD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EBD8u;
label_11ebd8:
    // 0x11ebd8: 0x12200057  beqz        $s1, . + 4 + (0x57 << 2)
label_11ebdc:
    if (ctx->pc == 0x11EBDCu) {
        ctx->pc = 0x11EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBD8u;
        // 0x11ebdc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EBE0u;
        goto label_11ebe0;
    }
    ctx->pc = 0x11EBD8u;
    {
        const bool branch_taken_0x11ebd8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBD8u;
        // 0x11ebdc: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ebd8) {
            ctx->pc = 0x11ED38u;
            goto label_11ed38;
        }
    }
    ctx->pc = 0x11EBE0u;
label_11ebe0:
    // 0x11ebe0: 0x108880  sll         $s1, $s0, 2
    ctx->pc = 0x11ebe0u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11ebe4:
    // 0x11ebe4: 0x8c459148  lw          $a1, -0x6EB8($v0)
    ctx->pc = 0x11ebe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294938952)));
label_11ebe8:
    // 0x11ebe8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x11ebe8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ebec:
    // 0x11ebec: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11ebecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11ebf0:
    // 0x11ebf0: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11ebf0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11ebf4:
    // 0x11ebf4: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11ebf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11ebf8:
    // 0x11ebf8: 0x40f809  jalr        $v0
label_11ebfc:
    if (ctx->pc == 0x11EBFCu) {
        ctx->pc = 0x11EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBF8u;
        // 0x11ebfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC00u;
        goto label_11ec00;
    }
    ctx->pc = 0x11EBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EC00u);
        ctx->pc = 0x11EBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EBF8u;
        // 0x11ebfc: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EBF8u, 0x11EC00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EC00u;
label_11ec00:
    // 0x11ec00: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ec00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ec04:
    // 0x11ec04: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x11ec04u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_11ec08:
    // 0x11ec08: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_11ec0c:
    if (ctx->pc == 0x11EC0Cu) {
        ctx->pc = 0x11EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC08u;
        // 0x11ec0c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC10u;
        goto label_11ec10;
    }
    ctx->pc = 0x11EC08u;
    {
        const bool branch_taken_0x11ec08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC08u;
        // 0x11ec0c: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec08) {
            ctx->pc = 0x11ECCCu;
            goto label_11eccc;
        }
    }
    ctx->pc = 0x11EC10u;
label_11ec10:
    // 0x11ec10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ec10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11ec14:
    // 0x11ec14: 0x24428640  addiu       $v0, $v0, -0x79C0
    ctx->pc = 0x11ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936128));
label_11ec18:
    // 0x11ec18: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ec18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11ec1c:
    // 0x11ec1c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ec1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11ec20:
    // 0x11ec20: 0x800008  jr          $a0
label_11ec24:
    if (ctx->pc == 0x11EC24u) {
        ctx->pc = 0x11EC28u;
        goto label_11ec28;
    }
    ctx->pc = 0x11EC20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EC28u: goto label_11ec28;
            case 0x11EC34u: goto label_11ec34;
            case 0x11EC40u: goto label_11ec40;
            case 0x11ECACu: goto label_11ecac;
            case 0x11ECCCu: goto label_11eccc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC20u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11EC28u;
label_11ec28:
    // 0x11ec28: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11ec28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11ec2c:
    // 0x11ec2c: 0x10000021  b           . + 4 + (0x21 << 2)
label_11ec30:
    if (ctx->pc == 0x11EC30u) {
        ctx->pc = 0x11EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC2Cu;
        // 0x11ec30: 0x26829158  addiu       $v0, $s4, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC34u;
        goto label_11ec34;
    }
    ctx->pc = 0x11EC2Cu;
    {
        const bool branch_taken_0x11ec2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC2Cu;
        // 0x11ec30: 0x26829158  addiu       $v0, $s4, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec2c) {
            ctx->pc = 0x11ECB4u;
            goto label_11ecb4;
        }
    }
    ctx->pc = 0x11EC34u;
label_11ec34:
    // 0x11ec34: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11ec34u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11ec38:
    // 0x11ec38: 0x1000001e  b           . + 4 + (0x1E << 2)
label_11ec3c:
    if (ctx->pc == 0x11EC3Cu) {
        ctx->pc = 0x11EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC38u;
        // 0x11ec3c: 0x26a29160  addiu       $v0, $s5, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC40u;
        goto label_11ec40;
    }
    ctx->pc = 0x11EC38u;
    {
        const bool branch_taken_0x11ec38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC38u;
        // 0x11ec3c: 0x26a29160  addiu       $v0, $s5, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec38) {
            ctx->pc = 0x11ECB4u;
            goto label_11ecb4;
        }
    }
    ctx->pc = 0x11EC40u;
label_11ec40:
    // 0x11ec40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11ec40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11ec44:
    // 0x11ec44: 0xc047eb2  jal         func_11FAC8
label_11ec48:
    if (ctx->pc == 0x11EC48u) {
        ctx->pc = 0x11EC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC44u;
        // 0x11ec48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC4Cu;
        goto label_11ec4c;
    }
    ctx->pc = 0x11EC44u;
    SET_GPR_U32(ctx, 31, 0x11EC4Cu);
    ctx->pc = 0x11EC48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EC44u;
    // 0x11ec48: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11FAC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC8u, 0x11EC44u, 0x11EC4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EC4Cu;
label_11ec4c:
    // 0x11ec4c: 0x8c450214  lw          $a1, 0x214($v0)
    ctx->pc = 0x11ec4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 532)));
label_11ec50:
    // 0x11ec50: 0x10a0001e  beqz        $a1, . + 4 + (0x1E << 2)
label_11ec54:
    if (ctx->pc == 0x11EC54u) {
        ctx->pc = 0x11EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC50u;
        // 0x11ec54: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC58u;
        goto label_11ec58;
    }
    ctx->pc = 0x11EC50u;
    {
        const bool branch_taken_0x11ec50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC50u;
        // 0x11ec54: 0x108880  sll         $s1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec50) {
            ctx->pc = 0x11ECCCu;
            goto label_11eccc;
        }
    }
    ctx->pc = 0x11EC58u;
label_11ec58:
    // 0x11ec58: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11ec5c:
    // 0x11ec5c: 0x846401e8  lh          $a0, 0x1E8($v1)
    ctx->pc = 0x11ec5cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 488)));
label_11ec60:
    // 0x11ec60: 0x8c6201ec  lw          $v0, 0x1EC($v1)
    ctx->pc = 0x11ec60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 492)));
label_11ec64:
    // 0x11ec64: 0x40f809  jalr        $v0
label_11ec68:
    if (ctx->pc == 0x11EC68u) {
        ctx->pc = 0x11EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC64u;
        // 0x11ec68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC6Cu;
        goto label_11ec6c;
    }
    ctx->pc = 0x11EC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11EC6Cu);
        ctx->pc = 0x11EC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC64u;
        // 0x11ec68: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC64u, 0x11EC6Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11EC6Cu;
label_11ec6c:
    // 0x11ec6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11ec6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_11ec70:
    // 0x11ec70: 0x2c62000c  sltiu       $v0, $v1, 0xC
    ctx->pc = 0x11ec70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_11ec74:
    // 0x11ec74: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_11ec78:
    if (ctx->pc == 0x11EC78u) {
        ctx->pc = 0x11EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC74u;
        // 0x11ec78: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11EC7Cu;
        goto label_11ec7c;
    }
    ctx->pc = 0x11EC74u;
    {
        const bool branch_taken_0x11ec74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC74u;
        // 0x11ec78: 0x3c020055  lui         $v0, 0x55 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)85 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec74) {
            ctx->pc = 0x11ECCCu;
            goto label_11eccc;
        }
    }
    ctx->pc = 0x11EC7Cu;
label_11ec7c:
    // 0x11ec7c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x11ec7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_11ec80:
    // 0x11ec80: 0x24428670  addiu       $v0, $v0, -0x7990
    ctx->pc = 0x11ec80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936176));
label_11ec84:
    // 0x11ec84: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x11ec84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_11ec88:
    // 0x11ec88: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x11ec88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_11ec8c:
    // 0x11ec8c: 0x800008  jr          $a0
label_11ec90:
    if (ctx->pc == 0x11EC90u) {
        ctx->pc = 0x11EC94u;
        goto label_11ec94;
    }
    ctx->pc = 0x11EC8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x11EC94u: goto label_11ec94;
            case 0x11ECA0u: goto label_11eca0;
            case 0x11ECACu: goto label_11ecac;
            case 0x11ECCCu: goto label_11eccc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EC8Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x11EC94u;
label_11ec94:
    // 0x11ec94: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11ec94u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11ec98:
    // 0x11ec98: 0x10000006  b           . + 4 + (0x6 << 2)
label_11ec9c:
    if (ctx->pc == 0x11EC9Cu) {
        ctx->pc = 0x11EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC98u;
        // 0x11ec9c: 0x26829158  addiu       $v0, $s4, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ECA0u;
        goto label_11eca0;
    }
    ctx->pc = 0x11EC98u;
    {
        const bool branch_taken_0x11ec98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EC9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EC98u;
        // 0x11ec9c: 0x26829158  addiu       $v0, $s4, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ec98) {
            ctx->pc = 0x11ECB4u;
            goto label_11ecb4;
        }
    }
    ctx->pc = 0x11ECA0u;
label_11eca0:
    // 0x11eca0: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11eca0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11eca4:
    // 0x11eca4: 0x10000003  b           . + 4 + (0x3 << 2)
label_11eca8:
    if (ctx->pc == 0x11ECA8u) {
        ctx->pc = 0x11ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECA4u;
        // 0x11eca8: 0x26a29160  addiu       $v0, $s5, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938976));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ECACu;
        goto label_11ecac;
    }
    ctx->pc = 0x11ECA4u;
    {
        const bool branch_taken_0x11eca4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECA4u;
        // 0x11eca8: 0x26a29160  addiu       $v0, $s5, -0x6EA0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938976));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eca4) {
            ctx->pc = 0x11ECB4u;
            goto label_11ecb4;
        }
    }
    ctx->pc = 0x11ECACu;
label_11ecac:
    // 0x11ecac: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x11ecacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_11ecb0:
    // 0x11ecb0: 0x26629168  addiu       $v0, $s3, -0x6E98
    ctx->pc = 0x11ecb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294938984));
label_11ecb4:
    // 0x11ecb4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x11ecb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_11ecb8:
    // 0x11ecb8: 0x26439148  addiu       $v1, $s2, -0x6EB8
    ctx->pc = 0x11ecb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938952));
label_11ecbc:
    // 0x11ecbc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11ecbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11ecc0:
    // 0x11ecc0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x11ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_11ecc4:
    // 0x11ecc4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11ecc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_11ecc8:
    // 0x11ecc8: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x11ecc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_11eccc:
    // 0x11eccc: 0x8e829158  lw          $v0, -0x6EA8($s4)
    ctx->pc = 0x11ecccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294938968)));
label_11ecd0:
    // 0x11ecd0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_11ecd4:
    if (ctx->pc == 0x11ECD4u) {
        ctx->pc = 0x11ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECD0u;
        // 0x11ecd4: 0x26839158  addiu       $v1, $s4, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938968));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ECD8u;
        goto label_11ecd8;
    }
    ctx->pc = 0x11ECD0u;
    {
        const bool branch_taken_0x11ecd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECD0u;
        // 0x11ecd4: 0x26839158  addiu       $v1, $s4, -0x6EA8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 4294938968));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ecd0) {
            ctx->pc = 0x11ECECu;
            goto label_11ecec;
        }
    }
    ctx->pc = 0x11ECD8u;
label_11ecd8:
    // 0x11ecd8: 0x2231021  addu        $v0, $s1, $v1
    ctx->pc = 0x11ecd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_11ecdc:
    // 0x11ecdc: 0x26439148  addiu       $v1, $s2, -0x6EB8
    ctx->pc = 0x11ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938952));
label_11ece0:
    // 0x11ece0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11ece0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11ece4:
    // 0x11ece4: 0x10000006  b           . + 4 + (0x6 << 2)
label_11ece8:
    if (ctx->pc == 0x11ECE8u) {
        ctx->pc = 0x11ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECE4u;
        // 0x11ece8: 0x2231821  addu        $v1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ECECu;
        goto label_11ecec;
    }
    ctx->pc = 0x11ECE4u;
    {
        const bool branch_taken_0x11ece4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ECE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ECE4u;
        // 0x11ece8: 0x2231821  addu        $v1, $s1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ece4) {
            ctx->pc = 0x11ED00u;
            goto label_11ed00;
        }
    }
    ctx->pc = 0x11ECECu;
label_11ecec:
    // 0x11ecec: 0x26a29160  addiu       $v0, $s5, -0x6EA0
    ctx->pc = 0x11ececu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294938976));
label_11ecf0:
    // 0x11ecf0: 0x26439148  addiu       $v1, $s2, -0x6EB8
    ctx->pc = 0x11ecf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938952));
label_11ecf4:
    // 0x11ecf4: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11ecf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11ecf8:
    // 0x11ecf8: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x11ecf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_11ecfc:
    // 0x11ecfc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x11ecfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11ed00:
    // 0x11ed00: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x11ed00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_11ed04:
    // 0x11ed04: 0x26429148  addiu       $v0, $s2, -0x6EB8
    ctx->pc = 0x11ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938952));
label_11ed08:
    // 0x11ed08: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11ed08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11ed0c:
    // 0x11ed0c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x11ed0cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_11ed10:
    // 0x11ed10: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_11ed14:
    if (ctx->pc == 0x11ED14u) {
        ctx->pc = 0x11ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED10u;
        // 0x11ed14: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ED18u;
        goto label_11ed18;
    }
    ctx->pc = 0x11ED10u;
    {
        const bool branch_taken_0x11ed10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11ED14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED10u;
        // 0x11ed14: 0x3c02005e  lui         $v0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ed10) {
            ctx->pc = 0x11ED38u;
            goto label_11ed38;
        }
    }
    ctx->pc = 0x11ED18u;
label_11ed18:
    // 0x11ed18: 0x24429150  addiu       $v0, $v0, -0x6EB0
    ctx->pc = 0x11ed18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938960));
label_11ed1c:
    // 0x11ed1c: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x11ed1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_11ed20:
    // 0x11ed20: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x11ed20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_11ed24:
    // 0x11ed24: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11ed24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_11ed28:
    // 0x11ed28: 0x84640140  lh          $a0, 0x140($v1)
    ctx->pc = 0x11ed28u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
label_11ed2c:
    // 0x11ed2c: 0x8c620144  lw          $v0, 0x144($v1)
    ctx->pc = 0x11ed2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 324)));
label_11ed30:
    // 0x11ed30: 0x40f809  jalr        $v0
label_11ed34:
    if (ctx->pc == 0x11ED34u) {
        ctx->pc = 0x11ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED30u;
        // 0x11ed34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ED38u;
        goto label_11ed38;
    }
    ctx->pc = 0x11ED30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x11ED38u);
        ctx->pc = 0x11ED34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED30u;
        // 0x11ed34: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ED30u, 0x11ED38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x11ED38u;
label_11ed38:
    // 0x11ed38: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x11ed38u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_11ed3c:
    // 0x11ed3c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x11ed3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_11ed40:
    // 0x11ed40: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x11ed40u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_11ed44:
    // 0x11ed44: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x11ed44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_11ed48:
    // 0x11ed48: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x11ed48u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11ed4c:
    // 0x11ed4c: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x11ed4cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_11ed50:
    // 0x11ed50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11ed50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_11ed54:
    // 0x11ed54: 0x3e00008  jr          $ra
label_11ed58:
    if (ctx->pc == 0x11ED58u) {
        ctx->pc = 0x11ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED54u;
        // 0x11ed58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x11ED5Cu;
        goto label_11ed5c;
    }
    ctx->pc = 0x11ED54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11ED58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11ED54u;
        // 0x11ed58: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11ED54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11ED5Cu;
label_11ed5c:
    // 0x11ed5c: 0x0  nop
    ctx->pc = 0x11ed5cu;
    // NOP
    ctx->pc = 0x11ed60u;
}
