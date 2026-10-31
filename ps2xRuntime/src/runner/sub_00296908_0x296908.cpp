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

// Function: sub_00296908
// Address: 0x296908 - 0x2969c8
void sub_00296908_0x296908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00296908_0x296908");
#endif

    switch (ctx->pc) {
        case 0x296928u: goto label_296928;
        case 0x296970u: goto label_296970;
        case 0x296990u: goto label_296990;
        case 0x296998u: goto label_296998;
        default: break;
    }

    ctx->pc = 0x296908u;

    // 0x296908: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x296908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x29690c: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29690cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296910: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x296910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x296914: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x296914u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x296918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x29691c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x29691cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296920: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x296920u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x296924: 0x0  nop
    ctx->pc = 0x296924u;
    // NOP
label_296928:
    // 0x296928: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x296928u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x29692c: 0x0  nop
    ctx->pc = 0x29692cu;
    // NOP
    // 0x296930: 0x0  nop
    ctx->pc = 0x296930u;
    // NOP
    // 0x296934: 0x0  nop
    ctx->pc = 0x296934u;
    // NOP
    // 0x296938: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x296938u;
    {
        const bool branch_taken_0x296938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29693Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296938u;
        // 0x29693c: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296938) {
            ctx->pc = 0x296928u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296928;
        }
    }
    ctx->pc = 0x296940u;
    // 0x296940: 0xa0c00014  sb          $zero, 0x14($a2)
    ctx->pc = 0x296940u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x296944: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x296944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x296948: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x296948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x29694c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29694cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x296950: 0x8c43b734  lw          $v1, -0x48CC($v0)
    ctx->pc = 0x296950u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50B734u));
    // 0x296954: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x296954u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x296958: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x296958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29695c: 0x8c620048  lw          $v0, 0x48($v1)
    ctx->pc = 0x29695cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 72)));
    // 0x296960: 0xa4c40016  sh          $a0, 0x16($a2)
    ctx->pc = 0x296960u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 22), (uint16_t)GPR_U32(ctx, 4));
    // 0x296964: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x296964u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
    // 0x296968: 0xa0c00015  sb          $zero, 0x15($a2)
    ctx->pc = 0x296968u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 21), (uint8_t)GPR_U32(ctx, 0));
    // 0x29696c: 0x0  nop
    ctx->pc = 0x29696cu;
    // NOP
label_296970:
    // 0x296970: 0xa4a80000  sh          $t0, 0x0($a1)
    ctx->pc = 0x296970u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 8));
    // 0x296974: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x296974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x296978: 0x2ce20003  sltiu       $v0, $a3, 0x3
    ctx->pc = 0x296978u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x29697c: 0x0  nop
    ctx->pc = 0x29697cu;
    // NOP
    // 0x296980: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x296980u;
    {
        const bool branch_taken_0x296980 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x296984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x296980u;
        // 0x296984: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296980) {
            ctx->pc = 0x296970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_296970;
        }
    }
    ctx->pc = 0x296988u;
    // 0x296988: 0xc0a5d78  jal         func_2975E0
    ctx->pc = 0x296988u;
    SET_GPR_U32(ctx, 31, 0x296990u);
    ctx->pc = 0x29698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296988u;
    // 0x29698c: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2975E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2975E0u, 0x296988u, 0x296990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296990u;
label_296990:
    // 0x296990: 0xc0874fa  jal         func_21D3E8
    ctx->pc = 0x296990u;
    SET_GPR_U32(ctx, 31, 0x296998u);
    ctx->pc = 0x296994u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x296990u;
    // 0x296994: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D3E8u, 0x296990u, 0x296998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x296998u;
label_296998:
    // 0x296998: 0x9043001b  lbu         $v1, 0x1B($v0)
    ctx->pc = 0x296998u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 27)));
    // 0x29699c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29699Cu;
    {
        const bool branch_taken_0x29699c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2969A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29699Cu;
        // 0x2969a0: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29699c) {
            ctx->pc = 0x2969B8u;
            goto label_2969b8;
        }
    }
    ctx->pc = 0x2969A4u;
    // 0x2969a4: 0x3c030051  lui         $v1, 0x51
    ctx->pc = 0x2969a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)81 << 16));
    // 0x2969a8: 0x3c040051  lui         $a0, 0x51
    ctx->pc = 0x2969a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)81 << 16));
    // 0x2969ac: 0xac400b08  sw          $zero, 0xB08($v0)
    ctx->pc = 0x2969acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 2824), GPR_U32(ctx, 0));
    // 0x2969b0: 0xa4600b0c  sh          $zero, 0xB0C($v1)
    ctx->pc = 0x2969b0u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510B0Cu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x510B0Cu, _value); } while (0);
    // 0x2969b4: 0xa4800b0e  sh          $zero, 0xB0E($a0)
    ctx->pc = 0x2969b4u;
    do { uint16_t _value = static_cast<uint16_t>((uint16_t)GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x510B0Eu, 2u, _value, 0u, "WRITE16", ctx); FAST_WRITE16(0x510B0Eu, _value); } while (0);
label_2969b8:
    // 0x2969b8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2969b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2969bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2969bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2969c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2969C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2969C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2969C0u;
        // 0x2969c4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2969C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2969C8u;
}
