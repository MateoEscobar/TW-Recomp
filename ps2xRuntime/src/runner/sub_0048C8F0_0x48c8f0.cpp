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

// Function: sub_0048C8F0
// Address: 0x48c8f0 - 0x48ca60
void sub_0048C8F0_0x48c8f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0048C8F0_0x48c8f0");
#endif

    switch (ctx->pc) {
        case 0x48c914u: goto label_48c914;
        case 0x48c988u: goto label_48c988;
        case 0x48c9bcu: goto label_48c9bc;
        case 0x48c9d8u: goto label_48c9d8;
        case 0x48c9ecu: goto label_48c9ec;
        case 0x48c9f0u: goto label_48c9f0;
        case 0x48ca44u: goto label_48ca44;
        default: break;
    }

    ctx->pc = 0x48c8f0u;

    // 0x48c8f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x48c8f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x48c8f4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x48c8f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x48c8f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x48c8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x48c8fc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x48c8fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c900: 0x30b100ff  andi        $s1, $a1, 0xFF
    ctx->pc = 0x48c900u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x48c904: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x48c904u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x48c908: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x48c908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c90c: 0xc1233da  jal         func_48CF68
    ctx->pc = 0x48C90Cu;
    SET_GPR_U32(ctx, 31, 0x48C914u);
    ctx->pc = 0x48C910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C90Cu;
    // 0x48c910: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48CF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CF68u, 0x48C90Cu, 0x48C914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C914u;
label_48c914:
    // 0x48c914: 0x8f85898c  lw          $a1, -0x7674($gp)
    ctx->pc = 0x48c914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936972)));
    // 0x48c918: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x48c918u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x48c91c: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x48c91cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x48c920: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x48c920u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x48c924: 0x34631100  ori         $v1, $v1, 0x1100
    ctx->pc = 0x48c924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4352);
    // 0x48c928: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x48c928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x48c92c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48c92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48c930: 0x34420017  ori         $v0, $v0, 0x17
    ctx->pc = 0x48c930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)23);
    // 0x48c934: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x48c934u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x48c938: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x48c938u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x48c93c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x48c93cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x48c940: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x48c940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x48c944: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x48c944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x48c948: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x48c948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x48c94c: 0x34428001  ori         $v0, $v0, 0x8001
    ctx->pc = 0x48c94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
    // 0x48c950: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x48c950u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x48c954: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x48c954u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x48c958: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x48c958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x48c95c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x48c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x48c960: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x48c960u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c964: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x48c964u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x48c968: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x48c968u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x48c96c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x48c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x48c970: 0x3c021300  lui         $v0, 0x1300
    ctx->pc = 0x48c970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4864 << 16));
    // 0x48c974: 0x70432389  pcpyld      $a0, $v0, $v1
    ctx->pc = 0x48c974u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x48c978: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x48c978u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x48c97c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x48c97cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x48c980: 0x70632389  pcpyld      $a0, $v1, $v1
    ctx->pc = 0x48c980u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 3)));
    // 0x48c984: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x48c984u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_48c988:
    // 0x48c988: 0x7ca40000  sq          $a0, 0x0($a1)
    ctx->pc = 0x48c988u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 4));
    // 0x48c98c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48c98cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48c990: 0x2c620014  sltiu       $v0, $v1, 0x14
    ctx->pc = 0x48c990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x48c994: 0x0  nop
    ctx->pc = 0x48c994u;
    // NOP
    // 0x48c998: 0x0  nop
    ctx->pc = 0x48c998u;
    // NOP
    // 0x48c99c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48C99Cu;
    {
        const bool branch_taken_0x48c99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x48C9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C99Cu;
        // 0x48c9a0: 0x24a50010  addiu       $a1, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c99c) {
            ctx->pc = 0x48C988u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c988;
        }
    }
    ctx->pc = 0x48C9A4u;
    // 0x48c9a4: 0xaf85898c  sw          $a1, -0x7674($gp)
    ctx->pc = 0x48c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936972), GPR_U32(ctx, 5));
    // 0x48c9a8: 0x93828a08  lbu         $v0, -0x75F8($gp)
    ctx->pc = 0x48c9a8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937096)));
    // 0x48c9ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48C9ACu;
    {
        const bool branch_taken_0x48c9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C9ACu;
        // 0x48c9b0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c9ac) {
            ctx->pc = 0x48C9C0u;
            goto label_48c9c0;
        }
    }
    ctx->pc = 0x48C9B4u;
    // 0x48c9b4: 0xc123142  jal         func_48C508
    ctx->pc = 0x48C9B4u;
    SET_GPR_U32(ctx, 31, 0x48C9BCu);
    ctx->pc = 0x48C508u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C508u, 0x48C9B4u, 0x48C9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C9BCu;
label_48c9bc:
    // 0x48c9bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x48c9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_48c9c0:
    // 0x48c9c0: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x48c9c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x48c9c4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x48C9C4u;
    {
        const bool branch_taken_0x48c9c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C9C4u;
        // 0x48c9c8: 0xa3828a08  sb          $v0, -0x75F8($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294937096), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c9c4) {
            ctx->pc = 0x48C9E0u;
            goto label_48c9e0;
        }
    }
    ctx->pc = 0x48C9CCu;
    // 0x48c9cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c9ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c9d0: 0xc1231de  jal         func_48C778
    ctx->pc = 0x48C9D0u;
    SET_GPR_U32(ctx, 31, 0x48C9D8u);
    ctx->pc = 0x48C9D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C9D0u;
    // 0x48c9d4: 0x24050041  addiu       $a1, $zero, 0x41 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C778u, 0x48C9D0u, 0x48C9D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C9D8u;
label_48c9d8:
    // 0x48c9d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x48C9D8u;
    {
        const bool branch_taken_0x48c9d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x48C9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48C9D8u;
        // 0x48c9dc: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x48c9d8) {
            ctx->pc = 0x48C9F0u;
            goto label_48c9f0;
        }
    }
    ctx->pc = 0x48C9E0u;
label_48c9e0:
    // 0x48c9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x48c9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48c9e4: 0xc1231de  jal         func_48C778
    ctx->pc = 0x48C9E4u;
    SET_GPR_U32(ctx, 31, 0x48C9ECu);
    ctx->pc = 0x48C9E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48C9E4u;
    // 0x48c9e8: 0x24050040  addiu       $a1, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48C778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48C778u, 0x48C9E4u, 0x48C9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48C9ECu;
label_48c9ec:
    // 0x48c9ec: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x48c9ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_48c9f0:
    // 0x48c9f0: 0x42000039  di
    ctx->pc = 0x48c9f0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x48c9f4: 0x40f  sync.p
    ctx->pc = 0x48c9f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x48c9f8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x48c9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x48c9fc: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x48c9fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x48ca00: 0x0  nop
    ctx->pc = 0x48ca00u;
    // NOP
    // 0x48ca04: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x48CA04u;
    {
        const bool branch_taken_0x48ca04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ca04) {
            ctx->pc = 0x48C9F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_48c9f0;
        }
    }
    ctx->pc = 0x48CA0Cu;
    // 0x48ca0c: 0x9383899a  lbu         $v1, -0x7666($gp)
    ctx->pc = 0x48ca0cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936986)));
    // 0x48ca10: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x48ca10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x48ca14: 0xa383899a  sb          $v1, -0x7666($gp)
    ctx->pc = 0x48ca14u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294936986), (uint8_t)GPR_U32(ctx, 3));
    // 0x48ca18: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48ca18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48ca1c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x48CA1Cu;
    {
        const bool branch_taken_0x48ca1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ca1c) {
            ctx->pc = 0x48CA44u;
            goto label_48ca44;
        }
    }
    ctx->pc = 0x48CA24u;
    // 0x48ca24: 0x9382899b  lbu         $v0, -0x7665($gp)
    ctx->pc = 0x48ca24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294936987)));
    // 0x48ca28: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x48CA28u;
    {
        const bool branch_taken_0x48ca28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ca28) {
            ctx->pc = 0x48CA44u;
            goto label_48ca44;
        }
    }
    ctx->pc = 0x48CA30u;
    // 0x48ca30: 0x938289f8  lbu         $v0, -0x7608($gp)
    ctx->pc = 0x48ca30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294937080)));
    // 0x48ca34: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x48CA34u;
    {
        const bool branch_taken_0x48ca34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x48ca34) {
            ctx->pc = 0x48CA44u;
            goto label_48ca44;
        }
    }
    ctx->pc = 0x48CA3Cu;
    // 0x48ca3c: 0xc122dc2  jal         func_48B708
    ctx->pc = 0x48CA3Cu;
    SET_GPR_U32(ctx, 31, 0x48CA44u);
    ctx->pc = 0x48CA40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x48CA3Cu;
    // 0x48ca40: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x48B708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48B708u, 0x48CA3Cu, 0x48CA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x48CA44u;
label_48ca44:
    // 0x48ca44: 0x42000038  ei
    ctx->pc = 0x48ca44u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x48ca48: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x48ca48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48ca4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x48ca4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x48ca50: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x48ca50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x48ca54: 0x3e00008  jr          $ra
    ctx->pc = 0x48CA54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x48CA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x48CA54u;
        // 0x48ca58: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48CA54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48CA5Cu;
    // 0x48ca5c: 0x0  nop
    ctx->pc = 0x48ca5cu;
    // NOP
    ctx->pc = 0x48ca60u;
}
