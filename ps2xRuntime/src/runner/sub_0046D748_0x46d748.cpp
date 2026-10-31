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

// Function: sub_0046D748
// Address: 0x46d748 - 0x46d828
void sub_0046D748_0x46d748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046D748_0x46d748");
#endif

    switch (ctx->pc) {
        case 0x46d77cu: goto label_46d77c;
        case 0x46d794u: goto label_46d794;
        default: break;
    }

    ctx->pc = 0x46d748u;

    // 0x46d748: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x46d748u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x46d74c: 0x8f8288ec  lw          $v0, -0x7714($gp)
    ctx->pc = 0x46d74cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936812)));
    // 0x46d750: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x46d750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x46d754: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x46d754u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x46d758: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x46d758u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d75c: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x46D75Cu;
    {
        const bool branch_taken_0x46d75c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D75Cu;
        // 0x46d760: 0xaf8588e8  sw          $a1, -0x7718($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294936808), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d75c) {
            ctx->pc = 0x46D7A0u;
            goto label_46d7a0;
        }
    }
    ctx->pc = 0x46D764u;
    // 0x46d764: 0x3c070004  lui         $a3, 0x4
    ctx->pc = 0x46d764u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4 << 16));
    // 0x46d768: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x46d768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x46d76c: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x46d76cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x46d770: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x46d770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46d774: 0xc11f604  jal         func_47D810
    ctx->pc = 0x46D774u;
    SET_GPR_U32(ctx, 31, 0x46D77Cu);
    ctx->pc = 0x46D778u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D774u;
    // 0x46d778: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47D810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D810u, 0x46D774u, 0x46D77Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D77Cu;
label_46d77c:
    // 0x46d77c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x46D77Cu;
    {
        const bool branch_taken_0x46d77c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x46D780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D77Cu;
        // 0x46d780: 0xaf828500  sw          $v0, -0x7B00($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935808), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d77c) {
            ctx->pc = 0x46D7A0u;
            goto label_46d7a0;
        }
    }
    ctx->pc = 0x46D784u;
    // 0x46d784: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x46D784u;
    {
        const bool branch_taken_0x46d784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x46d784) {
            ctx->pc = 0x46D788u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x46D784u;
            // 0x46d788: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x46D814u;
            goto label_46d814;
        }
    }
    ctx->pc = 0x46D78Cu;
    // 0x46d78c: 0xc11f74a  jal         func_47DD28
    ctx->pc = 0x46D78Cu;
    SET_GPR_U32(ctx, 31, 0x46D794u);
    ctx->pc = 0x46D790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x46D78Cu;
    // 0x46d790: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47DD28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47DD28u, 0x46D78Cu, 0x46D794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46D794u;
label_46d794:
    // 0x46d794: 0xaf808500  sw          $zero, -0x7B00($gp)
    ctx->pc = 0x46d794u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935808), GPR_U32(ctx, 0));
    // 0x46d798: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x46D798u;
    {
        const bool branch_taken_0x46d798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x46D79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D798u;
        // 0x46d79c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x46d798) {
            ctx->pc = 0x46D814u;
            goto label_46d814;
        }
    }
    ctx->pc = 0x46D7A0u;
label_46d7a0:
    // 0x46d7a0: 0x8f8388e8  lw          $v1, -0x7718($gp)
    ctx->pc = 0x46d7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936808)));
    // 0x46d7a4: 0x3c020071  lui         $v0, 0x71
    ctx->pc = 0x46d7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)113 << 16));
    // 0x46d7a8: 0x2442ad18  addiu       $v0, $v0, -0x52E8
    ctx->pc = 0x46d7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946072));
    // 0x46d7ac: 0x8f8488ec  lw          $a0, -0x7714($gp)
    ctx->pc = 0x46d7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936812)));
    // 0x46d7b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x46d7b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46d7b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x46d7b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x46d7b8: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x46d7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x46d7bc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x46d7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x46d7c0: 0xa062002d  sb          $v0, 0x2D($v1)
    ctx->pc = 0x46d7c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 45), (uint8_t)GPR_U32(ctx, 2));
    // 0x46d7c4: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x46d7c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46d7c8: 0xaf8488ec  sw          $a0, -0x7714($gp)
    ctx->pc = 0x46d7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936812), GPR_U32(ctx, 4));
    // 0x46d7cc: 0x240b0002  addiu       $t3, $zero, 0x2
    ctx->pc = 0x46d7ccu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x46d7d0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x46d7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x46d7d4: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x46d7d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x46d7d8: 0x24080006  addiu       $t0, $zero, 0x6
    ctx->pc = 0x46d7d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x46d7dc: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x46d7dcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x46d7e0: 0xa0660008  sb          $a2, 0x8($v1)
    ctx->pc = 0x46d7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 8), (uint8_t)GPR_U32(ctx, 6));
    // 0x46d7e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x46d7e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46d7e8: 0xa067000a  sb          $a3, 0xA($v1)
    ctx->pc = 0x46d7e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 10), (uint8_t)GPR_U32(ctx, 7));
    // 0x46d7ec: 0xa0680018  sb          $t0, 0x18($v1)
    ctx->pc = 0x46d7ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 24), (uint8_t)GPR_U32(ctx, 8));
    // 0x46d7f0: 0xa06a0028  sb          $t2, 0x28($v1)
    ctx->pc = 0x46d7f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 40), (uint8_t)GPR_U32(ctx, 10));
    // 0x46d7f4: 0xa0690029  sb          $t1, 0x29($v1)
    ctx->pc = 0x46d7f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 41), (uint8_t)GPR_U32(ctx, 9));
    // 0x46d7f8: 0xa065002b  sb          $a1, 0x2B($v1)
    ctx->pc = 0x46d7f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 43), (uint8_t)GPR_U32(ctx, 5));
    // 0x46d7fc: 0xa06b002c  sb          $t3, 0x2C($v1)
    ctx->pc = 0x46d7fcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 11));
    // 0x46d800: 0xa4650000  sh          $a1, 0x0($v1)
    ctx->pc = 0x46d800u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x46d804: 0xa06a0009  sb          $t2, 0x9($v1)
    ctx->pc = 0x46d804u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 9), (uint8_t)GPR_U32(ctx, 10));
    // 0x46d808: 0xa065000c  sb          $a1, 0xC($v1)
    ctx->pc = 0x46d808u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12), (uint8_t)GPR_U32(ctx, 5));
    // 0x46d80c: 0xa06b0010  sb          $t3, 0x10($v1)
    ctx->pc = 0x46d80cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 16), (uint8_t)GPR_U32(ctx, 11));
    // 0x46d810: 0xa060002a  sb          $zero, 0x2A($v1)
    ctx->pc = 0x46d810u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 0));
label_46d814:
    // 0x46d814: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x46d814u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46d818: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x46d818u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46d81c: 0x3e00008  jr          $ra
    ctx->pc = 0x46D81Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x46D820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x46D81Cu;
        // 0x46d820: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46D81Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46D824u;
    // 0x46d824: 0x0  nop
    ctx->pc = 0x46d824u;
    // NOP
    ctx->pc = 0x46d828u;
}
