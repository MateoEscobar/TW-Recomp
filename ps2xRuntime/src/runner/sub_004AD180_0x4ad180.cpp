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

// Function: sub_004AD180
// Address: 0x4ad180 - 0x4ad3f8
void sub_004AD180_0x4ad180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004AD180_0x4ad180");
#endif

    switch (ctx->pc) {
        case 0x4ad1c0u: goto label_4ad1c0;
        case 0x4ad1dcu: goto label_4ad1dc;
        case 0x4ad238u: goto label_4ad238;
        case 0x4ad270u: goto label_4ad270;
        case 0x4ad2c8u: goto label_4ad2c8;
        case 0x4ad2e0u: goto label_4ad2e0;
        case 0x4ad338u: goto label_4ad338;
        case 0x4ad370u: goto label_4ad370;
        case 0x4ad3c8u: goto label_4ad3c8;
        case 0x4ad3e0u: goto label_4ad3e0;
        default: break;
    }

    ctx->pc = 0x4ad180u;

    // 0x4ad180: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad180u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad184: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad184u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad188: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad188u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad18c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad18cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad190: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad194: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad198: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad198u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad19c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD19Cu;
    {
        const bool branch_taken_0x4ad19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD19Cu;
        // 0x4ad1a0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad19c) {
            ctx->pc = 0x4AD1ACu;
            goto label_4ad1ac;
        }
    }
    ctx->pc = 0x4AD1A4u;
    // 0x4ad1a4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD1A4u;
    {
        const bool branch_taken_0x4ad1a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1A4u;
        // 0x4ad1a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad1a4) {
            ctx->pc = 0x4AD1C4u;
            goto label_4ad1c4;
        }
    }
    ctx->pc = 0x4AD1ACu;
label_4ad1ac:
    // 0x4ad1ac: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad1b0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD1B0u;
    {
        const bool branch_taken_0x4ad1b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1B0u;
        // 0x4ad1b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad1b0) {
            ctx->pc = 0x4AD1C4u;
            goto label_4ad1c4;
        }
    }
    ctx->pc = 0x4AD1B8u;
    // 0x4ad1b8: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD1B8u;
    SET_GPR_U32(ctx, 31, 0x4AD1C0u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD1B8u, 0x4AD1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1C0u;
label_4ad1c0:
    // 0x4ad1c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad1c4:
    // 0x4ad1c4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4AD1C4u;
    {
        const bool branch_taken_0x4ad1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1C4u;
        // 0x4ad1c8: 0x11283c  dsll32      $a1, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad1c4) {
            ctx->pc = 0x4AD1DCu;
            goto label_4ad1dc;
        }
    }
    ctx->pc = 0x4AD1CCu;
    // 0x4ad1cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad1d0: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x4ad1d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x4ad1d4: 0xc12b350  jal         func_4ACD40
    ctx->pc = 0x4AD1D4u;
    SET_GPR_U32(ctx, 31, 0x4AD1DCu);
    ctx->pc = 0x4AD1D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD1D4u;
    // 0x4ad1d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD40u, 0x4AD1D4u, 0x4AD1DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD1DCu;
label_4ad1dc:
    // 0x4ad1dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad1dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad1e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad1e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad1e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad1e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad1e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad1e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad1ec: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD1ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD1ECu;
        // 0x4ad1f0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD1ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD1F4u;
    // 0x4ad1f4: 0x0  nop
    ctx->pc = 0x4ad1f4u;
    // NOP
    // 0x4ad1f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad1f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad1fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad1fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad200: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad200u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad204: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad208: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad208u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad20c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad210: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad210u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad214: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD214u;
    {
        const bool branch_taken_0x4ad214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD214u;
        // 0x4ad218: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad214) {
            ctx->pc = 0x4AD224u;
            goto label_4ad224;
        }
    }
    ctx->pc = 0x4AD21Cu;
    // 0x4ad21c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD21Cu;
    {
        const bool branch_taken_0x4ad21c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD21Cu;
        // 0x4ad220: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad21c) {
            ctx->pc = 0x4AD23Cu;
            goto label_4ad23c;
        }
    }
    ctx->pc = 0x4AD224u;
label_4ad224:
    // 0x4ad224: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad228: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD228u;
    {
        const bool branch_taken_0x4ad228 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD228u;
        // 0x4ad22c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad228) {
            ctx->pc = 0x4AD23Cu;
            goto label_4ad23c;
        }
    }
    ctx->pc = 0x4AD230u;
    // 0x4ad230: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD230u;
    SET_GPR_U32(ctx, 31, 0x4AD238u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD230u, 0x4AD238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD238u;
label_4ad238:
    // 0x4ad238: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad23c:
    // 0x4ad23c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AD23Cu;
    {
        const bool branch_taken_0x4ad23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD23Cu;
        // 0x4ad240: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad23c) {
            ctx->pc = 0x4AD270u;
            goto label_4ad270;
        }
    }
    ctx->pc = 0x4AD244u;
    // 0x4ad244: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AD244u;
    {
        const bool branch_taken_0x4ad244 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AD248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD244u;
        // 0x4ad248: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad244) {
            ctx->pc = 0x4AD268u;
            goto label_4ad268;
        }
    }
    ctx->pc = 0x4AD24Cu;
    // 0x4ad24c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad24cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad250: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad250u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ad254: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x4ad254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x4ad258: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD258u;
    {
        const bool branch_taken_0x4ad258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad258) {
            ctx->pc = 0x4AD268u;
            goto label_4ad268;
        }
    }
    ctx->pc = 0x4AD260u;
    // 0x4ad260: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x4ad260u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x4ad264: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4ad264u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ad268:
    // 0x4ad268: 0xc12b350  jal         func_4ACD40
    ctx->pc = 0x4AD268u;
    SET_GPR_U32(ctx, 31, 0x4AD270u);
    ctx->pc = 0x4AD26Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD268u;
    // 0x4ad26c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD40u, 0x4AD268u, 0x4AD270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD270u;
label_4ad270:
    // 0x4ad270: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad270u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad274: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad274u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad278: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad278u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad27c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad27cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad280: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD280u;
        // 0x4ad284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD288u;
    // 0x4ad288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad28c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad28cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad294: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad294u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad298: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad298u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad29c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad29cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad2a0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad2a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad2a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD2A4u;
    {
        const bool branch_taken_0x4ad2a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD2A4u;
        // 0x4ad2a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad2a4) {
            ctx->pc = 0x4AD2B4u;
            goto label_4ad2b4;
        }
    }
    ctx->pc = 0x4AD2ACu;
    // 0x4ad2ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD2ACu;
    {
        const bool branch_taken_0x4ad2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD2B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD2ACu;
        // 0x4ad2b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad2ac) {
            ctx->pc = 0x4AD2CCu;
            goto label_4ad2cc;
        }
    }
    ctx->pc = 0x4AD2B4u;
label_4ad2b4:
    // 0x4ad2b4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad2b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD2B8u;
    {
        const bool branch_taken_0x4ad2b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD2B8u;
        // 0x4ad2bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad2b8) {
            ctx->pc = 0x4AD2CCu;
            goto label_4ad2cc;
        }
    }
    ctx->pc = 0x4AD2C0u;
    // 0x4ad2c0: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD2C0u;
    SET_GPR_U32(ctx, 31, 0x4AD2C8u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD2C0u, 0x4AD2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD2C8u;
label_4ad2c8:
    // 0x4ad2c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad2cc:
    // 0x4ad2cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD2CCu;
    {
        const bool branch_taken_0x4ad2cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD2CCu;
        // 0x4ad2d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad2cc) {
            ctx->pc = 0x4AD2E0u;
            goto label_4ad2e0;
        }
    }
    ctx->pc = 0x4AD2D4u;
    // 0x4ad2d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad2d8: 0xc12b350  jal         func_4ACD40
    ctx->pc = 0x4AD2D8u;
    SET_GPR_U32(ctx, 31, 0x4AD2E0u);
    ctx->pc = 0x4AD2DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD2D8u;
    // 0x4ad2dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD40u, 0x4AD2D8u, 0x4AD2E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD2E0u;
label_4ad2e0:
    // 0x4ad2e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad2e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad2e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad2e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad2ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad2ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad2f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD2F0u;
        // 0x4ad2f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD2F8u;
    // 0x4ad2f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad2fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad300: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad304: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad304u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad308: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad30c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad310: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad310u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad314: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD314u;
    {
        const bool branch_taken_0x4ad314 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD314u;
        // 0x4ad318: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad314) {
            ctx->pc = 0x4AD324u;
            goto label_4ad324;
        }
    }
    ctx->pc = 0x4AD31Cu;
    // 0x4ad31c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD31Cu;
    {
        const bool branch_taken_0x4ad31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD31Cu;
        // 0x4ad320: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad31c) {
            ctx->pc = 0x4AD33Cu;
            goto label_4ad33c;
        }
    }
    ctx->pc = 0x4AD324u;
label_4ad324:
    // 0x4ad324: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad328: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD328u;
    {
        const bool branch_taken_0x4ad328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD328u;
        // 0x4ad32c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad328) {
            ctx->pc = 0x4AD33Cu;
            goto label_4ad33c;
        }
    }
    ctx->pc = 0x4AD330u;
    // 0x4ad330: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD330u;
    SET_GPR_U32(ctx, 31, 0x4AD338u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD330u, 0x4AD338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD338u;
label_4ad338:
    // 0x4ad338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad33c:
    // 0x4ad33c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4AD33Cu;
    {
        const bool branch_taken_0x4ad33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD33Cu;
        // 0x4ad340: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad33c) {
            ctx->pc = 0x4AD370u;
            goto label_4ad370;
        }
    }
    ctx->pc = 0x4AD344u;
    // 0x4ad344: 0x4a10008  bgez        $a1, . + 4 + (0x8 << 2)
    ctx->pc = 0x4AD344u;
    {
        const bool branch_taken_0x4ad344 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x4AD348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD344u;
        // 0x4ad348: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad344) {
            ctx->pc = 0x4AD368u;
            goto label_4ad368;
        }
    }
    ctx->pc = 0x4AD34Cu;
    // 0x4ad34c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x4ad34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad350: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x4ad350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x4ad354: 0x30420060  andi        $v0, $v0, 0x60
    ctx->pc = 0x4ad354u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)96);
    // 0x4ad358: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD358u;
    {
        const bool branch_taken_0x4ad358 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4ad358) {
            ctx->pc = 0x4AD368u;
            goto label_4ad368;
        }
    }
    ctx->pc = 0x4AD360u;
    // 0x4ad360: 0x5282f  dsubu       $a1, $zero, $a1
    ctx->pc = 0x4ad360u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) - GPR_U64(ctx, 5));
    // 0x4ad364: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x4ad364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_4ad368:
    // 0x4ad368: 0xc12b350  jal         func_4ACD40
    ctx->pc = 0x4AD368u;
    SET_GPR_U32(ctx, 31, 0x4AD370u);
    ctx->pc = 0x4AD36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD368u;
    // 0x4ad36c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD40u, 0x4AD368u, 0x4AD370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD370u;
label_4ad370:
    // 0x4ad370: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad370u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad374: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad374u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad378: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad37c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad37cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad380: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD380u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD380u;
        // 0x4ad384: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD380u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD388u;
    // 0x4ad388: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4ad388u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x4ad38c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x4ad38cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x4ad390: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x4ad390u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x4ad394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4ad394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4ad398: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x4ad398u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad39c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4ad39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4ad3a0: 0x9082001a  lbu         $v0, 0x1A($a0)
    ctx->pc = 0x4ad3a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 26)));
    // 0x4ad3a4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x4AD3A4u;
    {
        const bool branch_taken_0x4ad3a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3A4u;
        // 0x4ad3a8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3a4) {
            ctx->pc = 0x4AD3B4u;
            goto label_4ad3b4;
        }
    }
    ctx->pc = 0x4AD3ACu;
    // 0x4ad3ac: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x4AD3ACu;
    {
        const bool branch_taken_0x4ad3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3ACu;
        // 0x4ad3b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3ac) {
            ctx->pc = 0x4AD3CCu;
            goto label_4ad3cc;
        }
    }
    ctx->pc = 0x4AD3B4u;
label_4ad3b4:
    // 0x4ad3b4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4ad3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4ad3b8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD3B8u;
    {
        const bool branch_taken_0x4ad3b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3B8u;
        // 0x4ad3bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3b8) {
            ctx->pc = 0x4AD3CCu;
            goto label_4ad3cc;
        }
    }
    ctx->pc = 0x4AD3C0u;
    // 0x4ad3c0: 0xc12b652  jal         func_4AD948
    ctx->pc = 0x4AD3C0u;
    SET_GPR_U32(ctx, 31, 0x4AD3C8u);
    ctx->pc = 0x4AD948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AD948u, 0x4AD3C0u, 0x4AD3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD3C8u;
label_4ad3c8:
    // 0x4ad3c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x4ad3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4ad3cc:
    // 0x4ad3cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4AD3CCu;
    {
        const bool branch_taken_0x4ad3cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4AD3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3CCu;
        // 0x4ad3d0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4ad3cc) {
            ctx->pc = 0x4AD3E0u;
            goto label_4ad3e0;
        }
    }
    ctx->pc = 0x4AD3D4u;
    // 0x4ad3d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4ad3d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad3d8: 0xc12b350  jal         func_4ACD40
    ctx->pc = 0x4AD3D8u;
    SET_GPR_U32(ctx, 31, 0x4AD3E0u);
    ctx->pc = 0x4AD3DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4AD3D8u;
    // 0x4ad3dc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4ACD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4ACD40u, 0x4AD3D8u, 0x4AD3E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4AD3E0u;
label_4ad3e0:
    // 0x4ad3e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4ad3e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4ad3e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4ad3e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4ad3e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x4ad3e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4ad3ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x4ad3ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4ad3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4AD3F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4AD3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4AD3F0u;
        // 0x4ad3f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4AD3F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4AD3F8u;
}
