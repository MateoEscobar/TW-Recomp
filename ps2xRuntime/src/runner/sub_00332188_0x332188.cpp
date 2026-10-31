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

// Function: sub_00332188
// Address: 0x332188 - 0x332318
void sub_00332188_0x332188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00332188_0x332188");
#endif

    switch (ctx->pc) {
        case 0x3321b4u: goto label_3321b4;
        case 0x3321bcu: goto label_3321bc;
        case 0x3321d8u: goto label_3321d8;
        case 0x3321e4u: goto label_3321e4;
        case 0x3321ecu: goto label_3321ec;
        case 0x332228u: goto label_332228;
        case 0x332248u: goto label_332248;
        case 0x3322c0u: goto label_3322c0;
        case 0x3322ecu: goto label_3322ec;
        default: break;
    }

    ctx->pc = 0x332188u;

    // 0x332188: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x332188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33218c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x33218cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x332190: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x332190u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x332194: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x332194u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x332198: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x332198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x33219c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x33219cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321a0: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x3321a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x3321a4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3321a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321a8: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x3321a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x3321ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3321acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3321b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3321b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3321b4:
    // 0x3321b4: 0xc0cc6a0  jal         func_331A80
    ctx->pc = 0x3321B4u;
    SET_GPR_U32(ctx, 31, 0x3321BCu);
    ctx->pc = 0x3321B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3321B4u;
    // 0x3321b8: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A80u, 0x3321B4u, 0x3321BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3321BCu;
label_3321bc:
    // 0x3321bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x3321bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321c0: 0x16200007  bnez        $s1, . + 4 + (0x7 << 2)
    ctx->pc = 0x3321C0u;
    {
        const bool branch_taken_0x3321c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x3321C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321C0u;
        // 0x3321c4: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321c0) {
            ctx->pc = 0x3321E0u;
            goto label_3321e0;
        }
    }
    ctx->pc = 0x3321C8u;
    // 0x3321c8: 0x3c050057  lui         $a1, 0x57
    ctx->pc = 0x3321c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)87 << 16));
    // 0x3321cc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3321ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321d0: 0xc0ca46e  jal         func_3291B8
    ctx->pc = 0x3321D0u;
    SET_GPR_U32(ctx, 31, 0x3321D8u);
    ctx->pc = 0x3321D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3321D0u;
    // 0x3321d4: 0x24a56368  addiu       $a1, $a1, 0x6368 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25448));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3291B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3291B8u, 0x3321D0u, 0x3321D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3321D8u;
label_3321d8:
    // 0x3321d8: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x3321d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3321dc: 0x0  nop
    ctx->pc = 0x3321dcu;
    // NOP
label_3321e0:
    // 0x3321e0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3321e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3321e4:
    // 0x3321e4: 0xc0cb224  jal         func_32C890
    ctx->pc = 0x3321E4u;
    SET_GPR_U32(ctx, 31, 0x3321ECu);
    ctx->pc = 0x3321E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3321E4u;
    // 0x3321e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x32C890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C890u, 0x3321E4u, 0x3321ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3321ECu;
label_3321ec:
    // 0x3321ec: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x3321ECu;
    {
        const bool branch_taken_0x3321ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3321F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321ECu;
        // 0x3321f0: 0x26020010  addiu       $v0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321ec) {
            ctx->pc = 0x3322F4u;
            goto label_3322f4;
        }
    }
    ctx->pc = 0x3321F4u;
    // 0x3321f4: 0x8e100020  lw          $s0, 0x20($s0)
    ctx->pc = 0x3321f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3321f8: 0x1600fffa  bnez        $s0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3321F8u;
    {
        const bool branch_taken_0x3321f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x3321FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3321F8u;
        // 0x3321fc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321f8) {
            ctx->pc = 0x3321E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3321e4;
        }
    }
    ctx->pc = 0x332200u;
    // 0x332200: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x332200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332204: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332208: 0x50620027  beql        $v1, $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x332208u;
    {
        const bool branch_taken_0x332208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x332208) {
            ctx->pc = 0x33220Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332208u;
            // 0x33220c: 0xde630000  ld          $v1, 0x0($s3) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3322A8u;
            goto label_3322a8;
        }
    }
    ctx->pc = 0x332210u;
    // 0x332210: 0x8e500008  lw          $s0, 0x8($s2)
    ctx->pc = 0x332210u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x332214: 0x211102b  sltu        $v0, $s0, $s1
    ctx->pc = 0x332214u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x332218: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x332218u;
    {
        const bool branch_taken_0x332218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33221Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x332218u;
        // 0x33221c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332218) {
            ctx->pc = 0x332294u;
            goto label_332294;
        }
    }
    ctx->pc = 0x332220u;
    // 0x332220: 0xc0cc6a0  jal         func_331A80
    ctx->pc = 0x332220u;
    SET_GPR_U32(ctx, 31, 0x332228u);
    ctx->pc = 0x332224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x332220u;
    // 0x332224: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x331A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x331A80u, 0x332220u, 0x332228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x332228u;
label_332228:
    // 0x332228: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x332228u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33222c: 0x5071001a  beql        $v1, $s1, . + 4 + (0x1A << 2)
    ctx->pc = 0x33222Cu;
    {
        const bool branch_taken_0x33222c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 17));
        if (branch_taken_0x33222c) {
            ctx->pc = 0x332230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33222Cu;
            // 0x332230: 0x8e220020  lw          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332298u;
            goto label_332298;
        }
    }
    ctx->pc = 0x332234u;
    // 0x332234: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x332234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x332238: 0x5051000a  beql        $v0, $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x332238u;
    {
        const bool branch_taken_0x332238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        if (branch_taken_0x332238) {
            ctx->pc = 0x33223Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332238u;
            // 0x33223c: 0xac700020  sw          $s0, 0x20($v1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332264u;
            goto label_332264;
        }
    }
    ctx->pc = 0x332240u;
    // 0x332240: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x332240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x332244: 0x0  nop
    ctx->pc = 0x332244u;
    // NOP
label_332248:
    // 0x332248: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x332248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x33224c: 0x0  nop
    ctx->pc = 0x33224cu;
    // NOP
    // 0x332250: 0x0  nop
    ctx->pc = 0x332250u;
    // NOP
    // 0x332254: 0x0  nop
    ctx->pc = 0x332254u;
    // NOP
    // 0x332258: 0x5451fffb  bnel        $v0, $s1, . + 4 + (-0x5 << 2)
    ctx->pc = 0x332258u;
    {
        const bool branch_taken_0x332258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x332258) {
            ctx->pc = 0x33225Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x332258u;
            // 0x33225c: 0x8c630020  lw          $v1, 0x20($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x332248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_332248;
        }
    }
    ctx->pc = 0x332260u;
    // 0x332260: 0xac700020  sw          $s0, 0x20($v1)
    ctx->pc = 0x332260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 16));
label_332264:
    // 0x332264: 0xde220000  ld          $v0, 0x0($s1)
    ctx->pc = 0x332264u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x332268: 0xfe020000  sd          $v0, 0x0($s0)
    ctx->pc = 0x332268u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 2));
    // 0x33226c: 0xde230008  ld          $v1, 0x8($s1)
    ctx->pc = 0x33226cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x332270: 0xfe030008  sd          $v1, 0x8($s0)
    ctx->pc = 0x332270u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 3));
    // 0x332274: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x332274u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x332278: 0xfe020010  sd          $v0, 0x10($s0)
    ctx->pc = 0x332278u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 16), GPR_U64(ctx, 2));
    // 0x33227c: 0xde230018  ld          $v1, 0x18($s1)
    ctx->pc = 0x33227cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x332280: 0xfe030018  sd          $v1, 0x18($s0)
    ctx->pc = 0x332280u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 3));
    // 0x332284: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x332284u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x332288: 0xfe020020  sd          $v0, 0x20($s0)
    ctx->pc = 0x332288u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 2));
    // 0x33228c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33228Cu;
    {
        const bool branch_taken_0x33228c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33228Cu;
        // 0x332290: 0xae200020  sw          $zero, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33228c) {
            ctx->pc = 0x3322A4u;
            goto label_3322a4;
        }
    }
    ctx->pc = 0x332294u;
label_332294:
    // 0x332294: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x332294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_332298:
    // 0x332298: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x332298u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
    // 0x33229c: 0xae300020  sw          $s0, 0x20($s1)
    ctx->pc = 0x33229cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 16));
    // 0x3322a0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x3322a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3322a4:
    // 0x3322a4: 0xde630000  ld          $v1, 0x0($s3)
    ctx->pc = 0x3322a4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 0)));
label_3322a8:
    // 0x3322a8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x3322a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3322ac: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x3322acu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x3322b0: 0xde620008  ld          $v0, 0x8($s3)
    ctx->pc = 0x3322b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3322b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3322B4u;
    {
        const bool branch_taken_0x3322b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3322B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3322B4u;
        // 0x3322b8: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3322b4) {
            ctx->pc = 0x3322C4u;
            goto label_3322c4;
        }
    }
    ctx->pc = 0x3322BCu;
    // 0x3322bc: 0x0  nop
    ctx->pc = 0x3322bcu;
    // NOP
label_3322c0:
    // 0x3322c0: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x3322c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_3322c4:
    // 0x3322c4: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3322c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3322c8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3322c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3322cc: 0x10440009  beq         $v0, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3322CCu;
    {
        const bool branch_taken_0x3322cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x3322D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3322CCu;
        // 0x3322d0: 0x26220010  addiu       $v0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3322cc) {
            ctx->pc = 0x3322F4u;
            goto label_3322f4;
        }
    }
    ctx->pc = 0x3322D4u;
    // 0x3322d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3322d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3322d8: 0x1462fff9  bne         $v1, $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x3322D8u;
    {
        const bool branch_taken_0x3322d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x3322DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3322D8u;
        // 0x3322dc: 0x2462ffd8  addiu       $v0, $v1, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3322d8) {
            ctx->pc = 0x3322C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3322c0;
        }
    }
    ctx->pc = 0x3322E0u;
    // 0x3322e0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3322e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3322e4: 0xc0cc832  jal         func_3320C8
    ctx->pc = 0x3322E4u;
    SET_GPR_U32(ctx, 31, 0x3322ECu);
    ctx->pc = 0x3322E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3322E4u;
    // 0x3322e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3320C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3320C8u, 0x3322E4u, 0x3322ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3322ECu;
label_3322ec:
    // 0x3322ec: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
    ctx->pc = 0x3322ECu;
    {
        const bool branch_taken_0x3322ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3322F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3322ECu;
        // 0x3322f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3322ec) {
            ctx->pc = 0x3321B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3321b4;
        }
    }
    ctx->pc = 0x3322F4u;
label_3322f4:
    // 0x3322f4: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3322f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3322f8: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3322f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3322fc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3322fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x332300: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x332300u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x332304: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x332304u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x332308: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x332308u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33230c: 0x3e00008  jr          $ra
    ctx->pc = 0x33230Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x332310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33230Cu;
        // 0x332310: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33230Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x332314u;
    // 0x332314: 0x0  nop
    ctx->pc = 0x332314u;
    // NOP
    ctx->pc = 0x332318u;
}
