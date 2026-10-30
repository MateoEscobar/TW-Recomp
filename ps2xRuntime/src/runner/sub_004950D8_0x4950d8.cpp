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

// Function: sub_004950D8
// Address: 0x4950d8 - 0x495400
void sub_004950D8_0x4950d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004950D8_0x4950d8");
#endif

    switch (ctx->pc) {
        case 0x495110u: goto label_495110;
        case 0x49513cu: goto label_49513c;
        case 0x49514cu: goto label_49514c;
        case 0x495190u: goto label_495190;
        case 0x495254u: goto label_495254;
        case 0x495270u: goto label_495270;
        case 0x495290u: goto label_495290;
        case 0x4952a0u: goto label_4952a0;
        case 0x4952e0u: goto label_4952e0;
        case 0x4952f8u: goto label_4952f8;
        case 0x49530cu: goto label_49530c;
        case 0x49532cu: goto label_49532c;
        case 0x495340u: goto label_495340;
        case 0x49535cu: goto label_49535c;
        case 0x495370u: goto label_495370;
        case 0x495394u: goto label_495394;
        case 0x4953a4u: goto label_4953a4;
        case 0x4953ccu: goto label_4953cc;
        case 0x4953d8u: goto label_4953d8;
        default: break;
    }

    ctx->pc = 0x4950d8u;

    // 0x4950d8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4950d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4950dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4950dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4950e0: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4950e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4950e4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x4950e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x4950e8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4950e8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4950ec: 0x27a70054  addiu       $a3, $sp, 0x54
    ctx->pc = 0x4950ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
    // 0x4950f0: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4950f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4950f4: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4950f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4950f8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4950f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4950fc: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4950fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x495100: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x495100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x495104: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x495104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x495108: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x495108u;
    SET_GPR_U32(ctx, 31, 0x495110u);
    ctx->pc = 0x49510Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495108u;
    // 0x49510c: 0xc0a02d  daddu       $s4, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x495108u, 0x495110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495110u;
label_495110:
    // 0x495110: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
    ctx->pc = 0x495110u;
    {
        const bool branch_taken_0x495110 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495110u;
        // 0x495114: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495110) {
            ctx->pc = 0x4953D8u;
            goto label_4953d8;
        }
    }
    ctx->pc = 0x495118u;
    // 0x495118: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x495118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x49511c: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x49511cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x495120: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x495120u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x495124: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x495124u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x495128: 0x106000a3  beqz        $v1, . + 4 + (0xA3 << 2)
    ctx->pc = 0x495128u;
    {
        const bool branch_taken_0x495128 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49512Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495128u;
        // 0x49512c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495128) {
            ctx->pc = 0x4953B8u;
            goto label_4953b8;
        }
    }
    ctx->pc = 0x495130u;
    // 0x495130: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x495130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495134: 0xc10c1fa  jal         func_4307E8
    ctx->pc = 0x495134u;
    SET_GPR_U32(ctx, 31, 0x49513Cu);
    ctx->pc = 0x495138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495134u;
    // 0x495138: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4307E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4307E8u, 0x495134u, 0x49513Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49513Cu;
label_49513c:
    // 0x49513c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x49513cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x495140: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x495140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495144: 0xc11ef80  jal         func_47BE00
    ctx->pc = 0x495144u;
    SET_GPR_U32(ctx, 31, 0x49514Cu);
    ctx->pc = 0x495148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495144u;
    // 0x495148: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BE00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BE00u, 0x495144u, 0x49514Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49514Cu;
label_49514c:
    // 0x49514c: 0x104000a2  beqz        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x49514Cu;
    {
        const bool branch_taken_0x49514c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49514Cu;
        // 0x495150: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49514c) {
            ctx->pc = 0x4953D8u;
            goto label_4953d8;
        }
    }
    ctx->pc = 0x495154u;
    // 0x495154: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x495154u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x495158: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x495158u;
    {
        const bool branch_taken_0x495158 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x495158) {
            ctx->pc = 0x49515Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495158u;
            // 0x49515c: 0x8fa2001c  lw          $v0, 0x1C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49516Cu;
            goto label_49516c;
        }
    }
    ctx->pc = 0x495160u;
    // 0x495160: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x495160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x495164: 0xaf8286d0  sw          $v0, -0x7930($gp)
    ctx->pc = 0x495164u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 2));
    // 0x495168: 0x8fa2001c  lw          $v0, 0x1C($sp)
    ctx->pc = 0x495168u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_49516c:
    // 0x49516c: 0x8f908740  lw          $s0, -0x78C0($gp)
    ctx->pc = 0x49516cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936384)));
    // 0x495170: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x495170u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
    // 0x495174: 0x97a7000c  lhu         $a3, 0xC($sp)
    ctx->pc = 0x495174u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x495178: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x495178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x49517c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x49517cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x495180: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x495180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x495184: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x495184u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x495188: 0xc121848  jal         func_486120
    ctx->pc = 0x495188u;
    SET_GPR_U32(ctx, 31, 0x495190u);
    ctx->pc = 0x49518Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495188u;
    // 0x49518c: 0xaf828740  sw          $v0, -0x78C0($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486120u, 0x495188u, 0x495190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495190u;
label_495190:
    // 0x495190: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x495190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495194: 0xaf908740  sw          $s0, -0x78C0($gp)
    ctx->pc = 0x495194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936384), GPR_U32(ctx, 16));
    // 0x495198: 0xaf8086d0  sw          $zero, -0x7930($gp)
    ctx->pc = 0x495198u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936272), GPR_U32(ctx, 0));
    // 0x49519c: 0x1220008f  beqz        $s1, . + 4 + (0x8F << 2)
    ctx->pc = 0x49519Cu;
    {
        const bool branch_taken_0x49519c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4951A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49519Cu;
        // 0x4951a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49519c) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x4951A4u;
    // 0x4951a4: 0x8f828a20  lw          $v0, -0x75E0($gp)
    ctx->pc = 0x4951a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937120)));
    // 0x4951a8: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x4951a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4951ac: 0x2228021  addu        $s0, $s1, $v0
    ctx->pc = 0x4951acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x4951b0: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x4951b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x4951b4: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x4951b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x4951b8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x4951b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x4951bc: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4951bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4951c0: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x4951c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x4951c4: 0x93a2001c  lbu         $v0, 0x1C($sp)
    ctx->pc = 0x4951c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x4951c8: 0xa2020016  sb          $v0, 0x16($s0)
    ctx->pc = 0x4951c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 22), (uint8_t)GPR_U32(ctx, 2));
    // 0x4951cc: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x4951ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4951d0: 0xae030018  sw          $v1, 0x18($s0)
    ctx->pc = 0x4951d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 3));
    // 0x4951d4: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x4951d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x4951d8: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x4951d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
    // 0x4951dc: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x4951dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4951e0: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x4951e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
    // 0x4951e4: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x4951e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4951e8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x4951e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
    // 0x4951ec: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x4951ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4951f0: 0xae050028  sw          $a1, 0x28($s0)
    ctx->pc = 0x4951f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 5));
    // 0x4951f4: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x4951f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x4951f8: 0xae02002c  sw          $v0, 0x2C($s0)
    ctx->pc = 0x4951f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
    // 0x4951fc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x4951fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x495200: 0xae030030  sw          $v1, 0x30($s0)
    ctx->pc = 0x495200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 3));
    // 0x495204: 0x97a4003c  lhu         $a0, 0x3C($sp)
    ctx->pc = 0x495204u;
    SET_GPR_ZE32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x495208: 0xa6040014  sh          $a0, 0x14($s0)
    ctx->pc = 0x495208u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 4));
    // 0x49520c: 0x97a2000e  lhu         $v0, 0xE($sp)
    ctx->pc = 0x49520cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x495210: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x495210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x495214: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x495214u;
    {
        const bool branch_taken_0x495214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495214u;
        // 0x495218: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495214) {
            ctx->pc = 0x495280u;
            goto label_495280;
        }
    }
    ctx->pc = 0x49521Cu;
    // 0x49521c: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x49521cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x495220: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x495220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x495224: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x495224u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x495228: 0x97a3000e  lhu         $v1, 0xE($sp)
    ctx->pc = 0x495228u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
    // 0x49522c: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x49522cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x495230: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x495230u;
    {
        const bool branch_taken_0x495230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495230u;
        // 0x495234: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495230) {
            ctx->pc = 0x495280u;
            goto label_495280;
        }
    }
    ctx->pc = 0x495238u;
    // 0x495238: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x495238u;
    {
        const bool branch_taken_0x495238 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x49523Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495238u;
        // 0x49523c: 0x92030036  lbu         $v1, 0x36($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 54)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495238) {
            ctx->pc = 0x49525Cu;
            goto label_49525c;
        }
    }
    ctx->pc = 0x495240u;
    // 0x495240: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x495240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x495244: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x495244u;
    {
        const bool branch_taken_0x495244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495244u;
        // 0x495248: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495244) {
            ctx->pc = 0x495278u;
            goto label_495278;
        }
    }
    ctx->pc = 0x49524Cu;
    // 0x49524c: 0xc121888  jal         func_486220
    ctx->pc = 0x49524Cu;
    SET_GPR_U32(ctx, 31, 0x495254u);
    ctx->pc = 0x495250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49524Cu;
    // 0x495250: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x49524Cu, 0x495254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495254u;
label_495254:
    // 0x495254: 0x10000061  b           . + 4 + (0x61 << 2)
    ctx->pc = 0x495254u;
    {
        const bool branch_taken_0x495254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495254u;
        // 0x495258: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495254) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x49525Cu;
label_49525c:
    // 0x49525c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x49525cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x495260: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x495260u;
    {
        const bool branch_taken_0x495260 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x495264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495260u;
        // 0x495264: 0x306200fd  andi        $v0, $v1, 0xFD (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)253);
        ctx->in_delay_slot = false;
        if (branch_taken_0x495260) {
            ctx->pc = 0x495278u;
            goto label_495278;
        }
    }
    ctx->pc = 0x495268u;
    // 0x495268: 0xc121888  jal         func_486220
    ctx->pc = 0x495268u;
    SET_GPR_U32(ctx, 31, 0x495270u);
    ctx->pc = 0x49526Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495268u;
    // 0x49526c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x495268u, 0x495270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495270u;
label_495270:
    // 0x495270: 0x1000005a  b           . + 4 + (0x5A << 2)
    ctx->pc = 0x495270u;
    {
        const bool branch_taken_0x495270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495270u;
        // 0x495274: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495270) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x495278u;
label_495278:
    // 0x495278: 0xa2020036  sb          $v0, 0x36($s0)
    ctx->pc = 0x495278u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 54), (uint8_t)GPR_U32(ctx, 2));
    // 0x49527c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x49527cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_495280:
    // 0x495280: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x495280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495284: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x495284u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x495288: 0xc11eeae  jal         func_47BAB8
    ctx->pc = 0x495288u;
    SET_GPR_U32(ctx, 31, 0x495290u);
    ctx->pc = 0x49528Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495288u;
    // 0x49528c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BAB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BAB8u, 0x495288u, 0x495290u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495290u;
label_495290:
    // 0x495290: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x495290u;
    {
        const bool branch_taken_0x495290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x495294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495290u;
        // 0x495294: 0x8fa30054  lw          $v1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495290) {
            ctx->pc = 0x4952A8u;
            goto label_4952a8;
        }
    }
    ctx->pc = 0x495298u;
    // 0x495298: 0xc121888  jal         func_486220
    ctx->pc = 0x495298u;
    SET_GPR_U32(ctx, 31, 0x4952A0u);
    ctx->pc = 0x49529Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495298u;
    // 0x49529c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x495298u, 0x4952A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4952A0u;
label_4952a0:
    // 0x4952a0: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x4952A0u;
    {
        const bool branch_taken_0x4952a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4952A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4952A0u;
        // 0x4952a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4952a0) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x4952A8u;
label_4952a8:
    // 0x4952a8: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x4952a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
    // 0x4952ac: 0x3442b000  ori         $v0, $v0, 0xB000
    ctx->pc = 0x4952acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)45056);
    // 0x4952b0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4952b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4952b4: 0x2c632003  sltiu       $v1, $v1, 0x2003
    ctx->pc = 0x4952b4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8195) ? 1 : 0);
    // 0x4952b8: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
    ctx->pc = 0x4952B8u;
    {
        const bool branch_taken_0x4952b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4952BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4952B8u;
        // 0x4952bc: 0x97a2000e  lhu         $v0, 0xE($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4952b8) {
            ctx->pc = 0x4953B8u;
            goto label_4953b8;
        }
    }
    ctx->pc = 0x4952C0u;
    // 0x4952c0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4952c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4952c4: 0x2c830002  sltiu       $v1, $a0, 0x2
    ctx->pc = 0x4952c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4952c8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x4952C8u;
    {
        const bool branch_taken_0x4952c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4952CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4952C8u;
        // 0x4952cc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4952c8) {
            ctx->pc = 0x495314u;
            goto label_495314;
        }
    }
    ctx->pc = 0x4952D0u;
    // 0x4952d0: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x4952d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x4952d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x4952d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4952d8: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x4952D8u;
    SET_GPR_U32(ctx, 31, 0x4952E0u);
    ctx->pc = 0x4952DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4952D8u;
    // 0x4952dc: 0x8fa60050  lw          $a2, 0x50($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x4952D8u, 0x4952E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4952E0u;
label_4952e0:
    // 0x4952e0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4952e0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4952e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x4952e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4952e8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4952E8u;
    {
        const bool branch_taken_0x4952e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4952e8) {
            ctx->pc = 0x4952ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4952E8u;
            // 0x4952ec: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495300u;
            goto label_495300;
        }
    }
    ctx->pc = 0x4952F0u;
    // 0x4952f0: 0xc121888  jal         func_486220
    ctx->pc = 0x4952F0u;
    SET_GPR_U32(ctx, 31, 0x4952F8u);
    ctx->pc = 0x4952F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4952F0u;
    // 0x4952f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x4952F0u, 0x4952F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4952F8u;
label_4952f8:
    // 0x4952f8: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x4952F8u;
    {
        const bool branch_taken_0x4952f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4952FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4952F8u;
        // 0x4952fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4952f8) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x495300u;
label_495300:
    // 0x495300: 0x832821  addu        $a1, $a0, $v1
    ctx->pc = 0x495300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x495304: 0xc10f644  jal         func_43D910
    ctx->pc = 0x495304u;
    SET_GPR_U32(ctx, 31, 0x49530Cu);
    ctx->pc = 0x495308u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495304u;
    // 0x495308: 0x24a5007f  addiu       $a1, $a1, 0x7F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 127));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x495304u, 0x49530Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49530Cu;
label_49530c:
    // 0x49530c: 0x10000033  b           . + 4 + (0x33 << 2)
    ctx->pc = 0x49530Cu;
    {
        const bool branch_taken_0x49530c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49530Cu;
        // 0x495310: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49530c) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x495314u;
label_495314:
    // 0x495314: 0x14820021  bne         $a0, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x495314u;
    {
        const bool branch_taken_0x495314 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x495318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495314u;
        // 0x495318: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495314) {
            ctx->pc = 0x49539Cu;
            goto label_49539c;
        }
    }
    ctx->pc = 0x49531Cu;
    // 0x49531c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x49531cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x495320: 0x8e060028  lw          $a2, 0x28($s0)
    ctx->pc = 0x495320u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x495324: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x495324u;
    SET_GPR_U32(ctx, 31, 0x49532Cu);
    ctx->pc = 0x495328u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495324u;
    // 0x495328: 0x8c450004  lw          $a1, 0x4($v0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x495324u, 0x49532Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49532Cu;
label_49532c:
    // 0x49532c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x49532cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x495330: 0x50430005  beql        $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x495330u;
    {
        const bool branch_taken_0x495330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x495330) {
            ctx->pc = 0x495334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495330u;
            // 0x495334: 0x8e06002c  lw          $a2, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x495348u;
            goto label_495348;
        }
    }
    ctx->pc = 0x495338u;
    // 0x495338: 0xc121888  jal         func_486220
    ctx->pc = 0x495338u;
    SET_GPR_U32(ctx, 31, 0x495340u);
    ctx->pc = 0x49533Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495338u;
    // 0x49533c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x495338u, 0x495340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495340u;
label_495340:
    // 0x495340: 0x10000026  b           . + 4 + (0x26 << 2)
    ctx->pc = 0x495340u;
    {
        const bool branch_taken_0x495340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495340u;
        // 0x495344: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495340) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x495348u;
label_495348:
    // 0x495348: 0x10c0000b  beqz        $a2, . + 4 + (0xB << 2)
    ctx->pc = 0x495348u;
    {
        const bool branch_taken_0x495348 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x49534Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495348u;
        // 0x49534c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495348) {
            ctx->pc = 0x495378u;
            goto label_495378;
        }
    }
    ctx->pc = 0x495350u;
    // 0x495350: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x495350u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x495354: 0xc11fb56  jal         func_47ED58
    ctx->pc = 0x495354u;
    SET_GPR_U32(ctx, 31, 0x49535Cu);
    ctx->pc = 0x495358u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495354u;
    // 0x495358: 0x24a5ffb0  addiu       $a1, $a1, -0x50 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47ED58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47ED58u, 0x495354u, 0x49535Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49535Cu;
label_49535c:
    // 0x49535c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x49535cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
    // 0x495360: 0x50430006  beql        $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x495360u;
    {
        const bool branch_taken_0x495360 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x495360) {
            ctx->pc = 0x495364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x495360u;
            // 0x495364: 0x8e05002c  lw          $a1, 0x2C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x49537Cu;
            goto label_49537c;
        }
    }
    ctx->pc = 0x495368u;
    // 0x495368: 0xc121888  jal         func_486220
    ctx->pc = 0x495368u;
    SET_GPR_U32(ctx, 31, 0x495370u);
    ctx->pc = 0x49536Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x495368u;
    // 0x49536c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x495368u, 0x495370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495370u;
label_495370:
    // 0x495370: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x495370u;
    {
        const bool branch_taken_0x495370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495370u;
        // 0x495374: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495370) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x495378u;
label_495378:
    // 0x495378: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x495378u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_49537c:
    // 0x49537c: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x49537cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x495380: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x495380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x495384: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x495384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x495388: 0xa32821  addu        $a1, $a1, $v1
    ctx->pc = 0x495388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x49538c: 0xc10f644  jal         func_43D910
    ctx->pc = 0x49538Cu;
    SET_GPR_U32(ctx, 31, 0x495394u);
    ctx->pc = 0x495390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49538Cu;
    // 0x495390: 0x24a5002f  addiu       $a1, $a1, 0x2F (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 47));
    ctx->in_delay_slot = false;
    ctx->pc = 0x43D910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43D910u, 0x49538Cu, 0x495394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x495394u;
label_495394:
    // 0x495394: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x495394u;
    {
        const bool branch_taken_0x495394 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x495398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x495394u;
        // 0x495398: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x495394) {
            ctx->pc = 0x4953B0u;
            goto label_4953b0;
        }
    }
    ctx->pc = 0x49539Cu;
label_49539c:
    // 0x49539c: 0xc121888  jal         func_486220
    ctx->pc = 0x49539Cu;
    SET_GPR_U32(ctx, 31, 0x4953A4u);
    ctx->pc = 0x4953A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49539Cu;
    // 0x4953a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x486220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x486220u, 0x49539Cu, 0x4953A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4953A4u;
label_4953a4:
    // 0x4953a4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4953A4u;
    {
        const bool branch_taken_0x4953a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4953A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4953A4u;
        // 0x4953a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4953a4) {
            ctx->pc = 0x4953DCu;
            goto label_4953dc;
        }
    }
    ctx->pc = 0x4953ACu;
    // 0x4953ac: 0x0  nop
    ctx->pc = 0x4953acu;
    // NOP
label_4953b0:
    // 0x4953b0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x4953B0u;
    {
        const bool branch_taken_0x4953b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4953B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4953B0u;
        // 0x4953b4: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4953b0) {
            ctx->pc = 0x4953E0u;
            goto label_4953e0;
        }
    }
    ctx->pc = 0x4953B8u;
label_4953b8:
    // 0x4953b8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4953b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4953bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x4953bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x4953c0: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x4953c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x4953c4: 0xc11eff2  jal         func_47BFC8
    ctx->pc = 0x4953C4u;
    SET_GPR_U32(ctx, 31, 0x4953CCu);
    ctx->pc = 0x4953C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4953C4u;
    // 0x4953c8: 0x34840004  ori         $a0, $a0, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x47BFC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47BFC8u, 0x4953C4u, 0x4953CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4953CCu;
label_4953cc:
    // 0x4953cc: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x4953ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x4953d0: 0xc11f024  jal         func_47C090
    ctx->pc = 0x4953D0u;
    SET_GPR_U32(ctx, 31, 0x4953D8u);
    ctx->pc = 0x4953D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4953D0u;
    // 0x4953d4: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x47C090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C090u, 0x4953D0u, 0x4953D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4953D8u;
label_4953d8:
    // 0x4953d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x4953d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4953dc:
    // 0x4953dc: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4953dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_4953e0:
    // 0x4953e0: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4953e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4953e4: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4953e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4953e8: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4953e8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4953ec: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4953ecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4953f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x4953f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4953f4: 0x3e00008  jr          $ra
    ctx->pc = 0x4953F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4953F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4953F4u;
        // 0x4953f8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4953F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4953FCu;
    // 0x4953fc: 0x0  nop
    ctx->pc = 0x4953fcu;
    // NOP
    ctx->pc = 0x495400u;
}
