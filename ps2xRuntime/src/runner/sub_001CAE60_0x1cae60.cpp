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

// Function: sub_001CAE60
// Address: 0x1cae60 - 0x1cafa0
void sub_001CAE60_0x1cae60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CAE60_0x1cae60");
#endif

    switch (ctx->pc) {
        case 0x1cae60u: goto label_1cae60;
        case 0x1cae64u: goto label_1cae64;
        case 0x1cae68u: goto label_1cae68;
        case 0x1cae6cu: goto label_1cae6c;
        case 0x1cae70u: goto label_1cae70;
        case 0x1cae74u: goto label_1cae74;
        case 0x1cae78u: goto label_1cae78;
        case 0x1cae7cu: goto label_1cae7c;
        case 0x1cae80u: goto label_1cae80;
        case 0x1cae84u: goto label_1cae84;
        case 0x1cae88u: goto label_1cae88;
        case 0x1cae8cu: goto label_1cae8c;
        case 0x1cae90u: goto label_1cae90;
        case 0x1cae94u: goto label_1cae94;
        case 0x1cae98u: goto label_1cae98;
        case 0x1cae9cu: goto label_1cae9c;
        case 0x1caea0u: goto label_1caea0;
        case 0x1caea4u: goto label_1caea4;
        case 0x1caea8u: goto label_1caea8;
        case 0x1caeacu: goto label_1caeac;
        case 0x1caeb0u: goto label_1caeb0;
        case 0x1caeb4u: goto label_1caeb4;
        case 0x1caeb8u: goto label_1caeb8;
        case 0x1caebcu: goto label_1caebc;
        case 0x1caec0u: goto label_1caec0;
        case 0x1caec4u: goto label_1caec4;
        case 0x1caec8u: goto label_1caec8;
        case 0x1caeccu: goto label_1caecc;
        case 0x1caed0u: goto label_1caed0;
        case 0x1caed4u: goto label_1caed4;
        case 0x1caed8u: goto label_1caed8;
        case 0x1caedcu: goto label_1caedc;
        case 0x1caee0u: goto label_1caee0;
        case 0x1caee4u: goto label_1caee4;
        case 0x1caee8u: goto label_1caee8;
        case 0x1caeecu: goto label_1caeec;
        case 0x1caef0u: goto label_1caef0;
        case 0x1caef4u: goto label_1caef4;
        case 0x1caef8u: goto label_1caef8;
        case 0x1caefcu: goto label_1caefc;
        case 0x1caf00u: goto label_1caf00;
        case 0x1caf04u: goto label_1caf04;
        case 0x1caf08u: goto label_1caf08;
        case 0x1caf0cu: goto label_1caf0c;
        case 0x1caf10u: goto label_1caf10;
        case 0x1caf14u: goto label_1caf14;
        case 0x1caf18u: goto label_1caf18;
        case 0x1caf1cu: goto label_1caf1c;
        case 0x1caf20u: goto label_1caf20;
        case 0x1caf24u: goto label_1caf24;
        case 0x1caf28u: goto label_1caf28;
        case 0x1caf2cu: goto label_1caf2c;
        case 0x1caf30u: goto label_1caf30;
        case 0x1caf34u: goto label_1caf34;
        case 0x1caf38u: goto label_1caf38;
        case 0x1caf3cu: goto label_1caf3c;
        case 0x1caf40u: goto label_1caf40;
        case 0x1caf44u: goto label_1caf44;
        case 0x1caf48u: goto label_1caf48;
        case 0x1caf4cu: goto label_1caf4c;
        case 0x1caf50u: goto label_1caf50;
        case 0x1caf54u: goto label_1caf54;
        case 0x1caf58u: goto label_1caf58;
        case 0x1caf5cu: goto label_1caf5c;
        case 0x1caf60u: goto label_1caf60;
        case 0x1caf64u: goto label_1caf64;
        case 0x1caf68u: goto label_1caf68;
        case 0x1caf6cu: goto label_1caf6c;
        case 0x1caf70u: goto label_1caf70;
        case 0x1caf74u: goto label_1caf74;
        case 0x1caf78u: goto label_1caf78;
        case 0x1caf7cu: goto label_1caf7c;
        case 0x1caf80u: goto label_1caf80;
        case 0x1caf84u: goto label_1caf84;
        case 0x1caf88u: goto label_1caf88;
        case 0x1caf8cu: goto label_1caf8c;
        case 0x1caf90u: goto label_1caf90;
        case 0x1caf94u: goto label_1caf94;
        case 0x1caf98u: goto label_1caf98;
        case 0x1caf9cu: goto label_1caf9c;
        default: break;
    }

    ctx->pc = 0x1cae60u;

label_1cae60:
    // 0x1cae60: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1cae60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1cae64:
    // 0x1cae64: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x1cae64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_1cae68:
    // 0x1cae68: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cae68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cae6c:
    // 0x1cae6c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1cae6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1cae70:
    // 0x1cae70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1cae70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1cae74:
    // 0x1cae74: 0xc10c313  jal         func_430C4C
label_1cae78:
    if (ctx->pc == 0x1CAE78u) {
        ctx->pc = 0x1CAE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE74u;
        // 0x1cae78: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE7Cu;
        goto label_1cae7c;
    }
    ctx->pc = 0x1CAE74u;
    SET_GPR_U32(ctx, 31, 0x1CAE7Cu);
    ctx->pc = 0x1CAE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAE74u;
    // 0x1cae78: 0x26040024  addiu       $a0, $s0, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x1CAE74u, 0x1CAE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAE7Cu;
label_1cae7c:
    // 0x1cae7c: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_1cae80:
    if (ctx->pc == 0x1CAE80u) {
        ctx->pc = 0x1CAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE7Cu;
        // 0x1cae80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE84u;
        goto label_1cae84;
    }
    ctx->pc = 0x1CAE7Cu;
    {
        const bool branch_taken_0x1cae7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAE80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE7Cu;
        // 0x1cae80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cae7c) {
            ctx->pc = 0x1CAF88u;
            goto label_1caf88;
        }
    }
    ctx->pc = 0x1CAE84u;
label_1cae84:
    // 0x1cae84: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x1cae84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cae88:
    // 0x1cae88: 0x5040003f  beql        $v0, $zero, . + 4 + (0x3F << 2)
label_1cae8c:
    if (ctx->pc == 0x1CAE8Cu) {
        ctx->pc = 0x1CAE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAE88u;
        // 0x1cae8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAE90u;
        goto label_1cae90;
    }
    ctx->pc = 0x1CAE88u;
    {
        const bool branch_taken_0x1cae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cae88) {
            ctx->pc = 0x1CAE8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAE88u;
            // 0x1cae8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF88u;
            goto label_1caf88;
        }
    }
    ctx->pc = 0x1CAE90u;
label_1cae90:
    // 0x1cae90: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x1cae90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_1cae94:
    // 0x1cae94: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x1cae94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_1cae98:
    // 0x1cae98: 0xaba30003  swl         $v1, 0x3($sp)
    ctx->pc = 0x1cae98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_1cae9c:
    // 0x1cae9c: 0xbba30000  swr         $v1, 0x0($sp)
    ctx->pc = 0x1cae9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_1caea0:
    // 0x1caea0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1caea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1caea4:
    // 0x1caea4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1caea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1caea8:
    // 0x1caea8: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
label_1caeac:
    if (ctx->pc == 0x1CAEACu) {
        ctx->pc = 0x1CAEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEA8u;
        // 0x1caeac: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEB0u;
        goto label_1caeb0;
    }
    ctx->pc = 0x1CAEA8u;
    {
        const bool branch_taken_0x1caea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1caea8) {
            ctx->pc = 0x1CAEACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAEA8u;
            // 0x1caeac: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAEBCu;
            goto label_1caebc;
        }
    }
    ctx->pc = 0x1CAEB0u;
label_1caeb0:
    // 0x1caeb0: 0xc072c64  jal         func_1CB190
label_1caeb4:
    if (ctx->pc == 0x1CAEB4u) {
        ctx->pc = 0x1CAEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEB0u;
        // 0x1caeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEB8u;
        goto label_1caeb8;
    }
    ctx->pc = 0x1CAEB0u;
    SET_GPR_U32(ctx, 31, 0x1CAEB8u);
    ctx->pc = 0x1CAEB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAEB0u;
    // 0x1caeb4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB190u, 0x1CAEB0u, 0x1CAEB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAEB8u;
label_1caeb8:
    // 0x1caeb8: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1caeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1caebc:
    // 0x1caebc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1caec0:
    if (ctx->pc == 0x1CAEC0u) {
        ctx->pc = 0x1CAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEBCu;
        // 0x1caec0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEC4u;
        goto label_1caec4;
    }
    ctx->pc = 0x1CAEBCu;
    {
        const bool branch_taken_0x1caebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAEC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEBCu;
        // 0x1caec0: 0x3c110051  lui         $s1, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caebc) {
            ctx->pc = 0x1CAEE4u;
            goto label_1caee4;
        }
    }
    ctx->pc = 0x1CAEC4u;
label_1caec4:
    // 0x1caec4: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x1caec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_1caec8:
    // 0x1caec8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1caec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1caecc:
    // 0x1caecc: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1caeccu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1caed0:
    // 0x1caed0: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1caed0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1caed4:
    // 0x1caed4: 0x40f809  jalr        $v0
label_1caed8:
    if (ctx->pc == 0x1CAED8u) {
        ctx->pc = 0x1CAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAED4u;
        // 0x1caed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEDCu;
        goto label_1caedc;
    }
    ctx->pc = 0x1CAED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAEDCu);
        ctx->pc = 0x1CAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAED4u;
        // 0x1caed8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAED4u, 0x1CAEDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAEDCu;
label_1caedc:
    // 0x1caedc: 0x50400027  beql        $v0, $zero, . + 4 + (0x27 << 2)
label_1caee0:
    if (ctx->pc == 0x1CAEE0u) {
        ctx->pc = 0x1CAEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEDCu;
        // 0x1caee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEE4u;
        goto label_1caee4;
    }
    ctx->pc = 0x1CAEDCu;
    {
        const bool branch_taken_0x1caedc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caedc) {
            ctx->pc = 0x1CAEE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAEDCu;
            // 0x1caee0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF7Cu;
            goto label_1caf7c;
        }
    }
    ctx->pc = 0x1CAEE4u;
label_1caee4:
    // 0x1caee4: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x1caee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1caee8:
    // 0x1caee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1caeec:
    // 0x1caeec: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_1caef0:
    if (ctx->pc == 0x1CAEF0u) {
        ctx->pc = 0x1CAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEECu;
        // 0x1caef0: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAEF4u;
        goto label_1caef4;
    }
    ctx->pc = 0x1CAEECu;
    {
        const bool branch_taken_0x1caeec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CAEF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAEECu;
        // 0x1caef0: 0x8e25b734  lw          $a1, -0x48CC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caeec) {
            ctx->pc = 0x1CAF14u;
            goto label_1caf14;
        }
    }
    ctx->pc = 0x1CAEF4u;
label_1caef4:
    // 0x1caef4: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1caef4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1caef8:
    // 0x1caef8: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1caef8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1caefc:
    // 0x1caefc: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1caefcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1caf00:
    // 0x1caf00: 0x40f809  jalr        $v0
label_1caf04:
    if (ctx->pc == 0x1CAF04u) {
        ctx->pc = 0x1CAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF00u;
        // 0x1caf04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF08u;
        goto label_1caf08;
    }
    ctx->pc = 0x1CAF00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAF08u);
        ctx->pc = 0x1CAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF00u;
        // 0x1caf04: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF00u, 0x1CAF08u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAF08u;
label_1caf08:
    // 0x1caf08: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_1caf0c:
    if (ctx->pc == 0x1CAF0Cu) {
        ctx->pc = 0x1CAF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF08u;
        // 0x1caf0c: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF10u;
        goto label_1caf10;
    }
    ctx->pc = 0x1CAF08u;
    {
        const bool branch_taken_0x1caf08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1caf08) {
            ctx->pc = 0x1CAF0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF08u;
            // 0x1caf0c: 0xae000054  sw          $zero, 0x54($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF10u;
            goto label_1caf10;
        }
    }
    ctx->pc = 0x1CAF10u;
label_1caf10:
    // 0x1caf10: 0x8e25b734  lw          $a1, -0x48CC($s1)
    ctx->pc = 0x1caf10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_1caf14:
    // 0x1caf14: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1caf14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1caf18:
    // 0x1caf18: 0x84640020  lh          $a0, 0x20($v1)
    ctx->pc = 0x1caf18u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
label_1caf1c:
    // 0x1caf1c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1caf1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1caf20:
    // 0x1caf20: 0x40f809  jalr        $v0
label_1caf24:
    if (ctx->pc == 0x1CAF24u) {
        ctx->pc = 0x1CAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF20u;
        // 0x1caf24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF28u;
        goto label_1caf28;
    }
    ctx->pc = 0x1CAF20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAF28u);
        ctx->pc = 0x1CAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF20u;
        // 0x1caf24: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF20u, 0x1CAF28u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAF28u;
label_1caf28:
    // 0x1caf28: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_1caf2c:
    if (ctx->pc == 0x1CAF2Cu) {
        ctx->pc = 0x1CAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF28u;
        // 0x1caf2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF30u;
        goto label_1caf30;
    }
    ctx->pc = 0x1CAF28u;
    {
        const bool branch_taken_0x1caf28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1caf28) {
            ctx->pc = 0x1CAF2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CAF28u;
            // 0x1caf2c: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CAF64u;
            goto label_1caf64;
        }
    }
    ctx->pc = 0x1CAF30u;
label_1caf30:
    // 0x1caf30: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x1caf30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
label_1caf34:
    // 0x1caf34: 0x8c45b8b8  lw          $a1, -0x4748($v0)
    ctx->pc = 0x1caf34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949048)));
label_1caf38:
    // 0x1caf38: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1caf38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1caf3c:
    // 0x1caf3c: 0x84640030  lh          $a0, 0x30($v1)
    ctx->pc = 0x1caf3cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 48)));
label_1caf40:
    // 0x1caf40: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x1caf40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_1caf44:
    // 0x1caf44: 0x40f809  jalr        $v0
label_1caf48:
    if (ctx->pc == 0x1CAF48u) {
        ctx->pc = 0x1CAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF44u;
        // 0x1caf48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF4Cu;
        goto label_1caf4c;
    }
    ctx->pc = 0x1CAF44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CAF4Cu);
        ctx->pc = 0x1CAF48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF44u;
        // 0x1caf48: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF44u, 0x1CAF4Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CAF4Cu;
label_1caf4c:
    // 0x1caf4c: 0x8e24b734  lw          $a0, -0x48CC($s1)
    ctx->pc = 0x1caf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294948660)));
label_1caf50:
    // 0x1caf50: 0x24051388  addiu       $a1, $zero, 0x1388
    ctx->pc = 0x1caf50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_1caf54:
    // 0x1caf54: 0xae02005c  sw          $v0, 0x5C($s0)
    ctx->pc = 0x1caf54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 2));
label_1caf58:
    // 0x1caf58: 0xc0517aa  jal         func_145EA8
label_1caf5c:
    if (ctx->pc == 0x1CAF5Cu) {
        ctx->pc = 0x1CAF5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF58u;
        // 0x1caf5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF60u;
        goto label_1caf60;
    }
    ctx->pc = 0x1CAF58u;
    SET_GPR_U32(ctx, 31, 0x1CAF60u);
    ctx->pc = 0x1CAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF58u;
    // 0x1caf5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x145EA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x145EA8u, 0x1CAF58u, 0x1CAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF60u;
label_1caf60:
    // 0x1caf60: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1caf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1caf64:
    // 0x1caf64: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1caf68:
    if (ctx->pc == 0x1CAF68u) {
        ctx->pc = 0x1CAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF64u;
        // 0x1caf68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF6Cu;
        goto label_1caf6c;
    }
    ctx->pc = 0x1CAF64u;
    {
        const bool branch_taken_0x1caf64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF64u;
        // 0x1caf68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf64) {
            ctx->pc = 0x1CAF88u;
            goto label_1caf88;
        }
    }
    ctx->pc = 0x1CAF6Cu;
label_1caf6c:
    // 0x1caf6c: 0xc072c64  jal         func_1CB190
label_1caf70:
    if (ctx->pc == 0x1CAF70u) {
        ctx->pc = 0x1CAF70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF6Cu;
        // 0x1caf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF74u;
        goto label_1caf74;
    }
    ctx->pc = 0x1CAF6Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF74u);
    ctx->pc = 0x1CAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF6Cu;
    // 0x1caf70: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB190u, 0x1CAF6Cu, 0x1CAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF74u;
label_1caf74:
    // 0x1caf74: 0x10000004  b           . + 4 + (0x4 << 2)
label_1caf78:
    if (ctx->pc == 0x1CAF78u) {
        ctx->pc = 0x1CAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF74u;
        // 0x1caf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF7Cu;
        goto label_1caf7c;
    }
    ctx->pc = 0x1CAF74u;
    {
        const bool branch_taken_0x1caf74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CAF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF74u;
        // 0x1caf78: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1caf74) {
            ctx->pc = 0x1CAF88u;
            goto label_1caf88;
        }
    }
    ctx->pc = 0x1CAF7Cu;
label_1caf7c:
    // 0x1caf7c: 0xc072c04  jal         func_1CB010
label_1caf80:
    if (ctx->pc == 0x1CAF80u) {
        ctx->pc = 0x1CAF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF7Cu;
        // 0x1caf80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF84u;
        goto label_1caf84;
    }
    ctx->pc = 0x1CAF7Cu;
    SET_GPR_U32(ctx, 31, 0x1CAF84u);
    ctx->pc = 0x1CAF80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CAF7Cu;
    // 0x1caf80: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CB010u, 0x1CAF7Cu, 0x1CAF84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CAF84u;
label_1caf84:
    // 0x1caf84: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1caf84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1caf88:
    // 0x1caf88: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1caf88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1caf8c:
    // 0x1caf8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1caf8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1caf90:
    // 0x1caf90: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1caf90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1caf94:
    // 0x1caf94: 0x3e00008  jr          $ra
label_1caf98:
    if (ctx->pc == 0x1CAF98u) {
        ctx->pc = 0x1CAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF94u;
        // 0x1caf98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CAF9Cu;
        goto label_1caf9c;
    }
    ctx->pc = 0x1CAF94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CAF98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CAF94u;
        // 0x1caf98: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CAF94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CAF9Cu;
label_1caf9c:
    // 0x1caf9c: 0x0  nop
    ctx->pc = 0x1caf9cu;
    // NOP
    ctx->pc = 0x1cafa0u;
}
