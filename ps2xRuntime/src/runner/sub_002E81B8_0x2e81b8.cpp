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

// Function: sub_002E81B8
// Address: 0x2e81b8 - 0x2e8288
void sub_002E81B8_0x2e81b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E81B8_0x2e81b8");
#endif

    switch (ctx->pc) {
        case 0x2e81fcu: goto label_2e81fc;
        case 0x2e8204u: goto label_2e8204;
        case 0x2e8214u: goto label_2e8214;
        case 0x2e821cu: goto label_2e821c;
        case 0x2e8250u: goto label_2e8250;
        case 0x2e825cu: goto label_2e825c;
        default: break;
    }

    ctx->pc = 0x2e81b8u;

    // 0x2e81b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2e81b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x2e81bc: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2e81bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2e81c0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x2e81c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x2e81c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2e81c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2e81c8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x2e81c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x2e81cc: 0x120902d  daddu       $s2, $t1, $zero
    ctx->pc = 0x2e81ccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e81d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e81d4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e81d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81d8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x2e81d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x2e81dc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2e81dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81e0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x2e81e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x2e81e4: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2e81e4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e81e8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x2e81e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x2e81ec: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x2e81ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x2e81f0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e81f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e81f4: 0xc0e4060  jal         func_390180
    ctx->pc = 0x2E81F4u;
    SET_GPR_U32(ctx, 31, 0x2E81FCu);
    ctx->pc = 0x2E81F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81F4u;
    // 0x2e81f8: 0x100b02d  daddu       $s6, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x390180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x390180u, 0x2E81F4u, 0x2E81FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E81FCu;
label_2e81fc:
    // 0x2e81fc: 0xc08a61a  jal         func_229868
    ctx->pc = 0x2E81FCu;
    SET_GPR_U32(ctx, 31, 0x2E8204u);
    ctx->pc = 0x2E8200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E81FCu;
    // 0x2e8200: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x229868u, 0x2E81FCu, 0x2E8204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8204u;
label_2e8204:
    // 0x2e8204: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2E8204u;
    {
        const bool branch_taken_0x2e8204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8204u;
        // 0x2e8208: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8204) {
            ctx->pc = 0x2E8260u;
            goto label_2e8260;
        }
    }
    ctx->pc = 0x2E820Cu;
    // 0x2e820c: 0xc087502  jal         func_21D408
    ctx->pc = 0x2E820Cu;
    SET_GPR_U32(ctx, 31, 0x2E8214u);
    ctx->pc = 0x2E8210u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E820Cu;
    // 0x2e8210: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21D408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x21D408u, 0x2E820Cu, 0x2E8214u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8214u;
label_2e8214:
    // 0x2e8214: 0xc0a4e54  jal         func_293950
    ctx->pc = 0x2E8214u;
    SET_GPR_U32(ctx, 31, 0x2E821Cu);
    ctx->pc = 0x2E8218u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8214u;
    // 0x2e8218: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x293950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293950u, 0x2E8214u, 0x2E821Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E821Cu;
label_2e821c:
    // 0x2e821c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e821cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8220: 0x1200000b  beqz        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x2E8220u;
    {
        const bool branch_taken_0x2e8220 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E8224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E8220u;
        // 0x2e8224: 0x3c02006f  lui         $v0, 0x6F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e8220) {
            ctx->pc = 0x2E8250u;
            goto label_2e8250;
        }
    }
    ctx->pc = 0x2E8228u;
    // 0x2e8228: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x2e8228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
    // 0x2e822c: 0x8c4abd30  lw          $t2, -0x42D0($v0)
    ctx->pc = 0x2e822cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950192)));
    // 0x2e8230: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2e8230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8234: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2e8234u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8238: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x2e8238u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e823c: 0x2c0482d  daddu       $t1, $s6, $zero
    ctx->pc = 0x2e823cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e8240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8244: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e8244u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8248: 0xc0ba0a2  jal         func_2E8288
    ctx->pc = 0x2E8248u;
    SET_GPR_U32(ctx, 31, 0x2E8250u);
    ctx->pc = 0x2E824Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8248u;
    // 0x2e824c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8288u, 0x2E8248u, 0x2E8250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E8250u;
label_2e8250:
    // 0x2e8250: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e8250u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8254: 0xc0a35d6  jal         func_28D758
    ctx->pc = 0x2E8254u;
    SET_GPR_U32(ctx, 31, 0x2E825Cu);
    ctx->pc = 0x2E8258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E8254u;
    // 0x2e8258: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x28D758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28D758u, 0x2E8254u, 0x2E825Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E825Cu;
label_2e825c:
    // 0x2e825c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x2e825cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_2e8260:
    // 0x2e8260: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x2e8260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2e8264: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x2e8264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e8268: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x2e8268u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e826c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e826cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8270: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x2e8270u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8274: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x2e8274u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e8278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e827c: 0x3e00008  jr          $ra
    ctx->pc = 0x2E827Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E827Cu;
        // 0x2e8280: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E827Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E8284u;
    // 0x2e8284: 0x0  nop
    ctx->pc = 0x2e8284u;
    // NOP
    ctx->pc = 0x2e8288u;
}
