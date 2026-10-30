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

// Function: sub_002EF8C0
// Address: 0x2ef8c0 - 0x2ef980
void sub_002EF8C0_0x2ef8c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EF8C0_0x2ef8c0");
#endif

    switch (ctx->pc) {
        case 0x2ef8c0u: goto label_2ef8c0;
        case 0x2ef8c4u: goto label_2ef8c4;
        case 0x2ef8c8u: goto label_2ef8c8;
        case 0x2ef8ccu: goto label_2ef8cc;
        case 0x2ef8d0u: goto label_2ef8d0;
        case 0x2ef8d4u: goto label_2ef8d4;
        case 0x2ef8d8u: goto label_2ef8d8;
        case 0x2ef8dcu: goto label_2ef8dc;
        case 0x2ef8e0u: goto label_2ef8e0;
        case 0x2ef8e4u: goto label_2ef8e4;
        case 0x2ef8e8u: goto label_2ef8e8;
        case 0x2ef8ecu: goto label_2ef8ec;
        case 0x2ef8f0u: goto label_2ef8f0;
        case 0x2ef8f4u: goto label_2ef8f4;
        case 0x2ef8f8u: goto label_2ef8f8;
        case 0x2ef8fcu: goto label_2ef8fc;
        case 0x2ef900u: goto label_2ef900;
        case 0x2ef904u: goto label_2ef904;
        case 0x2ef908u: goto label_2ef908;
        case 0x2ef90cu: goto label_2ef90c;
        case 0x2ef910u: goto label_2ef910;
        case 0x2ef914u: goto label_2ef914;
        case 0x2ef918u: goto label_2ef918;
        case 0x2ef91cu: goto label_2ef91c;
        case 0x2ef920u: goto label_2ef920;
        case 0x2ef924u: goto label_2ef924;
        case 0x2ef928u: goto label_2ef928;
        case 0x2ef92cu: goto label_2ef92c;
        case 0x2ef930u: goto label_2ef930;
        case 0x2ef934u: goto label_2ef934;
        case 0x2ef938u: goto label_2ef938;
        case 0x2ef93cu: goto label_2ef93c;
        case 0x2ef940u: goto label_2ef940;
        case 0x2ef944u: goto label_2ef944;
        case 0x2ef948u: goto label_2ef948;
        case 0x2ef94cu: goto label_2ef94c;
        case 0x2ef950u: goto label_2ef950;
        case 0x2ef954u: goto label_2ef954;
        case 0x2ef958u: goto label_2ef958;
        case 0x2ef95cu: goto label_2ef95c;
        case 0x2ef960u: goto label_2ef960;
        case 0x2ef964u: goto label_2ef964;
        case 0x2ef968u: goto label_2ef968;
        case 0x2ef96cu: goto label_2ef96c;
        case 0x2ef970u: goto label_2ef970;
        case 0x2ef974u: goto label_2ef974;
        case 0x2ef978u: goto label_2ef978;
        case 0x2ef97cu: goto label_2ef97c;
        default: break;
    }

    ctx->pc = 0x2ef8c0u;

label_2ef8c0:
    // 0x2ef8c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ef8c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2ef8c4:
    // 0x2ef8c4: 0x3c0140c9  lui         $at, 0x40C9
    ctx->pc = 0x2ef8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16585 << 16));
label_2ef8c8:
    // 0x2ef8c8: 0x34210fdb  ori         $at, $at, 0xFDB
    ctx->pc = 0x2ef8c8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4059);
label_2ef8cc:
    // 0x2ef8cc: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x2ef8ccu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ef8d0:
    // 0x2ef8d0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ef8d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ef8d4:
    // 0x2ef8d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ef8d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8d8:
    // 0x2ef8d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2ef8d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2ef8dc:
    // 0x2ef8dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ef8dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ef8e0:
    // 0x2ef8e0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2ef8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_2ef8e4:
    // 0x2ef8e4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef8e8:
    // 0x2ef8e8: 0xac60021c  sw          $zero, 0x21C($v1)
    ctx->pc = 0x2ef8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 540), GPR_U32(ctx, 0));
label_2ef8ec:
    // 0x2ef8ec: 0x8c700000  lw          $s0, 0x0($v1)
    ctx->pc = 0x2ef8ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ef8f0:
    // 0x2ef8f0: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ef8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef8f4:
    // 0x2ef8f4: 0xa0400265  sb          $zero, 0x265($v0)
    ctx->pc = 0x2ef8f4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 613), (uint8_t)GPR_U32(ctx, 0));
label_2ef8f8:
    // 0x2ef8f8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2ef8f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef8fc:
    // 0x2ef8fc: 0xe460012c  swc1        $f0, 0x12C($v1)
    ctx->pc = 0x2ef8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 300), bits); }
label_2ef900:
    // 0x2ef900: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ef900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef904:
    // 0x2ef904: 0xa040011e  sb          $zero, 0x11E($v0)
    ctx->pc = 0x2ef904u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 286), (uint8_t)GPR_U32(ctx, 0));
label_2ef908:
    // 0x2ef908: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2ef908u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ef90c:
    // 0x2ef90c: 0xc0a22c6  jal         func_288B18
label_2ef910:
    if (ctx->pc == 0x2EF910u) {
        ctx->pc = 0x2EF910u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF90Cu;
        // 0x2ef910: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF914u;
        goto label_2ef914;
    }
    ctx->pc = 0x2EF90Cu;
    SET_GPR_U32(ctx, 31, 0x2EF914u);
    ctx->pc = 0x2EF910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF90Cu;
    // 0x2ef910: 0x248400a0  addiu       $a0, $a0, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x288B18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288B18u, 0x2EF90Cu, 0x2EF914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF914u;
label_2ef914:
    // 0x2ef914: 0xde0200e0  ld          $v0, 0xE0($s0)
    ctx->pc = 0x2ef914u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 224)));
label_2ef918:
    // 0x2ef918: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x2ef918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2ef91c:
    // 0x2ef91c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2ef91cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2ef920:
    // 0x2ef920: 0x24070200  addiu       $a3, $zero, 0x200
    ctx->pc = 0x2ef920u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2ef924:
    // 0x2ef924: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2ef924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2ef928:
    // 0x2ef928: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2ef928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ef92c:
    // 0x2ef92c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x2ef92cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_2ef930:
    // 0x2ef930: 0x3c014e6e  lui         $at, 0x4E6E
    ctx->pc = 0x2ef930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20078 << 16));
label_2ef934:
    // 0x2ef934: 0x34216b28  ori         $at, $at, 0x6B28
    ctx->pc = 0x2ef934u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)27432);
label_2ef938:
    // 0x2ef938: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x2ef938u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ef93c:
    // 0x2ef93c: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x2ef93cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
label_2ef940:
    // 0x2ef940: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2ef940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2ef944:
    // 0x2ef944: 0xfe0200e0  sd          $v0, 0xE0($s0)
    ctx->pc = 0x2ef944u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 224), GPR_U64(ctx, 2));
label_2ef948:
    // 0x2ef948: 0x846400e0  lh          $a0, 0xE0($v1)
    ctx->pc = 0x2ef948u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 224)));
label_2ef94c:
    // 0x2ef94c: 0x8c6200e4  lw          $v0, 0xE4($v1)
    ctx->pc = 0x2ef94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 228)));
label_2ef950:
    // 0x2ef950: 0x40f809  jalr        $v0
label_2ef954:
    if (ctx->pc == 0x2EF954u) {
        ctx->pc = 0x2EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF950u;
        // 0x2ef954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF958u;
        goto label_2ef958;
    }
    ctx->pc = 0x2EF950u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2EF958u);
        ctx->pc = 0x2EF954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF950u;
        // 0x2ef954: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF950u, 0x2EF958u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2EF958u;
label_2ef958:
    // 0x2ef958: 0xa2000284  sb          $zero, 0x284($s0)
    ctx->pc = 0x2ef958u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 644), (uint8_t)GPR_U32(ctx, 0));
label_2ef95c:
    // 0x2ef95c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ef95cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ef960:
    // 0x2ef960: 0xc0bbe96  jal         func_2EFA58
label_2ef964:
    if (ctx->pc == 0x2EF964u) {
        ctx->pc = 0x2EF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF960u;
        // 0x2ef964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF968u;
        goto label_2ef968;
    }
    ctx->pc = 0x2EF960u;
    SET_GPR_U32(ctx, 31, 0x2EF968u);
    ctx->pc = 0x2EF964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EF960u;
    // 0x2ef964: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EFA58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EFA58u, 0x2EF960u, 0x2EF968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2EF968u;
label_2ef968:
    // 0x2ef968: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x2ef968u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ef96c:
    // 0x2ef96c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ef96cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ef970:
    // 0x2ef970: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2ef970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2ef974:
    // 0x2ef974: 0x3e00008  jr          $ra
label_2ef978:
    if (ctx->pc == 0x2EF978u) {
        ctx->pc = 0x2EF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF974u;
        // 0x2ef978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2EF97Cu;
        goto label_2ef97c;
    }
    ctx->pc = 0x2EF974u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EF978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EF974u;
        // 0x2ef978: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EF974u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EF97Cu;
label_2ef97c:
    // 0x2ef97c: 0x0  nop
    ctx->pc = 0x2ef97cu;
    // NOP
    ctx->pc = 0x2ef980u;
}
