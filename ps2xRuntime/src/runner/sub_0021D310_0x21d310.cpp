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

// Function: sub_0021D310
// Address: 0x21d310 - 0x21d3e8
void sub_0021D310_0x21d310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021D310_0x21d310");
#endif

    switch (ctx->pc) {
        case 0x21d330u: goto label_21d330;
        case 0x21d338u: goto label_21d338;
        case 0x21d344u: goto label_21d344;
        case 0x21d364u: goto label_21d364;
        case 0x21d374u: goto label_21d374;
        case 0x21d380u: goto label_21d380;
        case 0x21d388u: goto label_21d388;
        case 0x21d3a0u: goto label_21d3a0;
        case 0x21d3a8u: goto label_21d3a8;
        case 0x21d3c4u: goto label_21d3c4;
        default: break;
    }

    ctx->pc = 0x21d310u;

    // 0x21d310: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x21d310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x21d314: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x21d314u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x21d318: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21d318u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d31c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21d31cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21d320: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x21d320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x21d324: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21d324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x21d328: 0xc087502  jal         func_21D408
    ctx->pc = 0x21D328u;
    SET_GPR_U32(ctx, 31, 0x21D330u);
    ctx->pc = 0x21D32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D328u;
    // 0x21d32c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x21D328u, 0x21D330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D330u;
label_21d330:
    // 0x21d330: 0xc0a2a86  jal         func_28AA18
    ctx->pc = 0x21D330u;
    SET_GPR_U32(ctx, 31, 0x21D338u);
    ctx->pc = 0x21D334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D330u;
    // 0x21d334: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28AA18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28AA18u, 0x21D330u, 0x21D338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D338u;
label_21d338:
    // 0x21d338: 0x8e1200cc  lw          $s2, 0xCC($s0)
    ctx->pc = 0x21d338u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 204)));
    // 0x21d33c: 0xc08a200  jal         func_228800
    ctx->pc = 0x21D33Cu;
    SET_GPR_U32(ctx, 31, 0x21D344u);
    ctx->pc = 0x21D340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D33Cu;
    // 0x21d340: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x21D33Cu, 0x21D344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D344u;
label_21d344:
    // 0x21d344: 0x94450116  lhu         $a1, 0x116($v0)
    ctx->pc = 0x21d344u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 278)));
    // 0x21d348: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d34c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x21d34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x21d350: 0xa4450146  sh          $a1, 0x146($v0)
    ctx->pc = 0x21d350u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 326), (uint16_t)GPR_U32(ctx, 5));
    // 0x21d354: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x21d354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x21d358: 0x94620146  lhu         $v0, 0x146($v1)
    ctx->pc = 0x21d358u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 326)));
    // 0x21d35c: 0xc088c1a  jal         func_223068
    ctx->pc = 0x21D35Cu;
    SET_GPR_U32(ctx, 31, 0x21D364u);
    ctx->pc = 0x21D360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D35Cu;
    // 0x21d360: 0xa4620144  sh          $v0, 0x144($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 324), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223068u, 0x21D35Cu, 0x21D364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D364u;
label_21d364:
    // 0x21d364: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x21d364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x21d368: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d36c: 0xc088c62  jal         func_223188
    ctx->pc = 0x21D36Cu;
    SET_GPR_U32(ctx, 31, 0x21D374u);
    ctx->pc = 0x21D370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D36Cu;
    // 0x21d370: 0xa4620148  sh          $v0, 0x148($v1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 3), 328), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x223188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x223188u, 0x21D36Cu, 0x21D374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D374u;
label_21d374:
    // 0x21d374: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x21d374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x21d378: 0xa462014a  sh          $v0, 0x14A($v1)
    ctx->pc = 0x21d378u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 330), (uint16_t)GPR_U32(ctx, 2));
    // 0x21d37c: 0x0  nop
    ctx->pc = 0x21d37cu;
    // NOP
label_21d380:
    // 0x21d380: 0xc08a200  jal         func_228800
    ctx->pc = 0x21D380u;
    SET_GPR_U32(ctx, 31, 0x21D388u);
    ctx->pc = 0x21D384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D380u;
    // 0x21d384: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x21D380u, 0x21D388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D388u;
label_21d388:
    // 0x21d388: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x21d388u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x21d38c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d38cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d390: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d394: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d394u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d398: 0xc095178  jal         func_2545E0
    ctx->pc = 0x21D398u;
    SET_GPR_U32(ctx, 31, 0x21D3A0u);
    ctx->pc = 0x21D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D398u;
    // 0x21d39c: 0xc44c0000  lwc1        $f12, 0x0($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2545E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2545E0u, 0x21D398u, 0x21D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3A0u;
label_21d3a0:
    // 0x21d3a0: 0xc08a200  jal         func_228800
    ctx->pc = 0x21D3A0u;
    SET_GPR_U32(ctx, 31, 0x21D3A8u);
    ctx->pc = 0x21D3A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3A0u;
    // 0x21d3a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228800u, 0x21D3A0u, 0x21D3A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3A8u;
label_21d3a8:
    // 0x21d3a8: 0x111840  sll         $v1, $s1, 1
    ctx->pc = 0x21d3a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
    // 0x21d3ac: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x21d3acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x21d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x21d3b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21d3b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21d3b8: 0x944600b8  lhu         $a2, 0xB8($v0)
    ctx->pc = 0x21d3b8u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
    // 0x21d3bc: 0xc09523c  jal         func_2548F0
    ctx->pc = 0x21D3BCu;
    SET_GPR_U32(ctx, 31, 0x21D3C4u);
    ctx->pc = 0x21D3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21D3BCu;
    // 0x21d3c0: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2548F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2548F0u, 0x21D3BCu, 0x21D3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21D3C4u;
label_21d3c4:
    // 0x21d3c4: 0x2e22002d  sltiu       $v0, $s1, 0x2D
    ctx->pc = 0x21d3c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)45) ? 1 : 0);
    // 0x21d3c8: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x21D3C8u;
    {
        const bool branch_taken_0x21d3c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21D3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3C8u;
        // 0x21d3cc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21d3c8) {
            ctx->pc = 0x21D380u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21d380;
        }
    }
    ctx->pc = 0x21D3D0u;
    // 0x21d3d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x21d3d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21d3d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21d3d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21d3d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x21d3d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x21D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21D3DCu;
        // 0x21d3e0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21D3E4u;
    // 0x21d3e4: 0x0  nop
    ctx->pc = 0x21d3e4u;
    // NOP
    ctx->pc = 0x21d3e8u;
}
