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

// Function: sub_00412310
// Address: 0x412310 - 0x4123e8
void sub_00412310_0x412310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00412310_0x412310");
#endif

    switch (ctx->pc) {
        case 0x412360u: goto label_412360;
        case 0x41237cu: goto label_41237c;
        case 0x4123a0u: goto label_4123a0;
        case 0x4123ccu: goto label_4123cc;
        default: break;
    }

    ctx->pc = 0x412310u;

    // 0x412310: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x412310u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x412314: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x412314u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x412318: 0x7fb00130  sq          $s0, 0x130($sp)
    ctx->pc = 0x412318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 16));
    // 0x41231c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x41231cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412320: 0x7fb10120  sq          $s1, 0x120($sp)
    ctx->pc = 0x412320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 17));
    // 0x412324: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x412324u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412328: 0x7fb20110  sq          $s2, 0x110($sp)
    ctx->pc = 0x412328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 18));
    // 0x41232c: 0x8c43ced0  lw          $v1, -0x3130($v0)
    ctx->pc = 0x41232cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x50CED0u));
    // 0x412330: 0x2412001c  addiu       $s2, $zero, 0x1C
    ctx->pc = 0x412330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x412334: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x412334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
    // 0x412338: 0x3c020051  lui         $v0, 0x51
    ctx->pc = 0x412338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
    // 0x41233c: 0xae05000c  sw          $a1, 0xC($s0)
    ctx->pc = 0x41233cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 5));
    // 0x412340: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x412340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x412344: 0x8c44cd4c  lw          $a0, -0x32B4($v0)
    ctx->pc = 0x412344u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x50CD4Cu));
    // 0x412348: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x412348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x41234c: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x41234cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412350: 0x2321818  mult        $v1, $s1, $s2
    ctx->pc = 0x412350u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x412354: 0x701021  addu        $v0, $v1, $s0
    ctx->pc = 0x412354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x412358: 0xc061f4a  jal         func_187D28
    ctx->pc = 0x412358u;
    SET_GPR_U32(ctx, 31, 0x412360u);
    ctx->pc = 0x41235Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412358u;
    // 0x41235c: 0x8c451214  lw          $a1, 0x1214($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4628)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x187D28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x187D28u, 0x412358u, 0x412360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x412360u;
label_412360:
    // 0x412360: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x412360u;
    {
        const bool branch_taken_0x412360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x412364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412360u;
        // 0x412364: 0x3c020051  lui         $v0, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)81 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412360) {
            ctx->pc = 0x412370u;
            goto label_412370;
        }
    }
    ctx->pc = 0x412368u;
    // 0x412368: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x412368u;
    {
        const bool branch_taken_0x412368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41236Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x412368u;
        // 0x41236c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x412368) {
            ctx->pc = 0x4123D0u;
            goto label_4123d0;
        }
    }
    ctx->pc = 0x412370u;
label_412370:
    // 0x412370: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x412370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412374: 0xc103e14  jal         func_40F850
    ctx->pc = 0x412374u;
    SET_GPR_U32(ctx, 31, 0x41237Cu);
    ctx->pc = 0x412378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412374u;
    // 0x412378: 0x8c4447c4  lw          $a0, 0x47C4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18372)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F850u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F850u, 0x412374u, 0x41237Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41237Cu;
label_41237c:
    // 0x41237c: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x41237cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x412380: 0x3c060059  lui         $a2, 0x59
    ctx->pc = 0x412380u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)89 << 16));
    // 0x412384: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x412384u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412388: 0x26072174  addiu       $a3, $s0, 0x2174
    ctx->pc = 0x412388u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 8564));
    // 0x41238c: 0x24c68df0  addiu       $a2, $a2, -0x7210
    ctx->pc = 0x41238cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294938096));
    // 0x412390: 0x240500fe  addiu       $a1, $zero, 0xFE
    ctx->pc = 0x412390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x412394: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x412394u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x412398: 0xc10ca04  jal         func_432810
    ctx->pc = 0x412398u;
    SET_GPR_U32(ctx, 31, 0x4123A0u);
    ctx->pc = 0x41239Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x412398u;
    // 0x41239c: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x432810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x432810u, 0x412398u, 0x4123A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4123A0u;
label_4123a0:
    // 0x4123a0: 0x2321018  mult        $v0, $s1, $s2
    ctx->pc = 0x4123a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4123a4: 0x3c070041  lui         $a3, 0x41
    ctx->pc = 0x4123a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65 << 16));
    // 0x4123a8: 0x24e714d8  addiu       $a3, $a3, 0x14D8
    ctx->pc = 0x4123a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 5336));
    // 0x4123ac: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4123acu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4123b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x4123b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4123b4: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x4123b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4123b8: 0x501821  addu        $v1, $v0, $s0
    ctx->pc = 0x4123b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x4123bc: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x4123bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x4123c0: 0x8c661210  lw          $a2, 0x1210($v1)
    ctx->pc = 0x4123c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4624)));
    // 0x4123c4: 0xc055354  jal         func_154D50
    ctx->pc = 0x4123C4u;
    SET_GPR_U32(ctx, 31, 0x4123CCu);
    ctx->pc = 0x4123C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4123C4u;
    // 0x4123c8: 0x8c445340  lw          $a0, 0x5340($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21312)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x154D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154D50u, 0x4123C4u, 0x4123CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4123CCu;
label_4123cc:
    // 0x4123cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4123ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4123d0:
    // 0x4123d0: 0x7bb00130  lq          $s0, 0x130($sp)
    ctx->pc = 0x4123d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x4123d4: 0x7bb10120  lq          $s1, 0x120($sp)
    ctx->pc = 0x4123d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x4123d8: 0x7bb20110  lq          $s2, 0x110($sp)
    ctx->pc = 0x4123d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x4123dc: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x4123dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x4123e0: 0x3e00008  jr          $ra
    ctx->pc = 0x4123E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4123E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4123E0u;
        // 0x4123e4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4123E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4123E8u;
}
