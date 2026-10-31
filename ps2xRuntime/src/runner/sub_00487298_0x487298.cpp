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

// Function: sub_00487298
// Address: 0x487298 - 0x487320
void sub_00487298_0x487298(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00487298_0x487298");
#endif

    switch (ctx->pc) {
        case 0x4872c0u: goto label_4872c0;
        case 0x4872e0u: goto label_4872e0;
        case 0x4872f8u: goto label_4872f8;
        default: break;
    }

    ctx->pc = 0x487298u;

label_487298:
    // 0x487298: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x487298u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x48729c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x48729cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4872a0: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4872a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4872a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4872a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4872a8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4872a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4872ac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4872acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4872b0: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x4872B0u;
    {
        const bool branch_taken_0x4872b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4872B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4872B0u;
        // 0x4872b4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4872b0) {
            ctx->pc = 0x487304u;
            goto label_487304;
        }
    }
    ctx->pc = 0x4872B8u;
    // 0x4872b8: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x4872b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4872bc: 0x0  nop
    ctx->pc = 0x4872bcu;
    // NOP
label_4872c0:
    // 0x4872c0: 0x2428825  or          $s1, $s2, $v0
    ctx->pc = 0x4872c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 18) | GPR_U64(ctx, 2));
    // 0x4872c4: 0x32230004  andi        $v1, $s1, 0x4
    ctx->pc = 0x4872c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x4872c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4872C8u;
    {
        const bool branch_taken_0x4872c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4872CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4872C8u;
        // 0x4872cc: 0x26040050  addiu       $a0, $s0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4872c8) {
            ctx->pc = 0x4872ECu;
            goto label_4872ec;
        }
    }
    ctx->pc = 0x4872D0u;
    // 0x4872d0: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x4872d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x4872d4: 0x26050010  addiu       $a1, $s0, 0x10
    ctx->pc = 0x4872d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x4872d8: 0xc11f4a0  jal         func_47D280
    ctx->pc = 0x4872D8u;
    SET_GPR_U32(ctx, 31, 0x4872E0u);
    ctx->pc = 0x4872DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4872D8u;
    // 0x4872dc: 0x24c60050  addiu       $a2, $a2, 0x50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D280u, 0x4872D8u, 0x4872E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4872E0u;
label_4872e0:
    // 0x4872e0: 0x92030003  lbu         $v1, 0x3($s0)
    ctx->pc = 0x4872e0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x4872e4: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x4872e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
    // 0x4872e8: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x4872e8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_4872ec:
    // 0x4872ec: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x4872ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x4872f0: 0xc121ca6  jal         func_487298
    ctx->pc = 0x4872F0u;
    SET_GPR_U32(ctx, 31, 0x4872F8u);
    ctx->pc = 0x4872F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4872F0u;
    // 0x4872f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x487298u;
    goto label_487298;
    ctx->pc = 0x4872F8u;
label_4872f8:
    // 0x4872f8: 0x8e10009c  lw          $s0, 0x9C($s0)
    ctx->pc = 0x4872f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    // 0x4872fc: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x4872FCu;
    {
        const bool branch_taken_0x4872fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x4872fc) {
            ctx->pc = 0x487300u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4872FCu;
            // 0x487300: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4872C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4872c0;
        }
    }
    ctx->pc = 0x487304u;
label_487304:
    // 0x487304: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x487304u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x487308: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x487308u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x48730c: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x48730cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x487310: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x487310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x487314: 0x3e00008  jr          $ra
    ctx->pc = 0x487314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x487318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x487314u;
        // 0x487318: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x487314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x48731Cu;
    // 0x48731c: 0x0  nop
    ctx->pc = 0x48731cu;
    // NOP
    ctx->pc = 0x487320u;
}
