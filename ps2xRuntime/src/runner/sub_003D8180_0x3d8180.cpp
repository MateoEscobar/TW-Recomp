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

// Function: sub_003D8180
// Address: 0x3d8180 - 0x3d8230
void sub_003D8180_0x3d8180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D8180_0x3d8180");
#endif

    switch (ctx->pc) {
        case 0x3d8180u: goto label_3d8180;
        case 0x3d8184u: goto label_3d8184;
        case 0x3d8188u: goto label_3d8188;
        case 0x3d818cu: goto label_3d818c;
        case 0x3d8190u: goto label_3d8190;
        case 0x3d8194u: goto label_3d8194;
        case 0x3d8198u: goto label_3d8198;
        case 0x3d819cu: goto label_3d819c;
        case 0x3d81a0u: goto label_3d81a0;
        case 0x3d81a4u: goto label_3d81a4;
        case 0x3d81a8u: goto label_3d81a8;
        case 0x3d81acu: goto label_3d81ac;
        case 0x3d81b0u: goto label_3d81b0;
        case 0x3d81b4u: goto label_3d81b4;
        case 0x3d81b8u: goto label_3d81b8;
        case 0x3d81bcu: goto label_3d81bc;
        case 0x3d81c0u: goto label_3d81c0;
        case 0x3d81c4u: goto label_3d81c4;
        case 0x3d81c8u: goto label_3d81c8;
        case 0x3d81ccu: goto label_3d81cc;
        case 0x3d81d0u: goto label_3d81d0;
        case 0x3d81d4u: goto label_3d81d4;
        case 0x3d81d8u: goto label_3d81d8;
        case 0x3d81dcu: goto label_3d81dc;
        case 0x3d81e0u: goto label_3d81e0;
        case 0x3d81e4u: goto label_3d81e4;
        case 0x3d81e8u: goto label_3d81e8;
        case 0x3d81ecu: goto label_3d81ec;
        case 0x3d81f0u: goto label_3d81f0;
        case 0x3d81f4u: goto label_3d81f4;
        case 0x3d81f8u: goto label_3d81f8;
        case 0x3d81fcu: goto label_3d81fc;
        case 0x3d8200u: goto label_3d8200;
        case 0x3d8204u: goto label_3d8204;
        case 0x3d8208u: goto label_3d8208;
        case 0x3d820cu: goto label_3d820c;
        case 0x3d8210u: goto label_3d8210;
        case 0x3d8214u: goto label_3d8214;
        case 0x3d8218u: goto label_3d8218;
        case 0x3d821cu: goto label_3d821c;
        case 0x3d8220u: goto label_3d8220;
        case 0x3d8224u: goto label_3d8224;
        case 0x3d8228u: goto label_3d8228;
        case 0x3d822cu: goto label_3d822c;
        default: break;
    }

    ctx->pc = 0x3d8180u;

label_3d8180:
    // 0x3d8180: 0x27bdfb60  addiu       $sp, $sp, -0x4A0
    ctx->pc = 0x3d8180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966112));
label_3d8184:
    // 0x3d8184: 0x7fb00490  sq          $s0, 0x490($sp)
    ctx->pc = 0x3d8184u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1168), GPR_VEC(ctx, 16));
label_3d8188:
    // 0x3d8188: 0x7fb10480  sq          $s1, 0x480($sp)
    ctx->pc = 0x3d8188u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1152), GPR_VEC(ctx, 17));
label_3d818c:
    // 0x3d818c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3d818cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3d8190:
    // 0x3d8190: 0x7fb20470  sq          $s2, 0x470($sp)
    ctx->pc = 0x3d8190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1136), GPR_VEC(ctx, 18));
label_3d8194:
    // 0x3d8194: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3d8194u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3d8198:
    // 0x3d8198: 0xffbf0460  sd          $ra, 0x460($sp)
    ctx->pc = 0x3d8198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 1120), GPR_U64(ctx, 31));
label_3d819c:
    // 0x3d819c: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3d819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3d81a0:
    // 0x3d81a0: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3d81a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3d81a4:
    // 0x3d81a4: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3d81a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3d81a8:
    // 0x3d81a8: 0x40f809  jalr        $v0
label_3d81ac:
    if (ctx->pc == 0x3D81ACu) {
        ctx->pc = 0x3D81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81A8u;
        // 0x3d81ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D81B0u;
        goto label_3d81b0;
    }
    ctx->pc = 0x3D81A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3D81B0u);
        ctx->pc = 0x3D81ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81A8u;
        // 0x3d81ac: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D81A8u, 0x3D81B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3D81B0u;
label_3d81b0:
    // 0x3d81b0: 0xc0ea14c  jal         func_3A8530
label_3d81b4:
    if (ctx->pc == 0x3D81B4u) {
        ctx->pc = 0x3D81B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81B0u;
        // 0x3d81b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D81B8u;
        goto label_3d81b8;
    }
    ctx->pc = 0x3D81B0u;
    SET_GPR_U32(ctx, 31, 0x3D81B8u);
    ctx->pc = 0x3D81B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D81B0u;
    // 0x3d81b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3D81B0u, 0x3D81B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D81B8u;
label_3d81b8:
    // 0x3d81b8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d81b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d81bc:
    // 0x3d81bc: 0xc0ea12a  jal         func_3A84A8
label_3d81c0:
    if (ctx->pc == 0x3D81C0u) {
        ctx->pc = 0x3D81C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81BCu;
        // 0x3d81c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D81C4u;
        goto label_3d81c4;
    }
    ctx->pc = 0x3D81BCu;
    SET_GPR_U32(ctx, 31, 0x3D81C4u);
    ctx->pc = 0x3D81C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D81BCu;
    // 0x3d81c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D81BCu, 0x3D81C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D81C4u;
label_3d81c4:
    // 0x3d81c4: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3d81c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d81c8:
    // 0x3d81c8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3d81c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d81cc:
    // 0x3d81cc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3d81ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d81d0:
    // 0x3d81d0: 0xc0ea12a  jal         func_3A84A8
label_3d81d4:
    if (ctx->pc == 0x3D81D4u) {
        ctx->pc = 0x3D81D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D81D0u;
        // 0x3d81d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D81D8u;
        goto label_3d81d8;
    }
    ctx->pc = 0x3D81D0u;
    SET_GPR_U32(ctx, 31, 0x3D81D8u);
    ctx->pc = 0x3D81D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D81D0u;
    // 0x3d81d4: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3D81D0u, 0x3D81D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D81D8u;
label_3d81d8:
    // 0x3d81d8: 0x7ba30020  lq          $v1, 0x20($sp)
    ctx->pc = 0x3d81d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3d81dc:
    // 0x3d81dc: 0x27b20030  addiu       $s2, $sp, 0x30
    ctx->pc = 0x3d81dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_3d81e0:
    // 0x3d81e0: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x3d81e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3d81e4:
    // 0x3d81e4: 0x3c100058  lui         $s0, 0x58
    ctx->pc = 0x3d81e4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)88 << 16));
label_3d81e8:
    // 0x3d81e8: 0x261050b8  addiu       $s0, $s0, 0x50B8
    ctx->pc = 0x3d81e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20664));
label_3d81ec:
    // 0x3d81ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3d81ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3d81f0:
    // 0x3d81f0: 0xafb10450  sw          $s1, 0x450($sp)
    ctx->pc = 0x3d81f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1104), GPR_U32(ctx, 17));
label_3d81f4:
    // 0x3d81f4: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x3d81f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3d81f8:
    // 0x3d81f8: 0x27a60440  addiu       $a2, $sp, 0x440
    ctx->pc = 0x3d81f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1088));
label_3d81fc:
    // 0x3d81fc: 0x27a70450  addiu       $a3, $sp, 0x450
    ctx->pc = 0x3d81fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1104));
label_3d8200:
    // 0x3d8200: 0x7fa20440  sq          $v0, 0x440($sp)
    ctx->pc = 0x3d8200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 1088), GPR_VEC(ctx, 2));
label_3d8204:
    // 0x3d8204: 0xc0e9fa6  jal         func_3A7E98
label_3d8208:
    if (ctx->pc == 0x3D8208u) {
        ctx->pc = 0x3D8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8204u;
        // 0x3d8208: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D820Cu;
        goto label_3d820c;
    }
    ctx->pc = 0x3D8204u;
    SET_GPR_U32(ctx, 31, 0x3D820Cu);
    ctx->pc = 0x3D8208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8204u;
    // 0x3d8208: 0x7fa30000  sq          $v1, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A7E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A7E98u, 0x3D8204u, 0x3D820Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D820Cu;
label_3d820c:
    // 0x3d820c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3d820cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3d8210:
    // 0x3d8210: 0xc0f15bc  jal         func_3C56F0
label_3d8214:
    if (ctx->pc == 0x3D8214u) {
        ctx->pc = 0x3D8214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8210u;
        // 0x3d8214: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8218u;
        goto label_3d8218;
    }
    ctx->pc = 0x3D8210u;
    SET_GPR_U32(ctx, 31, 0x3D8218u);
    ctx->pc = 0x3D8214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D8210u;
    // 0x3d8214: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C56F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C56F0u, 0x3D8210u, 0x3D8218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D8218u;
label_3d8218:
    // 0x3d8218: 0x7bb00490  lq          $s0, 0x490($sp)
    ctx->pc = 0x3d8218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 1168)));
label_3d821c:
    // 0x3d821c: 0x7bb10480  lq          $s1, 0x480($sp)
    ctx->pc = 0x3d821cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 1152)));
label_3d8220:
    // 0x3d8220: 0x7bb20470  lq          $s2, 0x470($sp)
    ctx->pc = 0x3d8220u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 1136)));
label_3d8224:
    // 0x3d8224: 0xdfbf0460  ld          $ra, 0x460($sp)
    ctx->pc = 0x3d8224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 1120)));
label_3d8228:
    // 0x3d8228: 0x3e00008  jr          $ra
label_3d822c:
    if (ctx->pc == 0x3D822Cu) {
        ctx->pc = 0x3D822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8228u;
        // 0x3d822c: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3D8230u;
        goto label_fallthrough_0x3d8228;
    }
    ctx->pc = 0x3D8228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D8228u;
        // 0x3d822c: 0x27bd04a0  addiu       $sp, $sp, 0x4A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1184));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D8228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3d8228:
    ctx->pc = 0x3D8230u;
}
