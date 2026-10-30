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

// Function: sub_004AE0B8
// Address: 0x4ae0b8 - 0x4ae198
void sub_004AE0B8_0x4ae0b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AE0B8_0x4ae0b8");
#endif

    switch (ctx->pc) {
        case 0x4ae16cu: goto label_4ae16c;
        case 0x4ae180u: goto label_4ae180;
        default: break;
    }

    ctx->pc = 0x4ae0b8u;

    // 0x4ae0b8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x4ae0b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x4ae0bc: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ae0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ae0c0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x4ae0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x4ae0c4: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x4ae0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x4ae0c8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x4ae0c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0cc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x4ae0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x4ae0d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ae0d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0d4: 0x24440470  addiu       $a0, $v0, 0x470
    ctx->pc = 0x4ae0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1136));
    // 0x4ae0d8: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4ae0d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ae0dc: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x4ae0dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ae0e0: 0x1620000c  bnez        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x4AE0E0u;
    {
        const bool branch_taken_0x4ae0e0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x4AE0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE0E0u;
        // 0x4ae0e4: 0xace40028  sw          $a0, 0x28($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae0e0) {
            ctx->pc = 0x4AE114u;
            goto label_4ae114;
        }
    }
    ctx->pc = 0x4AE0E8u;
    // 0x4ae0e8: 0x94830008  lhu         $v1, 0x8($a0)
    ctx->pc = 0x4ae0e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ae0ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x4ae0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x4ae0f0: 0xdc460470  ld          $a2, 0x470($v0)
    ctx->pc = 0x4ae0f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 1136)));
    // 0x4ae0f4: 0xdc840008  ld          $a0, 0x8($a0)
    ctx->pc = 0x4ae0f4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4ae0f8: 0x24e2fff8  addiu       $v0, $a3, -0x8
    ctx->pc = 0x4ae0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967288));
    // 0x4ae0fc: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x4ae0fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4ae100: 0xffa60010  sd          $a2, 0x10($sp)
    ctx->pc = 0x4ae100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 6));
    // 0x4ae104: 0xffa40018  sd          $a0, 0x18($sp)
    ctx->pc = 0x4ae104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 4));
    // 0x4ae108: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4ae108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4ae10c: 0xace50028  sw          $a1, 0x28($a3)
    ctx->pc = 0x4ae10cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 5));
    // 0x4ae110: 0xa7a30018  sh          $v1, 0x18($sp)
    ctx->pc = 0x4ae110u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 24), (uint16_t)GPR_U32(ctx, 3));
label_4ae114:
    // 0x4ae114: 0x3c070059  lui         $a3, 0x59
    ctx->pc = 0x4ae114u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)89 << 16));
    // 0x4ae118: 0x2524fff8  addiu       $a0, $t1, -0x8
    ctx->pc = 0x4ae118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x4ae11c: 0x24e20490  addiu       $v0, $a3, 0x490
    ctx->pc = 0x4ae11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1168));
    // 0x4ae120: 0x2042023  subu        $a0, $s0, $a0
    ctx->pc = 0x4ae120u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x4ae124: 0xad220028  sw          $v0, 0x28($t1)
    ctx->pc = 0x4ae124u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
    // 0x4ae128: 0x32280002  andi        $t0, $s1, 0x2
    ctx->pc = 0x4ae128u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x4ae12c: 0x94430008  lhu         $v1, 0x8($v0)
    ctx->pc = 0x4ae12cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ae130: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x4ae130u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4ae134: 0xdce50490  ld          $a1, 0x490($a3)
    ctx->pc = 0x4ae134u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 7), 1168)));
    // 0x4ae138: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x4ae138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x4ae13c: 0xffa60008  sd          $a2, 0x8($sp)
    ctx->pc = 0x4ae13cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 6));
    // 0x4ae140: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x4ae140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x4ae144: 0xa7a30008  sh          $v1, 0x8($sp)
    ctx->pc = 0x4ae144u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 3));
    // 0x4ae148: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AE148u;
    {
        const bool branch_taken_0x4ae148 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE14Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE148u;
        // 0x4ae14c: 0xad3d0028  sw          $sp, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae148) {
            ctx->pc = 0x4AE16Cu;
            goto label_4ae16c;
        }
    }
    ctx->pc = 0x4AE150u;
    // 0x4ae150: 0x3c020059  lui         $v0, 0x59
    ctx->pc = 0x4ae150u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)89 << 16));
    // 0x4ae154: 0x8d240020  lw          $a0, 0x20($t1)
    ctx->pc = 0x4ae154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 32)));
    // 0x4ae158: 0x24420668  addiu       $v0, $v0, 0x668
    ctx->pc = 0x4ae158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1640));
    // 0x4ae15c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AE15Cu;
    {
        const bool branch_taken_0x4ae15c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE15Cu;
        // 0x4ae160: 0xad220028  sw          $v0, 0x28($t1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 9), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae15c) {
            ctx->pc = 0x4AE16Cu;
            goto label_4ae16c;
        }
    }
    ctx->pc = 0x4AE164u;
    // 0x4ae164: 0xc136792  jal         func_4D9E48
    ctx->pc = 0x4AE164u;
    SET_GPR_U32(ctx, 31, 0x4AE16Cu);
    ctx->pc = 0x4D9E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4D9E48u, 0x4AE164u, 0x4AE16Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE16Cu;
label_4ae16c:
    // 0x4ae16c: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x4ae16cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x4ae170: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AE170u;
    {
        const bool branch_taken_0x4ae170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AE174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE170u;
        // 0x4ae174: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ae170) {
            ctx->pc = 0x4AE184u;
            goto label_4ae184;
        }
    }
    ctx->pc = 0x4AE178u;
    // 0x4ae178: 0xc10b208  jal         func_42C820
    ctx->pc = 0x4AE178u;
    SET_GPR_U32(ctx, 31, 0x4AE180u);
    ctx->pc = 0x4AE17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AE178u;
    // 0x4ae17c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x42C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x42C820u, 0x4AE178u, 0x4AE180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AE180u;
label_4ae180:
    // 0x4ae180: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x4ae180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_4ae184:
    // 0x4ae184: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x4ae184u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4ae188: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x4ae188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ae18c: 0x3e00008  jr          $ra
    ctx->pc = 0x4AE18Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AE190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AE18Cu;
        // 0x4ae190: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AE18Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AE194u;
    // 0x4ae194: 0x0  nop
    ctx->pc = 0x4ae194u;
    // NOP
    ctx->pc = 0x4ae198u;
}
