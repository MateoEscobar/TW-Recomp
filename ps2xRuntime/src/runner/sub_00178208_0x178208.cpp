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

// Function: sub_00178208
// Address: 0x178208 - 0x1782e8
void sub_00178208_0x178208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00178208_0x178208");
#endif

    switch (ctx->pc) {
        case 0x178208u: goto label_178208;
        case 0x17820cu: goto label_17820c;
        case 0x178210u: goto label_178210;
        case 0x178214u: goto label_178214;
        case 0x178218u: goto label_178218;
        case 0x17821cu: goto label_17821c;
        case 0x178220u: goto label_178220;
        case 0x178224u: goto label_178224;
        case 0x178228u: goto label_178228;
        case 0x17822cu: goto label_17822c;
        case 0x178230u: goto label_178230;
        case 0x178234u: goto label_178234;
        case 0x178238u: goto label_178238;
        case 0x17823cu: goto label_17823c;
        case 0x178240u: goto label_178240;
        case 0x178244u: goto label_178244;
        case 0x178248u: goto label_178248;
        case 0x17824cu: goto label_17824c;
        case 0x178250u: goto label_178250;
        case 0x178254u: goto label_178254;
        case 0x178258u: goto label_178258;
        case 0x17825cu: goto label_17825c;
        case 0x178260u: goto label_178260;
        case 0x178264u: goto label_178264;
        case 0x178268u: goto label_178268;
        case 0x17826cu: goto label_17826c;
        case 0x178270u: goto label_178270;
        case 0x178274u: goto label_178274;
        case 0x178278u: goto label_178278;
        case 0x17827cu: goto label_17827c;
        case 0x178280u: goto label_178280;
        case 0x178284u: goto label_178284;
        case 0x178288u: goto label_178288;
        case 0x17828cu: goto label_17828c;
        case 0x178290u: goto label_178290;
        case 0x178294u: goto label_178294;
        case 0x178298u: goto label_178298;
        case 0x17829cu: goto label_17829c;
        case 0x1782a0u: goto label_1782a0;
        case 0x1782a4u: goto label_1782a4;
        case 0x1782a8u: goto label_1782a8;
        case 0x1782acu: goto label_1782ac;
        case 0x1782b0u: goto label_1782b0;
        case 0x1782b4u: goto label_1782b4;
        case 0x1782b8u: goto label_1782b8;
        case 0x1782bcu: goto label_1782bc;
        case 0x1782c0u: goto label_1782c0;
        case 0x1782c4u: goto label_1782c4;
        case 0x1782c8u: goto label_1782c8;
        case 0x1782ccu: goto label_1782cc;
        case 0x1782d0u: goto label_1782d0;
        case 0x1782d4u: goto label_1782d4;
        case 0x1782d8u: goto label_1782d8;
        case 0x1782dcu: goto label_1782dc;
        case 0x1782e0u: goto label_1782e0;
        case 0x1782e4u: goto label_1782e4;
        default: break;
    }

    ctx->pc = 0x178208u;

label_178208:
    // 0x178208: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x178208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_17820c:
    // 0x17820c: 0x3c020054  lui         $v0, 0x54
    ctx->pc = 0x17820cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)84 << 16));
label_178210:
    // 0x178210: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x178210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_178214:
    // 0x178214: 0x24428b28  addiu       $v0, $v0, -0x74D8
    ctx->pc = 0x178214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937384));
label_178218:
    // 0x178218: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x178218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_17821c:
    // 0x17821c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x17821cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_178220:
    // 0x178220: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x178220u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_178224:
    // 0x178224: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x178224u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_178228:
    // 0x178228: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x178228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_17822c:
    // 0x17822c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17822cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_178230:
    // 0x178230: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x178230u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_178234:
    // 0x178234: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x178234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_178238:
    // 0x178238: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x178238u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17823c:
    // 0x17823c: 0x3c110051  lui         $s1, 0x51
    ctx->pc = 0x17823cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)81 << 16));
label_178240:
    // 0x178240: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x178240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_178244:
    // 0x178244: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x178244u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_178248:
    // 0x178248: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x178248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_17824c:
    // 0x17824c: 0x60f809  jalr        $v1
label_178250:
    if (ctx->pc == 0x178250u) {
        ctx->pc = 0x178250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17824Cu;
        // 0x178250: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178254u;
        goto label_178254;
    }
    ctx->pc = 0x17824Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178254u);
        ctx->pc = 0x178250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17824Cu;
        // 0x178250: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17824Cu, 0x178254u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178254u;
label_178254:
    // 0x178254: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x178254u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_178258:
    // 0x178258: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x178258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_17825c:
    // 0x17825c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x17825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178260:
    // 0x178260: 0x844400b8  lh          $a0, 0xB8($v0)
    ctx->pc = 0x178260u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 184)));
label_178264:
    // 0x178264: 0x8c4300bc  lw          $v1, 0xBC($v0)
    ctx->pc = 0x178264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 188)));
label_178268:
    // 0x178268: 0x60f809  jalr        $v1
label_17826c:
    if (ctx->pc == 0x17826Cu) {
        ctx->pc = 0x17826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178268u;
        // 0x17826c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178270u;
        goto label_178270;
    }
    ctx->pc = 0x178268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x178270u);
        ctx->pc = 0x17826Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x178268u;
        // 0x17826c: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x178268u, 0x178270u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x178270u;
label_178270:
    // 0x178270: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x178270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_178274:
    // 0x178274: 0x3c050055  lui         $a1, 0x55
    ctx->pc = 0x178274u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)85 << 16));
label_178278:
    // 0x178278: 0x24060039  addiu       $a2, $zero, 0x39
    ctx->pc = 0x178278u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_17827c:
    // 0x17827c: 0xc137b64  jal         func_4DED90
label_178280:
    if (ctx->pc == 0x178280u) {
        ctx->pc = 0x178280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17827Cu;
        // 0x178280: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
        ctx->in_delay_slot = false;
        ctx->pc = 0x178284u;
        goto label_178284;
    }
    ctx->pc = 0x17827Cu;
    SET_GPR_U32(ctx, 31, 0x178284u);
    ctx->pc = 0x178280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17827Cu;
    // 0x178280: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4DED90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4DED90u, 0x17827Cu, 0x178284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x178284u;
label_178284:
    // 0x178284: 0x8e2627e4  lw          $a2, 0x27E4($s1)
    ctx->pc = 0x178284u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 10212)));
label_178288:
    // 0x178288: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x178288u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_17828c:
    // 0x17828c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x17828cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_178290:
    // 0x178290: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x178290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_178294:
    // 0x178294: 0x844400c0  lh          $a0, 0xC0($v0)
    ctx->pc = 0x178294u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 192)));
label_178298:
    // 0x178298: 0x8c4300c4  lw          $v1, 0xC4($v0)
    ctx->pc = 0x178298u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 196)));
label_17829c:
    // 0x17829c: 0x60f809  jalr        $v1
label_1782a0:
    if (ctx->pc == 0x1782A0u) {
        ctx->pc = 0x1782A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17829Cu;
        // 0x1782a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1782A4u;
        goto label_1782a4;
    }
    ctx->pc = 0x17829Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1782A4u);
        ctx->pc = 0x1782A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17829Cu;
        // 0x1782a0: 0xc42021  addu        $a0, $a2, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17829Cu, 0x1782A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1782A4u;
label_1782a4:
    // 0x1782a4: 0x8e070010  lw          $a3, 0x10($s0)
    ctx->pc = 0x1782a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1782a8:
    // 0x1782a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1782a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1782ac:
    // 0x1782ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1782acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1782b0:
    // 0x1782b0: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x1782b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_1782b4:
    // 0x1782b4: 0x84440068  lh          $a0, 0x68($v0)
    ctx->pc = 0x1782b4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 104)));
label_1782b8:
    // 0x1782b8: 0x8c43006c  lw          $v1, 0x6C($v0)
    ctx->pc = 0x1782b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
label_1782bc:
    // 0x1782bc: 0x60f809  jalr        $v1
label_1782c0:
    if (ctx->pc == 0x1782C0u) {
        ctx->pc = 0x1782C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782BCu;
        // 0x1782c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1782C4u;
        goto label_1782c4;
    }
    ctx->pc = 0x1782BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1782C4u);
        ctx->pc = 0x1782C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782BCu;
        // 0x1782c0: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782BCu, 0x1782C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1782C4u;
label_1782c4:
    // 0x1782c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1782c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1782c8:
    // 0x1782c8: 0xc05fd28  jal         func_17F4A0
label_1782cc:
    if (ctx->pc == 0x1782CCu) {
        ctx->pc = 0x1782CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782C8u;
        // 0x1782cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1782D0u;
        goto label_1782d0;
    }
    ctx->pc = 0x1782C8u;
    SET_GPR_U32(ctx, 31, 0x1782D0u);
    ctx->pc = 0x1782CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1782C8u;
    // 0x1782cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x17F4A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17F4A0u, 0x1782C8u, 0x1782D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1782D0u;
label_1782d0:
    // 0x1782d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1782d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1782d4:
    // 0x1782d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1782d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1782d8:
    // 0x1782d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1782d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1782dc:
    // 0x1782dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1782dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1782e0:
    // 0x1782e0: 0x3e00008  jr          $ra
label_1782e4:
    if (ctx->pc == 0x1782E4u) {
        ctx->pc = 0x1782E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782E0u;
        // 0x1782e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1782E8u;
        goto label_fallthrough_0x1782e0;
    }
    ctx->pc = 0x1782E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1782E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1782E0u;
        // 0x1782e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1782E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1782e0:
    ctx->pc = 0x1782E8u;
}
