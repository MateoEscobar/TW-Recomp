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

// Function: sub_002F1FD0
// Address: 0x2f1fd0 - 0x2f2088
void sub_002F1FD0_0x2f1fd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1FD0_0x2f1fd0");
#endif

    switch (ctx->pc) {
        case 0x2f1fd0u: goto label_2f1fd0;
        case 0x2f1fd4u: goto label_2f1fd4;
        case 0x2f1fd8u: goto label_2f1fd8;
        case 0x2f1fdcu: goto label_2f1fdc;
        case 0x2f1fe0u: goto label_2f1fe0;
        case 0x2f1fe4u: goto label_2f1fe4;
        case 0x2f1fe8u: goto label_2f1fe8;
        case 0x2f1fecu: goto label_2f1fec;
        case 0x2f1ff0u: goto label_2f1ff0;
        case 0x2f1ff4u: goto label_2f1ff4;
        case 0x2f1ff8u: goto label_2f1ff8;
        case 0x2f1ffcu: goto label_2f1ffc;
        case 0x2f2000u: goto label_2f2000;
        case 0x2f2004u: goto label_2f2004;
        case 0x2f2008u: goto label_2f2008;
        case 0x2f200cu: goto label_2f200c;
        case 0x2f2010u: goto label_2f2010;
        case 0x2f2014u: goto label_2f2014;
        case 0x2f2018u: goto label_2f2018;
        case 0x2f201cu: goto label_2f201c;
        case 0x2f2020u: goto label_2f2020;
        case 0x2f2024u: goto label_2f2024;
        case 0x2f2028u: goto label_2f2028;
        case 0x2f202cu: goto label_2f202c;
        case 0x2f2030u: goto label_2f2030;
        case 0x2f2034u: goto label_2f2034;
        case 0x2f2038u: goto label_2f2038;
        case 0x2f203cu: goto label_2f203c;
        case 0x2f2040u: goto label_2f2040;
        case 0x2f2044u: goto label_2f2044;
        case 0x2f2048u: goto label_2f2048;
        case 0x2f204cu: goto label_2f204c;
        case 0x2f2050u: goto label_2f2050;
        case 0x2f2054u: goto label_2f2054;
        case 0x2f2058u: goto label_2f2058;
        case 0x2f205cu: goto label_2f205c;
        case 0x2f2060u: goto label_2f2060;
        case 0x2f2064u: goto label_2f2064;
        case 0x2f2068u: goto label_2f2068;
        case 0x2f206cu: goto label_2f206c;
        case 0x2f2070u: goto label_2f2070;
        case 0x2f2074u: goto label_2f2074;
        case 0x2f2078u: goto label_2f2078;
        case 0x2f207cu: goto label_2f207c;
        case 0x2f2080u: goto label_2f2080;
        case 0x2f2084u: goto label_2f2084;
        default: break;
    }

    ctx->pc = 0x2f1fd0u;

label_2f1fd0:
    // 0x2f1fd0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f1fd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2f1fd4:
    // 0x2f1fd4: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x2f1fd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
label_2f1fd8:
    // 0x2f1fd8: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x2f1fd8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_2f1fdc:
    // 0x2f1fdc: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x2f1fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_2f1fe0:
    // 0x2f1fe0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f1fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f1fe4:
    // 0x2f1fe4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f1fe4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2f1fe8:
    // 0x2f1fe8: 0xc0e8b48  jal         func_3A2D20
label_2f1fec:
    if (ctx->pc == 0x2F1FECu) {
        ctx->pc = 0x2F1FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FE8u;
        // 0x2f1fec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FF0u;
        goto label_2f1ff0;
    }
    ctx->pc = 0x2F1FE8u;
    SET_GPR_U32(ctx, 31, 0x2F1FF0u);
    ctx->pc = 0x2F1FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FE8u;
    // 0x2f1fec: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D20u, 0x2F1FE8u, 0x2F1FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FF0u;
label_2f1ff0:
    // 0x2f1ff0: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f1ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f1ff4:
    // 0x2f1ff4: 0xc0e8b70  jal         func_3A2DC0
label_2f1ff8:
    if (ctx->pc == 0x2F1FF8u) {
        ctx->pc = 0x2F1FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1FF4u;
        // 0x2f1ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F1FFCu;
        goto label_2f1ffc;
    }
    ctx->pc = 0x2F1FF4u;
    SET_GPR_U32(ctx, 31, 0x2F1FFCu);
    ctx->pc = 0x2F1FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F1FF4u;
    // 0x2f1ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2F1FF4u, 0x2F1FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F1FFCu;
label_2f1ffc:
    // 0x2f1ffc: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f1ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f2000:
    // 0x2f2000: 0xc0e8b70  jal         func_3A2DC0
label_2f2004:
    if (ctx->pc == 0x2F2004u) {
        ctx->pc = 0x2F2004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2000u;
        // 0x2f2004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2008u;
        goto label_2f2008;
    }
    ctx->pc = 0x2F2000u;
    SET_GPR_U32(ctx, 31, 0x2F2008u);
    ctx->pc = 0x2F2004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2000u;
    // 0x2f2004: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DC0u, 0x2F2000u, 0x2F2008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2008u;
label_2f2008:
    // 0x2f2008: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f200c:
    // 0x2f200c: 0xc0e8b68  jal         func_3A2DA0
label_2f2010:
    if (ctx->pc == 0x2F2010u) {
        ctx->pc = 0x2F2010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F200Cu;
        // 0x2f2010: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2014u;
        goto label_2f2014;
    }
    ctx->pc = 0x2F200Cu;
    SET_GPR_U32(ctx, 31, 0x2F2014u);
    ctx->pc = 0x2F2010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F200Cu;
    // 0x2f2010: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F200Cu, 0x2F2014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2014u;
label_2f2014:
    // 0x2f2014: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2014u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f2018:
    // 0x2f2018: 0xc0e8b68  jal         func_3A2DA0
label_2f201c:
    if (ctx->pc == 0x2F201Cu) {
        ctx->pc = 0x2F201Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2018u;
        // 0x2f201c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2020u;
        goto label_2f2020;
    }
    ctx->pc = 0x2F2018u;
    SET_GPR_U32(ctx, 31, 0x2F2020u);
    ctx->pc = 0x2F201Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2018u;
    // 0x2f201c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2DA0u, 0x2F2018u, 0x2F2020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2020u;
label_2f2020:
    // 0x2f2020: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f2020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2f2024:
    // 0x2f2024: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2f2024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f2028:
    // 0x2f2028: 0x844500a0  lh          $a1, 0xA0($v0)
    ctx->pc = 0x2f2028u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_2f202c:
    // 0x2f202c: 0x8c4300a4  lw          $v1, 0xA4($v0)
    ctx->pc = 0x2f202cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 164)));
label_2f2030:
    // 0x2f2030: 0x60f809  jalr        $v1
label_2f2034:
    if (ctx->pc == 0x2F2034u) {
        ctx->pc = 0x2F2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2030u;
        // 0x2f2034: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2038u;
        goto label_2f2038;
    }
    ctx->pc = 0x2F2030u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F2038u);
        ctx->pc = 0x2F2034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2030u;
        // 0x2f2034: 0x2252821  addu        $a1, $s1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2030u, 0x2F2038u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F2038u;
label_2f2038:
    // 0x2f2038: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f203c:
    // 0x2f203c: 0xc0e8b58  jal         func_3A2D60
label_2f2040:
    if (ctx->pc == 0x2F2040u) {
        ctx->pc = 0x2F2040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F203Cu;
        // 0x2f2040: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2044u;
        goto label_2f2044;
    }
    ctx->pc = 0x2F203Cu;
    SET_GPR_U32(ctx, 31, 0x2F2044u);
    ctx->pc = 0x2F2040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F203Cu;
    // 0x2f2040: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F203Cu, 0x2F2044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2044u;
label_2f2044:
    // 0x2f2044: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f2048:
    // 0x2f2048: 0x3c050051  lui         $a1, 0x51
    ctx->pc = 0x2f2048u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)81 << 16));
label_2f204c:
    // 0x2f204c: 0xc0e8b58  jal         func_3A2D60
label_2f2050:
    if (ctx->pc == 0x2F2050u) {
        ctx->pc = 0x2F2050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F204Cu;
        // 0x2f2050: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2054u;
        goto label_2f2054;
    }
    ctx->pc = 0x2F204Cu;
    SET_GPR_U32(ctx, 31, 0x2F2054u);
    ctx->pc = 0x2F2050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F204Cu;
    // 0x2f2050: 0x24a516c0  addiu       $a1, $a1, 0x16C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D60u, 0x2F204Cu, 0x2F2054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2054u;
label_2f2054:
    // 0x2f2054: 0x8e042c7c  lw          $a0, 0x2C7C($s0)
    ctx->pc = 0x2f2054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
label_2f2058:
    // 0x2f2058: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2f2058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f205c:
    // 0x2f205c: 0xc0e8b80  jal         func_3A2E00
label_2f2060:
    if (ctx->pc == 0x2F2060u) {
        ctx->pc = 0x2F2060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F205Cu;
        // 0x2f2060: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2064u;
        goto label_2f2064;
    }
    ctx->pc = 0x2F205Cu;
    SET_GPR_U32(ctx, 31, 0x2F2064u);
    ctx->pc = 0x2F2060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F205Cu;
    // 0x2f2060: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2E00u, 0x2F205Cu, 0x2F2064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F2064u;
label_2f2064:
    // 0x2f2064: 0xc0e8b50  jal         func_3A2D40
label_2f2068:
    if (ctx->pc == 0x2F2068u) {
        ctx->pc = 0x2F2068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2064u;
        // 0x2f2068: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F206Cu;
        goto label_2f206c;
    }
    ctx->pc = 0x2F2064u;
    SET_GPR_U32(ctx, 31, 0x2F206Cu);
    ctx->pc = 0x2F2068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2064u;
    // 0x2f2068: 0x8e042c7c  lw          $a0, 0x2C7C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11388)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A2D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A2D40u, 0x2F2064u, 0x2F206Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F206Cu;
label_2f206c:
    // 0x2f206c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x2f206cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2f2070:
    // 0x2f2070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f2070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f2074:
    // 0x2f2074: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x2f2074u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2f2078:
    // 0x2f2078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f2078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2f207c:
    // 0x2f207c: 0x3e00008  jr          $ra
label_2f2080:
    if (ctx->pc == 0x2F2080u) {
        ctx->pc = 0x2F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F207Cu;
        // 0x2f2080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F2084u;
        goto label_2f2084;
    }
    ctx->pc = 0x2F207Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F207Cu;
        // 0x2f2080: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F207Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2084u;
label_2f2084:
    // 0x2f2084: 0x0  nop
    ctx->pc = 0x2f2084u;
    // NOP
    ctx->pc = 0x2f2088u;
}
