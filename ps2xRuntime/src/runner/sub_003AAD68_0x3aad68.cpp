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

// Function: sub_003AAD68
// Address: 0x3aad68 - 0x3aaf20
void sub_003AAD68_0x3aad68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003AAD68_0x3aad68");
#endif

    switch (ctx->pc) {
        case 0x3aad68u: goto label_3aad68;
        case 0x3aad6cu: goto label_3aad6c;
        case 0x3aad70u: goto label_3aad70;
        case 0x3aad74u: goto label_3aad74;
        case 0x3aad78u: goto label_3aad78;
        case 0x3aad7cu: goto label_3aad7c;
        case 0x3aad80u: goto label_3aad80;
        case 0x3aad84u: goto label_3aad84;
        case 0x3aad88u: goto label_3aad88;
        case 0x3aad8cu: goto label_3aad8c;
        case 0x3aad90u: goto label_3aad90;
        case 0x3aad94u: goto label_3aad94;
        case 0x3aad98u: goto label_3aad98;
        case 0x3aad9cu: goto label_3aad9c;
        case 0x3aada0u: goto label_3aada0;
        case 0x3aada4u: goto label_3aada4;
        case 0x3aada8u: goto label_3aada8;
        case 0x3aadacu: goto label_3aadac;
        case 0x3aadb0u: goto label_3aadb0;
        case 0x3aadb4u: goto label_3aadb4;
        case 0x3aadb8u: goto label_3aadb8;
        case 0x3aadbcu: goto label_3aadbc;
        case 0x3aadc0u: goto label_3aadc0;
        case 0x3aadc4u: goto label_3aadc4;
        case 0x3aadc8u: goto label_3aadc8;
        case 0x3aadccu: goto label_3aadcc;
        case 0x3aadd0u: goto label_3aadd0;
        case 0x3aadd4u: goto label_3aadd4;
        case 0x3aadd8u: goto label_3aadd8;
        case 0x3aaddcu: goto label_3aaddc;
        case 0x3aade0u: goto label_3aade0;
        case 0x3aade4u: goto label_3aade4;
        case 0x3aade8u: goto label_3aade8;
        case 0x3aadecu: goto label_3aadec;
        case 0x3aadf0u: goto label_3aadf0;
        case 0x3aadf4u: goto label_3aadf4;
        case 0x3aadf8u: goto label_3aadf8;
        case 0x3aadfcu: goto label_3aadfc;
        case 0x3aae00u: goto label_3aae00;
        case 0x3aae04u: goto label_3aae04;
        case 0x3aae08u: goto label_3aae08;
        case 0x3aae0cu: goto label_3aae0c;
        case 0x3aae10u: goto label_3aae10;
        case 0x3aae14u: goto label_3aae14;
        case 0x3aae18u: goto label_3aae18;
        case 0x3aae1cu: goto label_3aae1c;
        case 0x3aae20u: goto label_3aae20;
        case 0x3aae24u: goto label_3aae24;
        case 0x3aae28u: goto label_3aae28;
        case 0x3aae2cu: goto label_3aae2c;
        case 0x3aae30u: goto label_3aae30;
        case 0x3aae34u: goto label_3aae34;
        case 0x3aae38u: goto label_3aae38;
        case 0x3aae3cu: goto label_3aae3c;
        case 0x3aae40u: goto label_3aae40;
        case 0x3aae44u: goto label_3aae44;
        case 0x3aae48u: goto label_3aae48;
        case 0x3aae4cu: goto label_3aae4c;
        case 0x3aae50u: goto label_3aae50;
        case 0x3aae54u: goto label_3aae54;
        case 0x3aae58u: goto label_3aae58;
        case 0x3aae5cu: goto label_3aae5c;
        case 0x3aae60u: goto label_3aae60;
        case 0x3aae64u: goto label_3aae64;
        case 0x3aae68u: goto label_3aae68;
        case 0x3aae6cu: goto label_3aae6c;
        case 0x3aae70u: goto label_3aae70;
        case 0x3aae74u: goto label_3aae74;
        case 0x3aae78u: goto label_3aae78;
        case 0x3aae7cu: goto label_3aae7c;
        case 0x3aae80u: goto label_3aae80;
        case 0x3aae84u: goto label_3aae84;
        case 0x3aae88u: goto label_3aae88;
        case 0x3aae8cu: goto label_3aae8c;
        case 0x3aae90u: goto label_3aae90;
        case 0x3aae94u: goto label_3aae94;
        case 0x3aae98u: goto label_3aae98;
        case 0x3aae9cu: goto label_3aae9c;
        case 0x3aaea0u: goto label_3aaea0;
        case 0x3aaea4u: goto label_3aaea4;
        case 0x3aaea8u: goto label_3aaea8;
        case 0x3aaeacu: goto label_3aaeac;
        case 0x3aaeb0u: goto label_3aaeb0;
        case 0x3aaeb4u: goto label_3aaeb4;
        case 0x3aaeb8u: goto label_3aaeb8;
        case 0x3aaebcu: goto label_3aaebc;
        case 0x3aaec0u: goto label_3aaec0;
        case 0x3aaec4u: goto label_3aaec4;
        case 0x3aaec8u: goto label_3aaec8;
        case 0x3aaeccu: goto label_3aaecc;
        case 0x3aaed0u: goto label_3aaed0;
        case 0x3aaed4u: goto label_3aaed4;
        case 0x3aaed8u: goto label_3aaed8;
        case 0x3aaedcu: goto label_3aaedc;
        case 0x3aaee0u: goto label_3aaee0;
        case 0x3aaee4u: goto label_3aaee4;
        case 0x3aaee8u: goto label_3aaee8;
        case 0x3aaeecu: goto label_3aaeec;
        case 0x3aaef0u: goto label_3aaef0;
        case 0x3aaef4u: goto label_3aaef4;
        case 0x3aaef8u: goto label_3aaef8;
        case 0x3aaefcu: goto label_3aaefc;
        case 0x3aaf00u: goto label_3aaf00;
        case 0x3aaf04u: goto label_3aaf04;
        case 0x3aaf08u: goto label_3aaf08;
        case 0x3aaf0cu: goto label_3aaf0c;
        case 0x3aaf10u: goto label_3aaf10;
        case 0x3aaf14u: goto label_3aaf14;
        case 0x3aaf18u: goto label_3aaf18;
        case 0x3aaf1cu: goto label_3aaf1c;
        default: break;
    }

    ctx->pc = 0x3aad68u;

label_3aad68:
    // 0x3aad68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3aad68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3aad6c:
    // 0x3aad6c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3aad6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3aad70:
    // 0x3aad70: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3aad70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3aad74:
    // 0x3aad74: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3aad74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3aad78:
    // 0x3aad78: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3aad78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3aad7c:
    // 0x3aad7c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3aad7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3aad80:
    // 0x3aad80: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3aad80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3aad84:
    // 0x3aad84: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3aad84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3aad88:
    // 0x3aad88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3aad88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3aad8c:
    // 0x3aad8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3aad8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3aad90:
    // 0x3aad90: 0x8e830000  lw          $v1, 0x0($s4)
    ctx->pc = 0x3aad90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3aad94:
    // 0x3aad94: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3aad94u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3aad98:
    // 0x3aad98: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3aad98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3aad9c:
    // 0x3aad9c: 0x40f809  jalr        $v0
label_3aada0:
    if (ctx->pc == 0x3AADA0u) {
        ctx->pc = 0x3AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD9Cu;
        // 0x3aada0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADA4u;
        goto label_3aada4;
    }
    ctx->pc = 0x3AAD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3AADA4u);
        ctx->pc = 0x3AADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAD9Cu;
        // 0x3aada0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAD9Cu, 0x3AADA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AADA4u;
label_3aada4:
    // 0x3aada4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x3aada4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aada8:
    // 0x3aada8: 0xc0ea146  jal         func_3A8518
label_3aadac:
    if (ctx->pc == 0x3AADACu) {
        ctx->pc = 0x3AADACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADA8u;
        // 0x3aadac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADB0u;
        goto label_3aadb0;
    }
    ctx->pc = 0x3AADA8u;
    SET_GPR_U32(ctx, 31, 0x3AADB0u);
    ctx->pc = 0x3AADACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADA8u;
    // 0x3aadac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AADA8u, 0x3AADB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADB0u;
label_3aadb0:
    // 0x3aadb0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3aadb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aadb4:
    // 0x3aadb4: 0xc0ea146  jal         func_3A8518
label_3aadb8:
    if (ctx->pc == 0x3AADB8u) {
        ctx->pc = 0x3AADB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADB4u;
        // 0x3aadb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADBCu;
        goto label_3aadbc;
    }
    ctx->pc = 0x3AADB4u;
    SET_GPR_U32(ctx, 31, 0x3AADBCu);
    ctx->pc = 0x3AADB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADB4u;
    // 0x3aadb8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8518u, 0x3AADB4u, 0x3AADBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADBCu;
label_3aadbc:
    // 0x3aadbc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aadbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aadc0:
    // 0x3aadc0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x3aadc0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3aadc4:
    // 0x3aadc4: 0xc0ea12a  jal         func_3A84A8
label_3aadc8:
    if (ctx->pc == 0x3AADC8u) {
        ctx->pc = 0x3AADC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADC4u;
        // 0x3aadc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADCCu;
        goto label_3aadcc;
    }
    ctx->pc = 0x3AADC4u;
    SET_GPR_U32(ctx, 31, 0x3AADCCu);
    ctx->pc = 0x3AADC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADC4u;
    // 0x3aadc8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AADC4u, 0x3AADCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADCCu;
label_3aadcc:
    // 0x3aadcc: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aadccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aadd0:
    // 0x3aadd0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3aadd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aadd4:
    // 0x3aadd4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3aadd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3aadd8:
    // 0x3aadd8: 0xc0ea12a  jal         func_3A84A8
label_3aaddc:
    if (ctx->pc == 0x3AADDCu) {
        ctx->pc = 0x3AADDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADD8u;
        // 0x3aaddc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AADE0u;
        goto label_3aade0;
    }
    ctx->pc = 0x3AADD8u;
    SET_GPR_U32(ctx, 31, 0x3AADE0u);
    ctx->pc = 0x3AADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADD8u;
    // 0x3aaddc: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3AADD8u, 0x3AADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AADE0u;
label_3aade0:
    // 0x3aade0: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3aade0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3aade4:
    // 0x3aade4: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x3aade4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_3aade8:
    // 0x3aade8: 0x2652b8b8  addiu       $s2, $s2, -0x4748
    ctx->pc = 0x3aade8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294949048));
label_3aadec:
    // 0x3aadec: 0x11882b  sltu        $s1, $zero, $s1
    ctx->pc = 0x3aadecu;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_3aadf0:
    // 0x3aadf0: 0x7fa20000  sq          $v0, 0x0($sp)
    ctx->pc = 0x3aadf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
label_3aadf4:
    // 0x3aadf4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aadf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aadf8:
    // 0x3aadf8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aadf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aadfc:
    // 0x3aadfc: 0xc0cd4ee  jal         func_3353B8
label_3aae00:
    if (ctx->pc == 0x3AAE00u) {
        ctx->pc = 0x3AAE00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AADFCu;
        // 0x3aae00: 0xaeb10008  sw          $s1, 0x8($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE04u;
        goto label_3aae04;
    }
    ctx->pc = 0x3AADFCu;
    SET_GPR_U32(ctx, 31, 0x3AAE04u);
    ctx->pc = 0x3AAE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AADFCu;
    // 0x3aae00: 0xaeb10008  sw          $s1, 0x8($s5) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 17));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3353B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3353B8u, 0x3AADFCu, 0x3AAE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE04u;
label_3aae04:
    // 0x3aae04: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x3aae04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_3aae08:
    // 0x3aae08: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3aae08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3aae0c:
    // 0x3aae0c: 0x3463002a  ori         $v1, $v1, 0x2A
    ctx->pc = 0x3aae0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)42);
label_3aae10:
    // 0x3aae10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x3aae10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3aae14:
    // 0x3aae14: 0xc0e858c  jal         func_3A1630
label_3aae18:
    if (ctx->pc == 0x3AAE18u) {
        ctx->pc = 0x3AAE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE14u;
        // 0x3aae18: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE1Cu;
        goto label_3aae1c;
    }
    ctx->pc = 0x3AAE14u;
    SET_GPR_U32(ctx, 31, 0x3AAE1Cu);
    ctx->pc = 0x3AAE18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE14u;
    // 0x3aae18: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3AAE14u, 0x3AAE1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE1Cu;
label_3aae1c:
    // 0x3aae1c: 0x7ba40000  lq          $a0, 0x0($sp)
    ctx->pc = 0x3aae1cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3aae20:
    // 0x3aae20: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x3aae20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_3aae24:
    // 0x3aae24: 0x3c013d4c  lui         $at, 0x3D4C
    ctx->pc = 0x3aae24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15692 << 16));
label_3aae28:
    // 0x3aae28: 0x3421cccd  ori         $at, $at, 0xCCCD
    ctx->pc = 0x3aae28u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)52429);
label_3aae2c:
    // 0x3aae2c: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aae2cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aae30:
    // 0x3aae30: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x3aae30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
label_3aae34:
    // 0x3aae34: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x3aae34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_3aae38:
    // 0x3aae38: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x3aae38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_3aae3c:
    // 0x3aae3c: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x3aae3cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_3aae40:
    // 0x3aae40: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3aae40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3aae44:
    // 0x3aae44: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x3aae44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3aae48:
    // 0x3aae48: 0xae830054  sw          $v1, 0x54($s4)
    ctx->pc = 0x3aae48u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 84), GPR_U32(ctx, 3));
label_3aae4c:
    // 0x3aae4c: 0x7e840010  sq          $a0, 0x10($s4)
    ctx->pc = 0x3aae4cu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 16), GPR_VEC(ctx, 4));
label_3aae50:
    // 0x3aae50: 0xae9000c4  sw          $s0, 0xC4($s4)
    ctx->pc = 0x3aae50u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 196), GPR_U32(ctx, 16));
label_3aae54:
    // 0x3aae54: 0xae8000bc  sw          $zero, 0xBC($s4)
    ctx->pc = 0x3aae54u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 188), GPR_U32(ctx, 0));
label_3aae58:
    // 0x3aae58: 0x84440070  lh          $a0, 0x70($v0)
    ctx->pc = 0x3aae58u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 112)));
label_3aae5c:
    // 0x3aae5c: 0x8c430074  lw          $v1, 0x74($v0)
    ctx->pc = 0x3aae5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 116)));
label_3aae60:
    // 0x3aae60: 0x60f809  jalr        $v1
label_3aae64:
    if (ctx->pc == 0x3AAE64u) {
        ctx->pc = 0x3AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE60u;
        // 0x3aae64: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE68u;
        goto label_3aae68;
    }
    ctx->pc = 0x3AAE60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AAE68u);
        ctx->pc = 0x3AAE64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE60u;
        // 0x3aae64: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAE60u, 0x3AAE68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAE68u;
label_3aae68:
    // 0x3aae68: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3aae68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3aae6c:
    // 0x3aae6c: 0x3c01bfc9  lui         $at, 0xBFC9
    ctx->pc = 0x3aae6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49097 << 16));
label_3aae70:
    // 0x3aae70: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3aae70u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3aae74:
    // 0x3aae74: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x3aae74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_3aae78:
    // 0x3aae78: 0x3442ff00  ori         $v0, $v0, 0xFF00
    ctx->pc = 0x3aae78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65280);
label_3aae7c:
    // 0x3aae7c: 0x3c013fc9  lui         $at, 0x3FC9
    ctx->pc = 0x3aae7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16329 << 16));
label_3aae80:
    // 0x3aae80: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x3aae80u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_3aae84:
    // 0x3aae84: 0x44816800  mtc1        $at, $f13
    ctx->pc = 0x3aae84u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_3aae88:
    // 0x3aae88: 0x2621024  and         $v0, $s3, $v0
    ctx->pc = 0x3aae88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) & GPR_U64(ctx, 2));
label_3aae8c:
    // 0x3aae8c: 0xae9300b4  sw          $s3, 0xB4($s4)
    ctx->pc = 0x3aae8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 180), GPR_U32(ctx, 19));
label_3aae90:
    // 0x3aae90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3aae90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3aae94:
    // 0x3aae94: 0xc0cd518  jal         func_335460
label_3aae98:
    if (ctx->pc == 0x3AAE98u) {
        ctx->pc = 0x3AAE98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAE94u;
        // 0x3aae98: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAE9Cu;
        goto label_3aae9c;
    }
    ctx->pc = 0x3AAE94u;
    SET_GPR_U32(ctx, 31, 0x3AAE9Cu);
    ctx->pc = 0x3AAE98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3AAE94u;
    // 0x3aae98: 0xae8200b0  sw          $v0, 0xB0($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 176), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x335460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x335460u, 0x3AAE94u, 0x3AAE9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3AAE9Cu;
label_3aae9c:
    // 0x3aae9c: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x3aae9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_3aaea0:
    // 0x3aaea0: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3aaea0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3aaea4:
    // 0x3aaea4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3aaea4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
label_3aaea8:
    // 0x3aaea8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3aaea8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_3aaeac:
    // 0x3aaeac: 0x84c40078  lh          $a0, 0x78($a2)
    ctx->pc = 0x3aaeacu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 120)));
label_3aaeb0:
    // 0x3aaeb0: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x3aaeb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_3aaeb4:
    // 0x3aaeb4: 0xe7a1003c  swc1        $f1, 0x3C($sp)
    ctx->pc = 0x3aaeb4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
label_3aaeb8:
    // 0x3aaeb8: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3aaeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3aaebc:
    // 0x3aaebc: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3aaebcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3aaec0:
    // 0x3aaec0: 0x7ba20030  lq          $v0, 0x30($sp)
    ctx->pc = 0x3aaec0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3aaec4:
    // 0x3aaec4: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x3aaec4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
label_3aaec8:
    // 0x3aaec8: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x3aaec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
label_3aaecc:
    // 0x3aaecc: 0x60f809  jalr        $v1
label_3aaed0:
    if (ctx->pc == 0x3AAED0u) {
        ctx->pc = 0x3AAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAECCu;
        // 0x3aaed0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAED4u;
        goto label_3aaed4;
    }
    ctx->pc = 0x3AAECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3AAED4u);
        ctx->pc = 0x3AAED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAECCu;
        // 0x3aaed0: 0x2842021  addu        $a0, $s4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAECCu, 0x3AAED4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3AAED4u;
label_3aaed4:
    // 0x3aaed4: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x3aaed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_3aaed8:
    // 0x3aaed8: 0xaeb30004  sw          $s3, 0x4($s5)
    ctx->pc = 0x3aaed8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 19));
label_3aaedc:
    // 0x3aaedc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_3aaee0:
    if (ctx->pc == 0x3AAEE0u) {
        ctx->pc = 0x3AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEDCu;
        // 0x3aaee0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAEE4u;
        goto label_3aaee4;
    }
    ctx->pc = 0x3AAEDCu;
    {
        const bool branch_taken_0x3aaedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3AAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAEDCu;
        // 0x3aaee0: 0xaea00000  sw          $zero, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3aaedc) {
            ctx->pc = 0x3AAEFCu;
            goto label_3aaefc;
        }
    }
    ctx->pc = 0x3AAEE4u;
label_3aaee4:
    // 0x3aaee4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3aaee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3aaee8:
    // 0x3aaee8: 0x3c013ee6  lui         $at, 0x3EE6
    ctx->pc = 0x3aaee8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16102 << 16));
label_3aaeec:
    // 0x3aaeec: 0x34216666  ori         $at, $at, 0x6666
    ctx->pc = 0x3aaeecu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)26214);
label_3aaef0:
    // 0x3aaef0: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3aaef0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_3aaef4:
    // 0x3aaef4: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x3aaef4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
label_3aaef8:
    // 0x3aaef8: 0xe68000c0  swc1        $f0, 0xC0($s4)
    ctx->pc = 0x3aaef8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 192), bits); }
label_3aaefc:
    // 0x3aaefc: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3aaefcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3aaf00:
    // 0x3aaf00: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3aaf00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3aaf04:
    // 0x3aaf04: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3aaf04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3aaf08:
    // 0x3aaf08: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3aaf08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3aaf0c:
    // 0x3aaf0c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3aaf0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3aaf10:
    // 0x3aaf10: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3aaf10u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3aaf14:
    // 0x3aaf14: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3aaf14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3aaf18:
    // 0x3aaf18: 0x3e00008  jr          $ra
label_3aaf1c:
    if (ctx->pc == 0x3AAF1Cu) {
        ctx->pc = 0x3AAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF18u;
        // 0x3aaf1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3AAF20u;
        goto label_fallthrough_0x3aaf18;
    }
    ctx->pc = 0x3AAF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3AAF1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3AAF18u;
        // 0x3aaf1c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3AAF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3aaf18:
    ctx->pc = 0x3AAF20u;
}
