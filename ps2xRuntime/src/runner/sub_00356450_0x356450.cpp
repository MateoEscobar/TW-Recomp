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

// Function: sub_00356450
// Address: 0x356450 - 0x3564d8
void sub_00356450_0x356450(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00356450_0x356450");
#endif

    switch (ctx->pc) {
        case 0x356450u: goto label_356450;
        case 0x356454u: goto label_356454;
        case 0x356458u: goto label_356458;
        case 0x35645cu: goto label_35645c;
        case 0x356460u: goto label_356460;
        case 0x356464u: goto label_356464;
        case 0x356468u: goto label_356468;
        case 0x35646cu: goto label_35646c;
        case 0x356470u: goto label_356470;
        case 0x356474u: goto label_356474;
        case 0x356478u: goto label_356478;
        case 0x35647cu: goto label_35647c;
        case 0x356480u: goto label_356480;
        case 0x356484u: goto label_356484;
        case 0x356488u: goto label_356488;
        case 0x35648cu: goto label_35648c;
        case 0x356490u: goto label_356490;
        case 0x356494u: goto label_356494;
        case 0x356498u: goto label_356498;
        case 0x35649cu: goto label_35649c;
        case 0x3564a0u: goto label_3564a0;
        case 0x3564a4u: goto label_3564a4;
        case 0x3564a8u: goto label_3564a8;
        case 0x3564acu: goto label_3564ac;
        case 0x3564b0u: goto label_3564b0;
        case 0x3564b4u: goto label_3564b4;
        case 0x3564b8u: goto label_3564b8;
        case 0x3564bcu: goto label_3564bc;
        case 0x3564c0u: goto label_3564c0;
        case 0x3564c4u: goto label_3564c4;
        case 0x3564c8u: goto label_3564c8;
        case 0x3564ccu: goto label_3564cc;
        case 0x3564d0u: goto label_3564d0;
        case 0x3564d4u: goto label_3564d4;
        default: break;
    }

    ctx->pc = 0x356450u;

label_356450:
    // 0x356450: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x356450u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_356454:
    // 0x356454: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x356454u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_356458:
    // 0x356458: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x356458u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_35645c:
    // 0x35645c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x35645cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_356460:
    // 0x356460: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x356460u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_356464:
    // 0x356464: 0x3c100051  lui         $s0, 0x51
    ctx->pc = 0x356464u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)81 << 16));
label_356468:
    // 0x356468: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x356468u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_35646c:
    // 0x35646c: 0x3c12006f  lui         $s2, 0x6F
    ctx->pc = 0x35646cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)111 << 16));
label_356470:
    // 0x356470: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x356470u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_356474:
    // 0x356474: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x356474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_356478:
    // 0x356478: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x356478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_35647c:
    // 0x35647c: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x35647cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_356480:
    // 0x356480: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x356480u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_356484:
    // 0x356484: 0x60f809  jalr        $v1
label_356488:
    if (ctx->pc == 0x356488u) {
        ctx->pc = 0x356488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356484u;
        // 0x356488: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x35648Cu;
        goto label_35648c;
    }
    ctx->pc = 0x356484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x35648Cu);
        ctx->pc = 0x356488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356484u;
        // 0x356488: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x356484u, 0x35648Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x35648Cu;
label_35648c:
    // 0x35648c: 0x8e042b04  lw          $a0, 0x2B04($s0)
    ctx->pc = 0x35648cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 11012)));
label_356490:
    // 0x356490: 0x3c050058  lui         $a1, 0x58
    ctx->pc = 0x356490u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)88 << 16));
label_356494:
    // 0x356494: 0x2406006f  addiu       $a2, $zero, 0x6F
    ctx->pc = 0x356494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 111));
label_356498:
    // 0x356498: 0xc13c514  jal         func_4F1450
label_35649c:
    if (ctx->pc == 0x35649Cu) {
        ctx->pc = 0x35649Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356498u;
        // 0x35649c: 0x24a58fa8  addiu       $a1, $a1, -0x7058 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3564A0u;
        goto label_3564a0;
    }
    ctx->pc = 0x356498u;
    SET_GPR_U32(ctx, 31, 0x3564A0u);
    ctx->pc = 0x35649Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356498u;
    // 0x35649c: 0x24a58fa8  addiu       $a1, $a1, -0x7058 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294938536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4F1450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4F1450u, 0x356498u, 0x3564A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3564A0u;
label_3564a0:
    // 0x3564a0: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x3564a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_3564a4:
    // 0x3564a4: 0x8e45b9b8  lw          $a1, -0x4648($s2)
    ctx->pc = 0x3564a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294949304)));
label_3564a8:
    // 0x3564a8: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3564a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3564ac:
    // 0x3564ac: 0xae002b04  sw          $zero, 0x2B04($s0)
    ctx->pc = 0x3564acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 11012), GPR_U32(ctx, 0));
label_3564b0:
    // 0x3564b0: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x3564b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_3564b4:
    // 0x3564b4: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x3564b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_3564b8:
    // 0x3564b8: 0x60f809  jalr        $v1
label_3564bc:
    if (ctx->pc == 0x3564BCu) {
        ctx->pc = 0x3564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564B8u;
        // 0x3564bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3564C0u;
        goto label_3564c0;
    }
    ctx->pc = 0x3564B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3564C0u);
        ctx->pc = 0x3564BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564B8u;
        // 0x3564bc: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3564B8u, 0x3564C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3564C0u;
label_3564c0:
    // 0x3564c0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x3564c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3564c4:
    // 0x3564c4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3564c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3564c8:
    // 0x3564c8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x3564c8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3564cc:
    // 0x3564cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3564ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3564d0:
    // 0x3564d0: 0x3e00008  jr          $ra
label_3564d4:
    if (ctx->pc == 0x3564D4u) {
        ctx->pc = 0x3564D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564D0u;
        // 0x3564d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3564D8u;
        goto label_fallthrough_0x3564d0;
    }
    ctx->pc = 0x3564D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3564D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3564D0u;
        // 0x3564d4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3564D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3564d0:
    ctx->pc = 0x3564D8u;
}
