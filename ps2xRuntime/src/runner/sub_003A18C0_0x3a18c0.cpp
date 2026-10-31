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

// Function: sub_003A18C0
// Address: 0x3a18c0 - 0x3a1940
void sub_003A18C0_0x3a18c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003A18C0_0x3a18c0");
#endif

    switch (ctx->pc) {
        case 0x3a18c0u: goto label_3a18c0;
        case 0x3a18c4u: goto label_3a18c4;
        case 0x3a18c8u: goto label_3a18c8;
        case 0x3a18ccu: goto label_3a18cc;
        case 0x3a18d0u: goto label_3a18d0;
        case 0x3a18d4u: goto label_3a18d4;
        case 0x3a18d8u: goto label_3a18d8;
        case 0x3a18dcu: goto label_3a18dc;
        case 0x3a18e0u: goto label_3a18e0;
        case 0x3a18e4u: goto label_3a18e4;
        case 0x3a18e8u: goto label_3a18e8;
        case 0x3a18ecu: goto label_3a18ec;
        case 0x3a18f0u: goto label_3a18f0;
        case 0x3a18f4u: goto label_3a18f4;
        case 0x3a18f8u: goto label_3a18f8;
        case 0x3a18fcu: goto label_3a18fc;
        case 0x3a1900u: goto label_3a1900;
        case 0x3a1904u: goto label_3a1904;
        case 0x3a1908u: goto label_3a1908;
        case 0x3a190cu: goto label_3a190c;
        case 0x3a1910u: goto label_3a1910;
        case 0x3a1914u: goto label_3a1914;
        case 0x3a1918u: goto label_3a1918;
        case 0x3a191cu: goto label_3a191c;
        case 0x3a1920u: goto label_3a1920;
        case 0x3a1924u: goto label_3a1924;
        case 0x3a1928u: goto label_3a1928;
        case 0x3a192cu: goto label_3a192c;
        case 0x3a1930u: goto label_3a1930;
        case 0x3a1934u: goto label_3a1934;
        case 0x3a1938u: goto label_3a1938;
        case 0x3a193cu: goto label_3a193c;
        default: break;
    }

    ctx->pc = 0x3a18c0u;

label_3a18c0:
    // 0x3a18c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a18c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a18c4:
    // 0x3a18c4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3a18c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3a18c8:
    // 0x3a18c8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3a18c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3a18cc:
    // 0x3a18cc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3a18ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a18d0:
    // 0x3a18d0: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x3a18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_3a18d4:
    // 0x3a18d4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x3a18d4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_3a18d8:
    // 0x3a18d8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3a18d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3a18dc:
    // 0x3a18dc: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_3a18e0:
    if (ctx->pc == 0x3A18E0u) {
        ctx->pc = 0x3A18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18DCu;
        // 0x3a18e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A18E4u;
        goto label_3a18e4;
    }
    ctx->pc = 0x3A18DCu;
    {
        const bool branch_taken_0x3a18dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A18E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18DCu;
        // 0x3a18e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a18dc) {
            ctx->pc = 0x3A1930u;
            goto label_3a1930;
        }
    }
    ctx->pc = 0x3A18E4u;
label_3a18e4:
    // 0x3a18e4: 0x8e040058  lw          $a0, 0x58($s0)
    ctx->pc = 0x3a18e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a18e8:
    // 0x3a18e8: 0x50800012  beql        $a0, $zero, . + 4 + (0x12 << 2)
label_3a18ec:
    if (ctx->pc == 0x3A18ECu) {
        ctx->pc = 0x3A18ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18E8u;
        // 0x3a18ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A18F0u;
        goto label_3a18f0;
    }
    ctx->pc = 0x3A18E8u;
    {
        const bool branch_taken_0x3a18e8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a18e8) {
            ctx->pc = 0x3A18ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A18E8u;
            // 0x3a18ec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1934u;
            goto label_3a1934;
        }
    }
    ctx->pc = 0x3A18F0u;
label_3a18f0:
    // 0x3a18f0: 0xc08a61a  jal         func_229868
label_3a18f4:
    if (ctx->pc == 0x3A18F4u) {
        ctx->pc = 0x3A18F8u;
        goto label_3a18f8;
    }
    ctx->pc = 0x3A18F0u;
    SET_GPR_U32(ctx, 31, 0x3A18F8u);
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x3A18F0u, 0x3A18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A18F8u;
label_3a18f8:
    // 0x3a18f8: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_3a18fc:
    if (ctx->pc == 0x3A18FCu) {
        ctx->pc = 0x3A18FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A18F8u;
        // 0x3a18fc: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1900u;
        goto label_3a1900;
    }
    ctx->pc = 0x3A18F8u;
    {
        const bool branch_taken_0x3a18f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a18f8) {
            ctx->pc = 0x3A18FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A18F8u;
            // 0x3a18fc: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1930u;
            goto label_3a1930;
        }
    }
    ctx->pc = 0x3A1900u;
label_3a1900:
    // 0x3a1900: 0x8e050058  lw          $a1, 0x58($s0)
    ctx->pc = 0x3a1900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_3a1904:
    // 0x3a1904: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x3a1904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_3a1908:
    // 0x3a1908: 0x84640028  lh          $a0, 0x28($v1)
    ctx->pc = 0x3a1908u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 40)));
label_3a190c:
    // 0x3a190c: 0x8c62002c  lw          $v0, 0x2C($v1)
    ctx->pc = 0x3a190cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
label_3a1910:
    // 0x3a1910: 0x40f809  jalr        $v0
label_3a1914:
    if (ctx->pc == 0x3A1914u) {
        ctx->pc = 0x3A1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1910u;
        // 0x3a1914: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1918u;
        goto label_3a1918;
    }
    ctx->pc = 0x3A1910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3A1918u);
        ctx->pc = 0x3A1914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1910u;
        // 0x3a1914: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1910u, 0x3A1918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3A1918u;
label_3a1918:
    // 0x3a1918: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3a1918u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_3a191c:
    // 0x3a191c: 0xc0e4060  jal         func_390180
label_3a1920:
    if (ctx->pc == 0x3A1920u) {
        ctx->pc = 0x3A1920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A191Cu;
        // 0x3a1920: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1924u;
        goto label_3a1924;
    }
    ctx->pc = 0x3A191Cu;
    SET_GPR_U32(ctx, 31, 0x3A1924u);
    ctx->pc = 0x3A1920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3A191Cu;
    // 0x3a1920: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x3A191Cu, 0x3A1924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3A1924u;
label_3a1924:
    // 0x3a1924: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_3a1928:
    if (ctx->pc == 0x3A1928u) {
        ctx->pc = 0x3A1928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1924u;
        // 0x3a1928: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A192Cu;
        goto label_3a192c;
    }
    ctx->pc = 0x3A1924u;
    {
        const bool branch_taken_0x3a1924 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3a1924) {
            ctx->pc = 0x3A1928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3A1924u;
            // 0x3a1928: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3A1930u;
            goto label_3a1930;
        }
    }
    ctx->pc = 0x3A192Cu;
label_3a192c:
    // 0x3a192c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3a192cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a1930:
    // 0x3a1930: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3a1930u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a1934:
    // 0x3a1934: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3a1934u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3a1938:
    // 0x3a1938: 0x3e00008  jr          $ra
label_3a193c:
    if (ctx->pc == 0x3A193Cu) {
        ctx->pc = 0x3A193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1938u;
        // 0x3a193c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3A1940u;
        goto label_fallthrough_0x3a1938;
    }
    ctx->pc = 0x3A1938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A193Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3A1938u;
        // 0x3a193c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3A1938u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3a1938:
    ctx->pc = 0x3A1940u;
}
