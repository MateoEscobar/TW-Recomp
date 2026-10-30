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

// Function: sub_00181E50
// Address: 0x181e50 - 0x181f40
void sub_00181E50_0x181e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181E50_0x181e50");
#endif

    switch (ctx->pc) {
        case 0x181e50u: goto label_181e50;
        case 0x181e54u: goto label_181e54;
        case 0x181e58u: goto label_181e58;
        case 0x181e5cu: goto label_181e5c;
        case 0x181e60u: goto label_181e60;
        case 0x181e64u: goto label_181e64;
        case 0x181e68u: goto label_181e68;
        case 0x181e6cu: goto label_181e6c;
        case 0x181e70u: goto label_181e70;
        case 0x181e74u: goto label_181e74;
        case 0x181e78u: goto label_181e78;
        case 0x181e7cu: goto label_181e7c;
        case 0x181e80u: goto label_181e80;
        case 0x181e84u: goto label_181e84;
        case 0x181e88u: goto label_181e88;
        case 0x181e8cu: goto label_181e8c;
        case 0x181e90u: goto label_181e90;
        case 0x181e94u: goto label_181e94;
        case 0x181e98u: goto label_181e98;
        case 0x181e9cu: goto label_181e9c;
        case 0x181ea0u: goto label_181ea0;
        case 0x181ea4u: goto label_181ea4;
        case 0x181ea8u: goto label_181ea8;
        case 0x181eacu: goto label_181eac;
        case 0x181eb0u: goto label_181eb0;
        case 0x181eb4u: goto label_181eb4;
        case 0x181eb8u: goto label_181eb8;
        case 0x181ebcu: goto label_181ebc;
        case 0x181ec0u: goto label_181ec0;
        case 0x181ec4u: goto label_181ec4;
        case 0x181ec8u: goto label_181ec8;
        case 0x181eccu: goto label_181ecc;
        case 0x181ed0u: goto label_181ed0;
        case 0x181ed4u: goto label_181ed4;
        case 0x181ed8u: goto label_181ed8;
        case 0x181edcu: goto label_181edc;
        case 0x181ee0u: goto label_181ee0;
        case 0x181ee4u: goto label_181ee4;
        case 0x181ee8u: goto label_181ee8;
        case 0x181eecu: goto label_181eec;
        case 0x181ef0u: goto label_181ef0;
        case 0x181ef4u: goto label_181ef4;
        case 0x181ef8u: goto label_181ef8;
        case 0x181efcu: goto label_181efc;
        case 0x181f00u: goto label_181f00;
        case 0x181f04u: goto label_181f04;
        case 0x181f08u: goto label_181f08;
        case 0x181f0cu: goto label_181f0c;
        case 0x181f10u: goto label_181f10;
        case 0x181f14u: goto label_181f14;
        case 0x181f18u: goto label_181f18;
        case 0x181f1cu: goto label_181f1c;
        case 0x181f20u: goto label_181f20;
        case 0x181f24u: goto label_181f24;
        case 0x181f28u: goto label_181f28;
        case 0x181f2cu: goto label_181f2c;
        case 0x181f30u: goto label_181f30;
        case 0x181f34u: goto label_181f34;
        case 0x181f38u: goto label_181f38;
        case 0x181f3cu: goto label_181f3c;
        default: break;
    }

    ctx->pc = 0x181e50u;

label_181e50:
    // 0x181e50: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x181e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_181e54:
    // 0x181e54: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x181e54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_181e58:
    // 0x181e58: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x181e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_181e5c:
    // 0x181e5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x181e5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_181e60:
    // 0x181e60: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x181e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_181e64:
    // 0x181e64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x181e64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_181e68:
    // 0x181e68: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x181e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_181e6c:
    // 0x181e6c: 0x1000000a  b           . + 4 + (0xA << 2)
label_181e70:
    if (ctx->pc == 0x181E70u) {
        ctx->pc = 0x181E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E6Cu;
        // 0x181e70: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E74u;
        goto label_181e74;
    }
    ctx->pc = 0x181E6Cu;
    {
        const bool branch_taken_0x181e6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E6Cu;
        // 0x181e70: 0xa0902d  daddu       $s2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e6c) {
            ctx->pc = 0x181E98u;
            goto label_181e98;
        }
    }
    ctx->pc = 0x181E74u;
label_181e74:
    // 0x181e74: 0x0  nop
    ctx->pc = 0x181e74u;
    // NOP
label_181e78:
    // 0x181e78: 0xc060a30  jal         func_1828C0
label_181e7c:
    if (ctx->pc == 0x181E7Cu) {
        ctx->pc = 0x181E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E78u;
        // 0x181e7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E80u;
        goto label_181e80;
    }
    ctx->pc = 0x181E78u;
    SET_GPR_U32(ctx, 31, 0x181E80u);
    ctx->pc = 0x181E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E78u;
    // 0x181e7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828C0u, 0x181E78u, 0x181E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181E80u;
label_181e80:
    // 0x181e80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x181e80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_181e84:
    // 0x181e84: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_181e88:
    if (ctx->pc == 0x181E88u) {
        ctx->pc = 0x181E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E84u;
        // 0x181e88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E8Cu;
        goto label_181e8c;
    }
    ctx->pc = 0x181E84u;
    {
        const bool branch_taken_0x181e84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x181E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E84u;
        // 0x181e88: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181e84) {
            ctx->pc = 0x181E98u;
            goto label_181e98;
        }
    }
    ctx->pc = 0x181E8Cu;
label_181e8c:
    // 0x181e8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x181e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_181e90:
    // 0x181e90: 0x50520025  beql        $v0, $s2, . + 4 + (0x25 << 2)
label_181e94:
    if (ctx->pc == 0x181E94u) {
        ctx->pc = 0x181E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E90u;
        // 0x181e94: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181E98u;
        goto label_181e98;
    }
    ctx->pc = 0x181E90u;
    {
        const bool branch_taken_0x181e90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        if (branch_taken_0x181e90) {
            ctx->pc = 0x181E94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181E90u;
            // 0x181e94: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181F28u;
            goto label_181f28;
        }
    }
    ctx->pc = 0x181E98u;
label_181e98:
    // 0x181e98: 0xc060a2c  jal         func_1828B0
label_181e9c:
    if (ctx->pc == 0x181E9Cu) {
        ctx->pc = 0x181E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181E98u;
        // 0x181e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EA0u;
        goto label_181ea0;
    }
    ctx->pc = 0x181E98u;
    SET_GPR_U32(ctx, 31, 0x181EA0u);
    ctx->pc = 0x181E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181E98u;
    // 0x181e9c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1828B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1828B0u, 0x181E98u, 0x181EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EA0u;
label_181ea0:
    // 0x181ea0: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x181ea0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_181ea4:
    // 0x181ea4: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
label_181ea8:
    if (ctx->pc == 0x181EA8u) {
        ctx->pc = 0x181EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EA4u;
        // 0x181ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EACu;
        goto label_181eac;
    }
    ctx->pc = 0x181EA4u;
    {
        const bool branch_taken_0x181ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x181ea4) {
            ctx->pc = 0x181EA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x181EA4u;
            // 0x181ea8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x181E78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_181e78;
        }
    }
    ctx->pc = 0x181EACu;
label_181eac:
    // 0x181eac: 0x3c060055  lui         $a2, 0x55
    ctx->pc = 0x181eacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)85 << 16));
label_181eb0:
    // 0x181eb0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x181eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_181eb4:
    // 0x181eb4: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x181eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_181eb8:
    // 0x181eb8: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x181eb8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_181ebc:
    // 0x181ebc: 0xc10ca04  jal         func_432810
label_181ec0:
    if (ctx->pc == 0x181EC0u) {
        ctx->pc = 0x181EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EBCu;
        // 0x181ec0: 0x24c62710  addiu       $a2, $a2, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10000));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EC4u;
        goto label_181ec4;
    }
    ctx->pc = 0x181EBCu;
    SET_GPR_U32(ctx, 31, 0x181EC4u);
    ctx->pc = 0x181EC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181EBCu;
    // 0x181ec0: 0x24c62710  addiu       $a2, $a2, 0x2710 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 10000));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x181EBCu, 0x181EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EC4u;
label_181ec4:
    // 0x181ec4: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x181ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_181ec8:
    // 0x181ec8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x181ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_181ecc:
    // 0x181ecc: 0x2470de90  addiu       $s0, $v1, -0x2170
    ctx->pc = 0x181eccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958736));
label_181ed0:
    // 0x181ed0: 0xc10c313  jal         func_430C4C
label_181ed4:
    if (ctx->pc == 0x181ED4u) {
        ctx->pc = 0x181ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ED0u;
        // 0x181ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181ED8u;
        goto label_181ed8;
    }
    ctx->pc = 0x181ED0u;
    SET_GPR_U32(ctx, 31, 0x181ED8u);
    ctx->pc = 0x181ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181ED0u;
    // 0x181ed4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x430C4Cu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x430C4Cu, 0x181ED0u, 0x181ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181ED8u;
label_181ed8:
    // 0x181ed8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_181edc:
    if (ctx->pc == 0x181EDCu) {
        ctx->pc = 0x181EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ED8u;
        // 0x181edc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EE0u;
        goto label_181ee0;
    }
    ctx->pc = 0x181ED8u;
    {
        const bool branch_taken_0x181ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x181EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181ED8u;
        // 0x181edc: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181ed8) {
            ctx->pc = 0x181F20u;
            goto label_181f20;
        }
    }
    ctx->pc = 0x181EE0u;
label_181ee0:
    // 0x181ee0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x181ee0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181ee4:
    // 0x181ee4: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x181ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_181ee8:
    // 0x181ee8: 0xc10c4de  jal         func_431378
label_181eec:
    if (ctx->pc == 0x181EECu) {
        ctx->pc = 0x181EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181EE8u;
        // 0x181eec: 0xa2000026  sb          $zero, 0x26($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181EF0u;
        goto label_181ef0;
    }
    ctx->pc = 0x181EE8u;
    SET_GPR_U32(ctx, 31, 0x181EF0u);
    ctx->pc = 0x181EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181EE8u;
    // 0x181eec: 0xa2000026  sb          $zero, 0x26($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 38), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x431378u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x431378u, 0x181EE8u, 0x181EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x181EF0u;
label_181ef0:
    // 0x181ef0: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x181ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_181ef4:
    // 0x181ef4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x181ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_181ef8:
    // 0x181ef8: 0x8c62b788  lw          $v0, -0x4878($v1)
    ctx->pc = 0x181ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294948744)));
label_181efc:
    // 0x181efc: 0x8c460090  lw          $a2, 0x90($v0)
    ctx->pc = 0x181efcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 144)));
label_181f00:
    // 0x181f00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x181f00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_181f04:
    // 0x181f04: 0x84640058  lh          $a0, 0x58($v1)
    ctx->pc = 0x181f04u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 88)));
label_181f08:
    // 0x181f08: 0x8c62005c  lw          $v0, 0x5C($v1)
    ctx->pc = 0x181f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 92)));
label_181f0c:
    // 0x181f0c: 0x40f809  jalr        $v0
label_181f10:
    if (ctx->pc == 0x181F10u) {
        ctx->pc = 0x181F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F0Cu;
        // 0x181f10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F14u;
        goto label_181f14;
    }
    ctx->pc = 0x181F0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x181F14u);
        ctx->pc = 0x181F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F0Cu;
        // 0x181f10: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181F0Cu, 0x181F14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x181F14u;
label_181f14:
    // 0x181f14: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x181f14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_181f18:
    // 0x181f18: 0x10000003  b           . + 4 + (0x3 << 2)
label_181f1c:
    if (ctx->pc == 0x181F1Cu) {
        ctx->pc = 0x181F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F18u;
        // 0x181f1c: 0xac62cd2c  sw          $v0, -0x32D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F20u;
        goto label_181f20;
    }
    ctx->pc = 0x181F18u;
    {
        const bool branch_taken_0x181f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x181F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F18u;
        // 0x181f1c: 0xac62cd2c  sw          $v0, -0x32D4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294954284), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181f18) {
            ctx->pc = 0x181F28u;
            goto label_181f28;
        }
    }
    ctx->pc = 0x181F20u;
label_181f20:
    // 0x181f20: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x181f20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
label_181f24:
    // 0x181f24: 0x8c62cd2c  lw          $v0, -0x32D4($v1)
    ctx->pc = 0x181f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954284)));
label_181f28:
    // 0x181f28: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x181f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_181f2c:
    // 0x181f2c: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x181f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_181f30:
    // 0x181f30: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x181f30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_181f34:
    // 0x181f34: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x181f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_181f38:
    // 0x181f38: 0x3e00008  jr          $ra
label_181f3c:
    if (ctx->pc == 0x181F3Cu) {
        ctx->pc = 0x181F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F38u;
        // 0x181f3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x181F40u;
        goto label_fallthrough_0x181f38;
    }
    ctx->pc = 0x181F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x181F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181F38u;
        // 0x181f3c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x181F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x181f38:
    ctx->pc = 0x181F40u;
}
