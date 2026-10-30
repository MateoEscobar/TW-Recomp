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

// Function: sub_002CAEA8
// Address: 0x2caea8 - 0x2caf78
void sub_002CAEA8_0x2caea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CAEA8_0x2caea8");
#endif

    switch (ctx->pc) {
        case 0x2caea8u: goto label_2caea8;
        case 0x2caeacu: goto label_2caeac;
        case 0x2caeb0u: goto label_2caeb0;
        case 0x2caeb4u: goto label_2caeb4;
        case 0x2caeb8u: goto label_2caeb8;
        case 0x2caebcu: goto label_2caebc;
        case 0x2caec0u: goto label_2caec0;
        case 0x2caec4u: goto label_2caec4;
        case 0x2caec8u: goto label_2caec8;
        case 0x2caeccu: goto label_2caecc;
        case 0x2caed0u: goto label_2caed0;
        case 0x2caed4u: goto label_2caed4;
        case 0x2caed8u: goto label_2caed8;
        case 0x2caedcu: goto label_2caedc;
        case 0x2caee0u: goto label_2caee0;
        case 0x2caee4u: goto label_2caee4;
        case 0x2caee8u: goto label_2caee8;
        case 0x2caeecu: goto label_2caeec;
        case 0x2caef0u: goto label_2caef0;
        case 0x2caef4u: goto label_2caef4;
        case 0x2caef8u: goto label_2caef8;
        case 0x2caefcu: goto label_2caefc;
        case 0x2caf00u: goto label_2caf00;
        case 0x2caf04u: goto label_2caf04;
        case 0x2caf08u: goto label_2caf08;
        case 0x2caf0cu: goto label_2caf0c;
        case 0x2caf10u: goto label_2caf10;
        case 0x2caf14u: goto label_2caf14;
        case 0x2caf18u: goto label_2caf18;
        case 0x2caf1cu: goto label_2caf1c;
        case 0x2caf20u: goto label_2caf20;
        case 0x2caf24u: goto label_2caf24;
        case 0x2caf28u: goto label_2caf28;
        case 0x2caf2cu: goto label_2caf2c;
        case 0x2caf30u: goto label_2caf30;
        case 0x2caf34u: goto label_2caf34;
        case 0x2caf38u: goto label_2caf38;
        case 0x2caf3cu: goto label_2caf3c;
        case 0x2caf40u: goto label_2caf40;
        case 0x2caf44u: goto label_2caf44;
        case 0x2caf48u: goto label_2caf48;
        case 0x2caf4cu: goto label_2caf4c;
        case 0x2caf50u: goto label_2caf50;
        case 0x2caf54u: goto label_2caf54;
        case 0x2caf58u: goto label_2caf58;
        case 0x2caf5cu: goto label_2caf5c;
        case 0x2caf60u: goto label_2caf60;
        case 0x2caf64u: goto label_2caf64;
        case 0x2caf68u: goto label_2caf68;
        case 0x2caf6cu: goto label_2caf6c;
        case 0x2caf70u: goto label_2caf70;
        case 0x2caf74u: goto label_2caf74;
        default: break;
    }

    ctx->pc = 0x2caea8u;

label_2caea8:
    // 0x2caea8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2caea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2caeac:
    // 0x2caeac: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x2caeacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_2caeb0:
    // 0x2caeb0: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x2caeb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_2caeb4:
    // 0x2caeb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2caeb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2caeb8:
    // 0x2caeb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2caeb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2caebc:
    // 0x2caebc: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x2caebcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_2caec0:
    // 0x2caec0: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x2caec0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2caec4:
    // 0x2caec4: 0x26040124  addiu       $a0, $s0, 0x124
    ctx->pc = 0x2caec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 292));
label_2caec8:
    // 0x2caec8: 0xc0e409a  jal         func_390268
label_2caecc:
    if (ctx->pc == 0x2CAECCu) {
        ctx->pc = 0x2CAECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEC8u;
        // 0x2caecc: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAED0u;
        goto label_2caed0;
    }
    ctx->pc = 0x2CAEC8u;
    SET_GPR_U32(ctx, 31, 0x2CAED0u);
    ctx->pc = 0x2CAECCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEC8u;
    // 0x2caecc: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390268u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390268u, 0x2CAEC8u, 0x2CAED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAED0u;
label_2caed0:
    // 0x2caed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2caed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2caed4:
    // 0x2caed4: 0xc0a34d6  jal         func_28D358
label_2caed8:
    if (ctx->pc == 0x2CAED8u) {
        ctx->pc = 0x2CAED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAED4u;
        // 0x2caed8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAEDCu;
        goto label_2caedc;
    }
    ctx->pc = 0x2CAED4u;
    SET_GPR_U32(ctx, 31, 0x2CAEDCu);
    ctx->pc = 0x2CAED8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAED4u;
    // 0x2caed8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D358u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D358u, 0x2CAED4u, 0x2CAEDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEDCu;
label_2caedc:
    // 0x2caedc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2caedcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2caee0:
    // 0x2caee0: 0x1200001f  beqz        $s0, . + 4 + (0x1F << 2)
label_2caee4:
    if (ctx->pc == 0x2CAEE4u) {
        ctx->pc = 0x2CAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEE0u;
        // 0x2caee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAEE8u;
        goto label_2caee8;
    }
    ctx->pc = 0x2CAEE0u;
    {
        const bool branch_taken_0x2caee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEE0u;
        // 0x2caee4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caee0) {
            ctx->pc = 0x2CAF60u;
            goto label_2caf60;
        }
    }
    ctx->pc = 0x2CAEE8u;
label_2caee8:
    // 0x2caee8: 0xc088e60  jal         func_223980
label_2caeec:
    if (ctx->pc == 0x2CAEECu) {
        ctx->pc = 0x2CAEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEE8u;
        // 0x2caeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAEF0u;
        goto label_2caef0;
    }
    ctx->pc = 0x2CAEE8u;
    SET_GPR_U32(ctx, 31, 0x2CAEF0u);
    ctx->pc = 0x2CAEECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEE8u;
    // 0x2caeec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223980u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223980u, 0x2CAEE8u, 0x2CAEF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAEF0u;
label_2caef0:
    // 0x2caef0: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2caef4:
    if (ctx->pc == 0x2CAEF4u) {
        ctx->pc = 0x2CAEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEF0u;
        // 0x2caef4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAEF8u;
        goto label_2caef8;
    }
    ctx->pc = 0x2CAEF0u;
    {
        const bool branch_taken_0x2caef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2caef0) {
            ctx->pc = 0x2CAEF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2CAEF0u;
            // 0x2caef4: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2CAF08u;
            goto label_2caf08;
        }
    }
    ctx->pc = 0x2CAEF8u;
label_2caef8:
    // 0x2caef8: 0xc0a36c8  jal         func_28DB20
label_2caefc:
    if (ctx->pc == 0x2CAEFCu) {
        ctx->pc = 0x2CAEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAEF8u;
        // 0x2caefc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF00u;
        goto label_2caf00;
    }
    ctx->pc = 0x2CAEF8u;
    SET_GPR_U32(ctx, 31, 0x2CAF00u);
    ctx->pc = 0x2CAEFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAEF8u;
    // 0x2caefc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28DB20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28DB20u, 0x2CAEF8u, 0x2CAF00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF00u;
label_2caf00:
    // 0x2caf00: 0x10000017  b           . + 4 + (0x17 << 2)
label_2caf04:
    if (ctx->pc == 0x2CAF04u) {
        ctx->pc = 0x2CAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF00u;
        // 0x2caf04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF08u;
        goto label_2caf08;
    }
    ctx->pc = 0x2CAF00u;
    {
        const bool branch_taken_0x2caf00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CAF04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF00u;
        // 0x2caf04: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf00) {
            ctx->pc = 0x2CAF60u;
            goto label_2caf60;
        }
    }
    ctx->pc = 0x2CAF08u;
label_2caf08:
    // 0x2caf08: 0x8043002e  lb          $v1, 0x2E($v0)
    ctx->pc = 0x2caf08u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 46)));
label_2caf0c:
    // 0x2caf0c: 0x1c600014  bgtz        $v1, . + 4 + (0x14 << 2)
label_2caf10:
    if (ctx->pc == 0x2CAF10u) {
        ctx->pc = 0x2CAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF0Cu;
        // 0x2caf10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF14u;
        goto label_2caf14;
    }
    ctx->pc = 0x2CAF0Cu;
    {
        const bool branch_taken_0x2caf0c = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2CAF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF0Cu;
        // 0x2caf10: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2caf0c) {
            ctx->pc = 0x2CAF60u;
            goto label_2caf60;
        }
    }
    ctx->pc = 0x2CAF14u;
label_2caf14:
    // 0x2caf14: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2caf14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2caf18:
    // 0x2caf18: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2caf18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2caf1c:
    // 0x2caf1c: 0x844500a8  lh          $a1, 0xA8($v0)
    ctx->pc = 0x2caf1cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 168)));
label_2caf20:
    // 0x2caf20: 0x8c4300ac  lw          $v1, 0xAC($v0)
    ctx->pc = 0x2caf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 172)));
label_2caf24:
    // 0x2caf24: 0x60f809  jalr        $v1
label_2caf28:
    if (ctx->pc == 0x2CAF28u) {
        ctx->pc = 0x2CAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF24u;
        // 0x2caf28: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF2Cu;
        goto label_2caf2c;
    }
    ctx->pc = 0x2CAF24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2CAF2Cu);
        ctx->pc = 0x2CAF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF24u;
        // 0x2caf28: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF24u, 0x2CAF2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2CAF2Cu;
label_2caf2c:
    // 0x2caf2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2caf2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2caf30:
    // 0x2caf30: 0xc0cd8ec  jal         func_3363B0
label_2caf34:
    if (ctx->pc == 0x2CAF34u) {
        ctx->pc = 0x2CAF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF30u;
        // 0x2caf34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF38u;
        goto label_2caf38;
    }
    ctx->pc = 0x2CAF30u;
    SET_GPR_U32(ctx, 31, 0x2CAF38u);
    ctx->pc = 0x2CAF34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF30u;
    // 0x2caf34: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3363B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3363B0u, 0x2CAF30u, 0x2CAF38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF38u;
label_2caf38:
    // 0x2caf38: 0xc7ac0004  lwc1        $f12, 0x4($sp)
    ctx->pc = 0x2caf38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2caf3c:
    // 0x2caf3c: 0xc0cd5ea  jal         func_3357A8
label_2caf40:
    if (ctx->pc == 0x2CAF40u) {
        ctx->pc = 0x2CAF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF3Cu;
        // 0x2caf40: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF44u;
        goto label_2caf44;
    }
    ctx->pc = 0x2CAF3Cu;
    SET_GPR_U32(ctx, 31, 0x2CAF44u);
    ctx->pc = 0x2CAF40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF3Cu;
    // 0x2caf40: 0xc7ad0000  lwc1        $f13, 0x0($sp) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3357A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3357A8u, 0x2CAF3Cu, 0x2CAF44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF44u;
label_2caf44:
    // 0x2caf44: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2caf44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2caf48:
    // 0x2caf48: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2caf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2caf4c:
    // 0x2caf4c: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2caf4cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_2caf50:
    // 0x2caf50: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x2caf50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_2caf54:
    // 0x2caf54: 0xc0a3892  jal         func_28E248
label_2caf58:
    if (ctx->pc == 0x2CAF58u) {
        ctx->pc = 0x2CAF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF54u;
        // 0x2caf58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF5Cu;
        goto label_2caf5c;
    }
    ctx->pc = 0x2CAF54u;
    SET_GPR_U32(ctx, 31, 0x2CAF5Cu);
    ctx->pc = 0x2CAF58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2CAF54u;
    // 0x2caf58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28E248u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28E248u, 0x2CAF54u, 0x2CAF5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2CAF5Cu;
label_2caf5c:
    // 0x2caf5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2caf5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2caf60:
    // 0x2caf60: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x2caf60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2caf64:
    // 0x2caf64: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x2caf64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2caf68:
    // 0x2caf68: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x2caf68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2caf6c:
    // 0x2caf6c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2caf6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2caf70:
    // 0x2caf70: 0x3e00008  jr          $ra
label_2caf74:
    if (ctx->pc == 0x2CAF74u) {
        ctx->pc = 0x2CAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF70u;
        // 0x2caf74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2CAF78u;
        goto label_fallthrough_0x2caf70;
    }
    ctx->pc = 0x2CAF70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CAF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2CAF70u;
        // 0x2caf74: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2CAF70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2caf70:
    ctx->pc = 0x2CAF78u;
}
