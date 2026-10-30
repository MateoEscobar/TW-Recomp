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

// Function: sub_003E81E0
// Address: 0x3e81e0 - 0x3e8290
void sub_003E81E0_0x3e81e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E81E0_0x3e81e0");
#endif

    switch (ctx->pc) {
        case 0x3e81e0u: goto label_3e81e0;
        case 0x3e81e4u: goto label_3e81e4;
        case 0x3e81e8u: goto label_3e81e8;
        case 0x3e81ecu: goto label_3e81ec;
        case 0x3e81f0u: goto label_3e81f0;
        case 0x3e81f4u: goto label_3e81f4;
        case 0x3e81f8u: goto label_3e81f8;
        case 0x3e81fcu: goto label_3e81fc;
        case 0x3e8200u: goto label_3e8200;
        case 0x3e8204u: goto label_3e8204;
        case 0x3e8208u: goto label_3e8208;
        case 0x3e820cu: goto label_3e820c;
        case 0x3e8210u: goto label_3e8210;
        case 0x3e8214u: goto label_3e8214;
        case 0x3e8218u: goto label_3e8218;
        case 0x3e821cu: goto label_3e821c;
        case 0x3e8220u: goto label_3e8220;
        case 0x3e8224u: goto label_3e8224;
        case 0x3e8228u: goto label_3e8228;
        case 0x3e822cu: goto label_3e822c;
        case 0x3e8230u: goto label_3e8230;
        case 0x3e8234u: goto label_3e8234;
        case 0x3e8238u: goto label_3e8238;
        case 0x3e823cu: goto label_3e823c;
        case 0x3e8240u: goto label_3e8240;
        case 0x3e8244u: goto label_3e8244;
        case 0x3e8248u: goto label_3e8248;
        case 0x3e824cu: goto label_3e824c;
        case 0x3e8250u: goto label_3e8250;
        case 0x3e8254u: goto label_3e8254;
        case 0x3e8258u: goto label_3e8258;
        case 0x3e825cu: goto label_3e825c;
        case 0x3e8260u: goto label_3e8260;
        case 0x3e8264u: goto label_3e8264;
        case 0x3e8268u: goto label_3e8268;
        case 0x3e826cu: goto label_3e826c;
        case 0x3e8270u: goto label_3e8270;
        case 0x3e8274u: goto label_3e8274;
        case 0x3e8278u: goto label_3e8278;
        case 0x3e827cu: goto label_3e827c;
        case 0x3e8280u: goto label_3e8280;
        case 0x3e8284u: goto label_3e8284;
        case 0x3e8288u: goto label_3e8288;
        case 0x3e828cu: goto label_3e828c;
        default: break;
    }

    ctx->pc = 0x3e81e0u;

label_3e81e0:
    // 0x3e81e0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x3e81e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_3e81e4:
    // 0x3e81e4: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3e81e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_3e81e8:
    // 0x3e81e8: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3e81e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_3e81ec:
    // 0x3e81ec: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x3e81ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3e81f0:
    // 0x3e81f0: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3e81f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_3e81f4:
    // 0x3e81f4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3e81f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3e81f8:
    // 0x3e81f8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3e81f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3e81fc:
    // 0x3e81fc: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3e81fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3e8200:
    // 0x3e8200: 0x84640188  lh          $a0, 0x188($v1)
    ctx->pc = 0x3e8200u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 392)));
label_3e8204:
    // 0x3e8204: 0x8c62018c  lw          $v0, 0x18C($v1)
    ctx->pc = 0x3e8204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 396)));
label_3e8208:
    // 0x3e8208: 0x40f809  jalr        $v0
label_3e820c:
    if (ctx->pc == 0x3E820Cu) {
        ctx->pc = 0x3E820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8208u;
        // 0x3e820c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8210u;
        goto label_3e8210;
    }
    ctx->pc = 0x3E8208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3E8210u);
        ctx->pc = 0x3E820Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8208u;
        // 0x3e820c: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8208u, 0x3E8210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3E8210u;
label_3e8210:
    // 0x3e8210: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3e8210u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3e8214:
    // 0x3e8214: 0xc0ea14c  jal         func_3A8530
label_3e8218:
    if (ctx->pc == 0x3E8218u) {
        ctx->pc = 0x3E8218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8214u;
        // 0x3e8218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E821Cu;
        goto label_3e821c;
    }
    ctx->pc = 0x3E8214u;
    SET_GPR_U32(ctx, 31, 0x3E821Cu);
    ctx->pc = 0x3E8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8214u;
    // 0x3e8218: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A8530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A8530u, 0x3E8214u, 0x3E821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E821Cu;
label_3e821c:
    // 0x3e821c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e821cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8220:
    // 0x3e8220: 0xc0ea12a  jal         func_3A84A8
label_3e8224:
    if (ctx->pc == 0x3E8224u) {
        ctx->pc = 0x3E8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8220u;
        // 0x3e8224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8228u;
        goto label_3e8228;
    }
    ctx->pc = 0x3E8220u;
    SET_GPR_U32(ctx, 31, 0x3E8228u);
    ctx->pc = 0x3E8224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8220u;
    // 0x3e8224: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8220u, 0x3E8228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8228u;
label_3e8228:
    // 0x3e8228: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e8228u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e822c:
    // 0x3e822c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3e822cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3e8230:
    // 0x3e8230: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3e8230u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3e8234:
    // 0x3e8234: 0xc0ea12a  jal         func_3A84A8
label_3e8238:
    if (ctx->pc == 0x3E8238u) {
        ctx->pc = 0x3E8238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8234u;
        // 0x3e8238: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E823Cu;
        goto label_3e823c;
    }
    ctx->pc = 0x3E8234u;
    SET_GPR_U32(ctx, 31, 0x3E823Cu);
    ctx->pc = 0x3E8238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8234u;
    // 0x3e8238: 0x7fa20010  sq          $v0, 0x10($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A84A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A84A8u, 0x3E8234u, 0x3E823Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E823Cu;
label_3e823c:
    // 0x3e823c: 0x7ba20020  lq          $v0, 0x20($sp)
    ctx->pc = 0x3e823cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3e8240:
    // 0x3e8240: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x3e8240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3e8244:
    // 0x3e8244: 0x2405003c  addiu       $a1, $zero, 0x3C
    ctx->pc = 0x3e8244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_3e8248:
    // 0x3e8248: 0xc0e858c  jal         func_3A1630
label_3e824c:
    if (ctx->pc == 0x3E824Cu) {
        ctx->pc = 0x3E824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8248u;
        // 0x3e824c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E8250u;
        goto label_3e8250;
    }
    ctx->pc = 0x3E8248u;
    SET_GPR_U32(ctx, 31, 0x3E8250u);
    ctx->pc = 0x3E824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3E8248u;
    // 0x3e824c: 0x7fa20000  sq          $v0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3A1630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3A1630u, 0x3E8248u, 0x3E8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3E8250u;
label_3e8250:
    // 0x3e8250: 0x7ba30000  lq          $v1, 0x0($sp)
    ctx->pc = 0x3e8250u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3e8254:
    // 0x3e8254: 0x24040404  addiu       $a0, $zero, 0x404
    ctx->pc = 0x3e8254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
label_3e8258:
    // 0x3e8258: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3e8258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3e825c:
    // 0x3e825c: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x3e825cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
label_3e8260:
    // 0x3e8260: 0x7e230010  sq          $v1, 0x10($s1)
    ctx->pc = 0x3e8260u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), GPR_VEC(ctx, 3));
label_3e8264:
    // 0x3e8264: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e8264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_3e8268:
    // 0x3e8268: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3e8268u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3e826c:
    // 0x3e826c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x3e826cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_3e8270:
    // 0x3e8270: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x3e8270u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_3e8274:
    // 0x3e8274: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3e8274u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3e8278:
    // 0x3e8278: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3e8278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3e827c:
    // 0x3e827c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3e827cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3e8280:
    // 0x3e8280: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3e8280u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3e8284:
    // 0x3e8284: 0x3e00008  jr          $ra
label_3e8288:
    if (ctx->pc == 0x3E8288u) {
        ctx->pc = 0x3E8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8284u;
        // 0x3e8288: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3E828Cu;
        goto label_3e828c;
    }
    ctx->pc = 0x3E8284u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E8288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3E8284u;
        // 0x3e8288: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3E8284u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3E828Cu;
label_3e828c:
    // 0x3e828c: 0x0  nop
    ctx->pc = 0x3e828cu;
    // NOP
    ctx->pc = 0x3e8290u;
}
