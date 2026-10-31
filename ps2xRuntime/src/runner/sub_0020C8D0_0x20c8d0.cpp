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

// Function: sub_0020C8D0
// Address: 0x20c8d0 - 0x20c9d8
void sub_0020C8D0_0x20c8d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020C8D0_0x20c8d0");
#endif

    switch (ctx->pc) {
        case 0x20c8d0u: goto label_20c8d0;
        case 0x20c8d4u: goto label_20c8d4;
        case 0x20c8d8u: goto label_20c8d8;
        case 0x20c8dcu: goto label_20c8dc;
        case 0x20c8e0u: goto label_20c8e0;
        case 0x20c8e4u: goto label_20c8e4;
        case 0x20c8e8u: goto label_20c8e8;
        case 0x20c8ecu: goto label_20c8ec;
        case 0x20c8f0u: goto label_20c8f0;
        case 0x20c8f4u: goto label_20c8f4;
        case 0x20c8f8u: goto label_20c8f8;
        case 0x20c8fcu: goto label_20c8fc;
        case 0x20c900u: goto label_20c900;
        case 0x20c904u: goto label_20c904;
        case 0x20c908u: goto label_20c908;
        case 0x20c90cu: goto label_20c90c;
        case 0x20c910u: goto label_20c910;
        case 0x20c914u: goto label_20c914;
        case 0x20c918u: goto label_20c918;
        case 0x20c91cu: goto label_20c91c;
        case 0x20c920u: goto label_20c920;
        case 0x20c924u: goto label_20c924;
        case 0x20c928u: goto label_20c928;
        case 0x20c92cu: goto label_20c92c;
        case 0x20c930u: goto label_20c930;
        case 0x20c934u: goto label_20c934;
        case 0x20c938u: goto label_20c938;
        case 0x20c93cu: goto label_20c93c;
        case 0x20c940u: goto label_20c940;
        case 0x20c944u: goto label_20c944;
        case 0x20c948u: goto label_20c948;
        case 0x20c94cu: goto label_20c94c;
        case 0x20c950u: goto label_20c950;
        case 0x20c954u: goto label_20c954;
        case 0x20c958u: goto label_20c958;
        case 0x20c95cu: goto label_20c95c;
        case 0x20c960u: goto label_20c960;
        case 0x20c964u: goto label_20c964;
        case 0x20c968u: goto label_20c968;
        case 0x20c96cu: goto label_20c96c;
        case 0x20c970u: goto label_20c970;
        case 0x20c974u: goto label_20c974;
        case 0x20c978u: goto label_20c978;
        case 0x20c97cu: goto label_20c97c;
        case 0x20c980u: goto label_20c980;
        case 0x20c984u: goto label_20c984;
        case 0x20c988u: goto label_20c988;
        case 0x20c98cu: goto label_20c98c;
        case 0x20c990u: goto label_20c990;
        case 0x20c994u: goto label_20c994;
        case 0x20c998u: goto label_20c998;
        case 0x20c99cu: goto label_20c99c;
        case 0x20c9a0u: goto label_20c9a0;
        case 0x20c9a4u: goto label_20c9a4;
        case 0x20c9a8u: goto label_20c9a8;
        case 0x20c9acu: goto label_20c9ac;
        case 0x20c9b0u: goto label_20c9b0;
        case 0x20c9b4u: goto label_20c9b4;
        case 0x20c9b8u: goto label_20c9b8;
        case 0x20c9bcu: goto label_20c9bc;
        case 0x20c9c0u: goto label_20c9c0;
        case 0x20c9c4u: goto label_20c9c4;
        case 0x20c9c8u: goto label_20c9c8;
        case 0x20c9ccu: goto label_20c9cc;
        case 0x20c9d0u: goto label_20c9d0;
        case 0x20c9d4u: goto label_20c9d4;
        default: break;
    }

    ctx->pc = 0x20c8d0u;

label_20c8d0:
    // 0x20c8d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x20c8d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_20c8d4:
    // 0x20c8d4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x20c8d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_20c8d8:
    // 0x20c8d8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20c8d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20c8dc:
    // 0x20c8dc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20c8dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_20c8e0:
    // 0x20c8e0: 0xc06a38c  jal         func_1A8E30
label_20c8e4:
    if (ctx->pc == 0x20C8E4u) {
        ctx->pc = 0x20C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C8E0u;
        // 0x20c8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C8E8u;
        goto label_20c8e8;
    }
    ctx->pc = 0x20C8E0u;
    SET_GPR_U32(ctx, 31, 0x20C8E8u);
    ctx->pc = 0x20C8E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20C8E0u;
    // 0x20c8e4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A8E30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A8E30u, 0x20C8E0u, 0x20C8E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20C8E8u;
label_20c8e8:
    // 0x20c8e8: 0x26110078  addiu       $s1, $s0, 0x78
    ctx->pc = 0x20c8e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 120));
label_20c8ec:
    // 0x20c8ec: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20c8ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20c8f0:
    // 0x20c8f0: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x20c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_20c8f4:
    // 0x20c8f4: 0x24638778  addiu       $v1, $v1, -0x7888
    ctx->pc = 0x20c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936440));
label_20c8f8:
    // 0x20c8f8: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x20c8f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_20c8fc:
    // 0x20c8fc: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x20c8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_20c900:
    // 0x20c900: 0x26040050  addiu       $a0, $s0, 0x50
    ctx->pc = 0x20c900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
label_20c904:
    // 0x20c904: 0x24428510  addiu       $v0, $v0, -0x7AF0
    ctx->pc = 0x20c904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935824));
label_20c908:
    // 0x20c908: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x20c908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
label_20c90c:
    // 0x20c90c: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x20c90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_20c910:
    // 0x20c910: 0x2463cc88  addiu       $v1, $v1, -0x3378
    ctx->pc = 0x20c910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954120));
label_20c914:
    // 0x20c914: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x20c914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_20c918:
    // 0x20c918: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x20c918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_20c91c:
    // 0x20c91c: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x20c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
label_20c920:
    // 0x20c920: 0x3c050056  lui         $a1, 0x56
    ctx->pc = 0x20c920u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)86 << 16));
label_20c924:
    // 0x20c924: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20c924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20c928:
    // 0x20c928: 0x3c080056  lui         $t0, 0x56
    ctx->pc = 0x20c928u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)86 << 16));
label_20c92c:
    // 0x20c92c: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x20c92cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
label_20c930:
    // 0x20c930: 0x3c0a0056  lui         $t2, 0x56
    ctx->pc = 0x20c930u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)86 << 16));
label_20c934:
    // 0x20c934: 0xae030088  sw          $v1, 0x88($s0)
    ctx->pc = 0x20c934u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 3));
label_20c938:
    // 0x20c938: 0x24a59348  addiu       $a1, $a1, -0x6CB8
    ctx->pc = 0x20c938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939464));
label_20c93c:
    // 0x20c93c: 0x8c4cb9c0  lw          $t4, -0x4640($v0)
    ctx->pc = 0x20c93cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949312)));
label_20c940:
    // 0x20c940: 0x25089350  addiu       $t0, $t0, -0x6CB0
    ctx->pc = 0x20c940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294939472));
label_20c944:
    // 0x20c944: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x20c944u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_20c948:
    // 0x20c948: 0x254a9378  addiu       $t2, $t2, -0x6C88
    ctx->pc = 0x20c948u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294939512));
label_20c94c:
    // 0x20c94c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x20c94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_20c950:
    // 0x20c950: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x20c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_20c954:
    // 0x20c954: 0x8d830000  lw          $v1, 0x0($t4)
    ctx->pc = 0x20c954u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 0)));
label_20c958:
    // 0x20c958: 0x24090042  addiu       $t1, $zero, 0x42
    ctx->pc = 0x20c958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_20c95c:
    // 0x20c95c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x20c95cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c960:
    // 0x20c960: 0x84640050  lh          $a0, 0x50($v1)
    ctx->pc = 0x20c960u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_20c964:
    // 0x20c964: 0x8c620054  lw          $v0, 0x54($v1)
    ctx->pc = 0x20c964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_20c968:
    // 0x20c968: 0x40f809  jalr        $v0
label_20c96c:
    if (ctx->pc == 0x20C96Cu) {
        ctx->pc = 0x20C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C968u;
        // 0x20c96c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C970u;
        goto label_20c970;
    }
    ctx->pc = 0x20C968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x20C970u);
        ctx->pc = 0x20C96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C968u;
        // 0x20c96c: 0x1842021  addu        $a0, $t4, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 12), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C968u, 0x20C970u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x20C970u;
label_20c970:
    // 0x20c970: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x20c970u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_20c974:
    // 0x20c974: 0x3c070054  lui         $a3, 0x54
    ctx->pc = 0x20c974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)84 << 16));
label_20c978:
    // 0x20c978: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x20c978u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
label_20c97c:
    // 0x20c97c: 0x3c060054  lui         $a2, 0x54
    ctx->pc = 0x20c97cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)84 << 16));
label_20c980:
    // 0x20c980: 0xa220000c  sb          $zero, 0xC($s1)
    ctx->pc = 0x20c980u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 12), (uint8_t)GPR_U32(ctx, 0));
label_20c984:
    // 0x20c984: 0x3c050054  lui         $a1, 0x54
    ctx->pc = 0x20c984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)84 << 16));
label_20c988:
    // 0x20c988: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x20c988u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_20c98c:
    // 0x20c98c: 0x24e7e7a0  addiu       $a3, $a3, -0x1860
    ctx->pc = 0x20c98cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961056));
label_20c990:
    // 0x20c990: 0x24c6e7c8  addiu       $a2, $a2, -0x1838
    ctx->pc = 0x20c990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961096));
label_20c994:
    // 0x20c994: 0x24a5e7f8  addiu       $a1, $a1, -0x1808
    ctx->pc = 0x20c994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961144));
label_20c998:
    // 0x20c998: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20c998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20c99c:
    // 0x20c99c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20c99cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c9a0:
    // 0x20c9a0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20c9a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_20c9a4:
    // 0x20c9a4: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x20c9a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
label_20c9a8:
    // 0x20c9a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x20c9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20c9ac:
    // 0x20c9ac: 0xac630008  sw          $v1, 0x8($v1)
    ctx->pc = 0x20c9acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 3));
label_20c9b0:
    // 0x20c9b0: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x20c9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_20c9b4:
    // 0x20c9b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20c9b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c9b8:
    // 0x20c9b8: 0xac84000c  sw          $a0, 0xC($a0)
    ctx->pc = 0x20c9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 4));
label_20c9bc:
    // 0x20c9bc: 0xae07006c  sw          $a3, 0x6C($s0)
    ctx->pc = 0x20c9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 108), GPR_U32(ctx, 7));
label_20c9c0:
    // 0x20c9c0: 0xae060088  sw          $a2, 0x88($s0)
    ctx->pc = 0x20c9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 6));
label_20c9c4:
    // 0x20c9c4: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x20c9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_20c9c8:
    // 0x20c9c8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20c9c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20c9cc:
    // 0x20c9cc: 0x3e00008  jr          $ra
label_20c9d0:
    if (ctx->pc == 0x20C9D0u) {
        ctx->pc = 0x20C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9CCu;
        // 0x20c9d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20C9D4u;
        goto label_20c9d4;
    }
    ctx->pc = 0x20C9CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20C9CCu;
        // 0x20c9d0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20C9CCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20C9D4u;
label_20c9d4:
    // 0x20c9d4: 0x0  nop
    ctx->pc = 0x20c9d4u;
    // NOP
    ctx->pc = 0x20c9d8u;
}
